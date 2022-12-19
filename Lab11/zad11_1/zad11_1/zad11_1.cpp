#include <iostream>
#include <memory>

using namespace std;

class Buffer {
public:
    virtual void add(int a) = 0;
    virtual void write();
    Buffer() {
        cout << "Konstruktor Buffer" << endl;
    }
    ~Buffer() {
        cout << "Destruktor Buffer" << endl;
    }
};

class BufferArr : public Buffer {
private:
    int tab;
    int n;
public:

};

int main()
{
    std::cout << "Hello World!\n";
}


