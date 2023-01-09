#pragma once
#include "Buffer.h"
#include <memory>

class BufferArr : public Buffer {
private:
    std::unique_ptr<int[]> tab_;
    int size_;
    int capacity_;
public:
    explicit BufferArr(int capacity);

    void add(int a) override;

    void write() override;

    int getSize() const;

    int getCapacity() const;

    ~BufferArr() override;
};