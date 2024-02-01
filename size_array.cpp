//
// Created by Lenovo on 25/01/2024.
//
#include <iostream>
#include <array>

// Suppose your task is to implement the function with the
// prototype

// void proc(int a[]);

// When you implement the body of proc, how can you determine the size of
// array a?


template <std::size_t N>
int sortArray(int (&arr)[N])
{
    int sum = 0;
    for (int v : arr)
        sum++;
    return sum;
}

int main(){
    int a[4] = {1,2,3,4};
    std::cout << sortArray(a) << '\n';
}