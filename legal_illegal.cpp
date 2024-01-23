//
// Created by Lenovo on 20/01/2024.
//
#include <iostream>
#include <vector>

int main() {
    // is the following code fragment legal or illegal?
    std::vector<int> list1(5), list2{3, 3, 3, 3, 3};
    list1 = list2;
    for (int &i: list1)
        std::cout << i << '\n';
    // of course it is legal since both of them are the same type
    // they are both vectors but it they had been arrays we would
    // have to use the key word new

}