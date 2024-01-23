//
// Created by Lenovo on 19/01/2024.
//
#include <iostream>
#include <vector>

int main(){
    // we cannot use a negative index to get a value from a vector
    std::vector<double> vec{4,34,8,3,2};
    std::cout << vec[-1] << '\n'; // the index is out of the bounds

}