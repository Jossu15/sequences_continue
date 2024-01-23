//
// Created by Lenovo on 19/01/2024.
//

#include <iostream>
#include <vector>

int main(){
    std::vector<float> vec(10);
    // We cannot declare a vector to hold a mixture of ints
    // and doubles since that data-type only does support
    // a data-type with an only type like ints , floats and doubles
    vec.push_back(9.8);
    for (auto& a: vec)
        std::cout << a << '\n';
}