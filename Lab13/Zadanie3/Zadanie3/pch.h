#pragma once
#include <gtest/gtest.h>
#include <string>

class BankAccount {
private:
    std::string last_name_;
    std::string account_number_;
    double balance_;
public:
    BankAccount(const std::string& lastName, const std::string& accountNumber, double balance);

    void deposit(double amount);

    void withdraw(double amount);

    bool isMillionaire() const;

    const std::string& getLastName() const;

    void setLastName(const std::string& lastName);

    const std::string& getAccountNumber() const;

    void setAccountNumber(const std::string& accountNumber);

    double getBalance() const;

    void setBalance(double balance);
};