#include <iostream>
#include <vector>
#include <random>
#include "Buffer.h"
#include "BufferArr.h"
#include "BufferFile.h"
#include <string>

int main()
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 100);
    std::vector<std::unique_ptr<Buffer>> bufferVector;

    for (int i = 0; i < 6; i += 2) {
        bufferVector.push_back(std::make_unique<BufferArr>(5));
        bufferVector.push_back(std::make_unique<BufferFile>("plik" + std::to_string(i) + ".txt"));
        for (int j = 0; j < 5; ++j) {
            int num = (int)dist(rng);
            bufferVector[i]->add(num);
            bufferVector[i + 1]->add(num);
        }
    }

    for (const auto& buffer : bufferVector)
        buffer->write();
}

