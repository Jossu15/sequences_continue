//
// Created by Lenovo on 20/01/2024.
//
#include <iostream>
#include <vector>
#include <iomanip>

using Matrix = std::vector<std::vector<int>>;

int count_evens2(const Matrix& v) {
    int sum = 0;
    for (auto &row: v)
        for (int element: row) {
            if (element % 2 == 0 && element > 0)
                sum += element;
            else if (row.empty())
                return 0;
        }
    return sum;
}


int main(){
    std::vector<std::vector<int>> a{{5,19,3},
                                    {22,-8,10}};
    std::cout << count_evens2(a) << '\n';

}