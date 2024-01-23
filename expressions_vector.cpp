//
// Created by Lenovo on 22/01/2024.
//
#include <iostream>
#include <vector>
#include <iomanip>

int main(){
    std::vector<std::vector<int>> collection(100,
                                             std::vector<int>(200));
    // a) collection[15][29] represents a value which is located in the
    // 16th row and 30th column in this vector
    std::cout << collection[15][29] << '\n';

    //b) how many elements does collection hold?
    // collection holds 100 rows and 200 columns but totally holds
    // 20000 values since each row contains 200 values in
    std::cout << collection.size() * collection[0].size()<< '\n';


    //c) write the c++ code that prints all the element in collection. all the
    // element in the same row should appear on the same line, and but each
    // successive row should appear on its own line.
    for (const auto& row : collection) {
        for (int element: row)
            std::cout << std::setw(3) << element << " ";
    }
    std::cout << std::endl;

    //c) what does the expression collection[15] represent?
    // collection[15] represents the 16th row in this bi-dimensional vector
    // also it contains 200 values which can be iterable
}