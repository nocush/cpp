﻿#include <iostream>
#include <vector>
#include <numeric>
#include <tuple>
#include "Car.h"
#include <algorithm>
#include <string>
using namespace std;

void task_1();

void task_2();

void task_3();

int main() {
    cout << "========== Zadanie 1 - Algorytmy ==========" << endl;
    task_1();
    cout << endl;

    cout << "========== Zadanie 2 - Samochody ==========" << endl;
    task_2();
    cout << endl;

    cout << "========== Zadanie 3 - Statystyka ==========" << endl;
    task_3();
}

void task_3() {
    vector<string> vec = { "aaaaaa", "bbb", "cccc", "ddddddddd", "eeeeeeee" };

    auto stats = [](vector<string>& vec) -> tuple<size_t, size_t, string> {
        size_t min_length = min_element(vec.begin(), vec.end(), [](string_view str1, string_view str2) {
            return str1.length() < str2.length();
            })->length();

            size_t average_length = accumulate(vec.begin(), vec.end(), 0, [](int acc, string& el) {
                return acc + el.length();
                }) / vec.size();

                string max_length_elem = *max_element(vec.begin(), vec.end(), [](string_view str1, string_view str2) {
                    return str1.length() < str2.length();
                    });

                return make_tuple(min_length, average_length, max_length_elem);
    };

    tuple<size_t, size_t, string> res = stats(vec);
    cout << "Min length: " << get<0>(res) << endl;
    cout << "Average length: " << get<1>(res) << endl;
    cout << "Max length: " << get<2>(res) << endl;
}

void task_2() {
    vector<Car> cars;
    cars.emplace_back("Honda Civic", 2019, 1.5);
    cars.emplace_back("Mazda Miata", 1992, 1.6);
    cars.emplace_back("Cadillac Escalade", 2017, 6.2);

    cout << "Sorted ascending by year:" << endl;
    sort(cars.begin(), cars.end(), [](const Car& car1, const Car& car2) { return car1.getYear() < car2.getYear(); });
    for_each(cars.begin(), cars.end(), [idx = 0](const Car& car) mutable {
        cout << idx++ << " ";
    car.show();
        });

    cout << endl << "Sorted descending by engine displacement:" << endl;
    sort(cars.begin(), cars.end(), [](const Car& car1, const Car& car2) {
        return car1.getEngineDisplacement() > car2.getEngineDisplacement();
        });
    for_each(cars.begin(), cars.end(), [idx = 0](const Car& car) mutable {
        cout << idx++ << " ";
    car.show();
        });
}

void task_1() {
    vector<int> vec = { -33, -4, 5, 77, 22, 44566, 768, 12, 87, 4 };
    for_each(vec.begin(), vec.end(), [idx = 0, size = vec.size()](int elem) mutable {
        cout << elem;
    if (++idx != size)
        cout << " | ";
        });
    cout << endl;

    int sum = accumulate(vec.begin(), vec.end(), 0);
    float mean = (float)sum / (float)vec.size();
    cout << "Mean: " << mean << endl;

    size_t evenCount = count_if(vec.begin(), vec.end(), [](int elem) { return elem % 2 == 0; });
    cout << "Even count: " << evenCount << endl;

    cout << "Without negative: " << endl;
    erase_if(vec, [](int elem) { return elem < 0; });
    for_each(vec.begin(), vec.end(), [](int elem) { cout << elem << " "; });

    cout << endl << "Even elements first:" << endl;
    partition(vec.begin(), vec.end(), [](int el) { return !(el & 1); });
    for_each(vec.begin(), vec.end(), [](int elem) { cout << elem << " "; });

    cout << endl << "Negate elements:" << endl;
    transform(vec.begin(), vec.end(), vec.begin(), [](int elem) { return -elem; });
    for_each(vec.begin(), vec.end(), [](int elem) { cout << elem << " "; });

    int num = -20;
    size_t lessThanCount = count_if(vec.begin(), vec.end(), [num](int elem) { return elem < num; });
    cout << endl << "Less than " << num << " count: " << lessThanCount << endl;
}