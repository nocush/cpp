#include "pch.h"

BankAccount::BankAccount(const std::string& lastName, const std::string& accountNumber, double balance) :
    last_name_(lastName), account_number_(accountNumber), balance_(balance) {}

void BankAccount::deposit(double amount) {
    if (amount <= 0)
        throw std::invalid_argument("Amount to deposit must be greater than 0");

    balance_ += amount;
}

void BankAccount::withdraw(double amount) {
    if (amount <= 0)
        throw std::invalid_argument("Amount to withdraw must be greater than 0");
    if (amount > getBalance())
        throw std::runtime_error("Amount to deposit exceeds account balance");

    balance_ -= amount;
}

bool BankAccount::isMillionaire() const {
    return getBalance() >= 1000000;
}


const std::string& BankAccount::getLastName() const {
    return last_name_;
}

void BankAccount::setLastName(const std::string& lastName) {
    last_name_ = lastName;
}

const std::string& BankAccount::getAccountNumber() const {
    return account_number_;
}

void BankAccount::setAccountNumber(const std::string& accountNumber) {
    account_number_ = accountNumber;
}

double BankAccount::getBalance() const {
    return balance_;
}

void BankAccount::setBalance(double balance) {
    balance_ = balance;
}







//TESTY



struct BankAccountTest : testing::Test {
    BankAccount* bankAccount;

    BankAccountTest() {
        bankAccount = new BankAccount("Musk", "70970693", 1000);
    }

    ~BankAccountTest() override {
        delete bankAccount;
    }
};

struct BankAccountState {
    double balance;
    double depositAmount, balanceAfterDeposit;
    double withdrawalAmount, balanceAfterWithdrawal;
    bool isMillionaire;
};

struct BankAccountParamTest : BankAccountTest, testing::WithParamInterface<BankAccountState> {
    BankAccountParamTest() {
        bankAccount->setBalance(GetParam().balance);
    }
};



TEST_F(BankAccountTest, Deposit) {
    EXPECT_THROW(bankAccount->deposit(0), std::invalid_argument);

    double startingBalance = 1.25;
    double depositAmount = 0.33;
    bankAccount->setBalance(startingBalance);
    bankAccount->deposit(depositAmount);
    EXPECT_DOUBLE_EQ(startingBalance + depositAmount, bankAccount->getBalance());
}

TEST_F(BankAccountTest, Withdrawal) {
    bankAccount->setBalance(1.25);
    EXPECT_THROW(bankAccount->withdraw(1.33), std::runtime_error);

    EXPECT_THROW(bankAccount->withdraw(0), std::invalid_argument);

    double startingBalance = 1.25;
    double withdrawalAmount = 0.33;
    bankAccount->setBalance(startingBalance);
    bankAccount->withdraw(withdrawalAmount);
    EXPECT_DOUBLE_EQ(startingBalance - withdrawalAmount, bankAccount->getBalance());
}

TEST_F(BankAccountTest, MillionaireCheck) {
    bankAccount->setBalance(999999);
    EXPECT_FALSE(bankAccount->isMillionaire());

    bankAccount->setBalance(1000000);
    EXPECT_TRUE(bankAccount->isMillionaire());

    bankAccount->setBalance(1000001);
    EXPECT_TRUE(bankAccount->isMillionaire());
}

TEST_F(BankAccountTest, BalanceSetter) {
    double amount = 123.123;
    bankAccount->setBalance(amount);
    EXPECT_DOUBLE_EQ(amount, bankAccount->getBalance());
}

TEST_P(BankAccountParamTest, NTests) {
    BankAccountState params = GetParam();

    bankAccount->setBalance(params.balance);
    bankAccount->deposit(params.depositAmount);
    EXPECT_DOUBLE_EQ(params.balanceAfterDeposit, bankAccount->getBalance());

    bankAccount->setBalance(params.balance);
    bankAccount->withdraw(params.withdrawalAmount);
    EXPECT_DOUBLE_EQ(params.balanceAfterWithdrawal, bankAccount->getBalance());

    bankAccount->setBalance(params.balance);
    EXPECT_EQ(params.isMillionaire, bankAccount->isMillionaire());
}

INSTANTIATE_TEST_CASE_P

(Default, BankAccountParamTest, testing::Values(
    BankAccountState{
            1024.24,
            31.25,
            1055.49,
            91.33,
            932.91,
            false
    },
    BankAccountState{
            1200000,
            12,
            1200012,
            12567,
            1187433,
            true
    }
));
