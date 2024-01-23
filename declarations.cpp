//
// Created by Lenovo on 20/01/2024.
//
#include <iostream>
#include <vector>

int main(){
    std::vector<int> list{2,3,1,14,4};
    int x = 2;
    // evaluate each of the following expressions
    std::cout << list[1] << '\n';
    std::cout << list[x] << '\n';
    std::cout << list.size() << '\n';
    std::cout << list.empty() << '\n';
    std::cout << list.at(3) << '\n';
    std::cout << list[x] + 1 << '\n';
    std::cout << list[x+1] << '\n';
    std::cout << list[list[x]] << '\n';
    std::cout << list[list.size()-1] << '\n';
}