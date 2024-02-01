//
// Created by Lenovo on 26/01/2024.
//

#include <iostream>
#include <random>

int main(){

    // Consider the following declaration
    char const *word = "abcde";
    // Evaluate each of the following expressions. if an expression
    // indicates undefined behavior, write UB
    std::cout << word[1] << '\n'; // it does not indicate UB
    std::cout << *word << '\n'; // it does not indicate UB
    std::cout << word[5] << '\n'; // it indicates UB since
    // 5 is out of the bounds and 5th value cannot be accessed
}

