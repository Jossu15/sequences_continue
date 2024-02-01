//
// Created by Lenovo on 25/01/2024.
//
#include <iostream>
#include <vector>


// Write the code fragment that prints out the contents of list?
void print_array(int a[], int n){
    for (int i = 0; i < n; i++)
        std::cout << a[i] << ' ';
    std::cout << '\n';
}

int main(){
    int list[100];
    // What expression represents the very first element of list?
    std::cout << list[0] << '\n';
    // What expression represents the very last element of list?
    std::cout << list[99] << '\n';
    // Is the expression list[3.0] legal or illegal?
    // it cannot be legal since 3.0 is not an integer but a double value
    // std::cout << list[3.0] << '\n'; (incorrect)
    // Correct way
    std::cout << list[3] << '\n';
}