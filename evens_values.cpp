//
// Created by Lenovo on 25/01/2024.
//
#include <iostream>

int sum_positive(const int *a,int n){
    int sum = 0;
    for (int elem = 0; elem < n; elem++) {
        if (a[elem] % 2 == 0 && a[elem] > 0)
            sum += a[elem];
    }
    return sum;
}

int main(){
    int a[6] = {3,-3,5,2,-1,2};
    std::cout << "The sum of even numbers is: " <<
                   sum_positive(a, 6) << ' ';
}