//
// Created by Lenovo on 20/01/2024.
//
/*
 * given the declaration
 */

#include <iostream>
#include <vector>

int main() {
    std::vector<int> list(100);
    // what expression represents the very first element of list?
    std::cout << list[0] << '\n';
    // what expression represents the very last element of list?
    std::cout << list[99] << '\n';
    // write the code fragment that prints out the contents of list
    for (auto &i: list)
        std::cout << i << '\n';
    // is the expression list[3.0] legal or illegal?
    std::cout << list[3.0] << '\n';
    //actually it not illegal since index 3.0 works as a valid index
    // it works as an integer as well as a double value
}