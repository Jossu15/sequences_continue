//
// Created by Lenovo on 25/01/2024.
//
#include <iostream>

// Rewrite the following code fragment using array notation instead of pointer
// notation:

void display(int *a, int n){
    while (n){
        std::cout << *a << " ";
        a++;
        n--;
    }
    std::cout << '\n';
}

void display_arr(int a[], int n){
    int i = 0;
    while (n){
        std::cout << a[i] << " ";
        i++;
        n--;
    }
}

int display_point(const int *a, int n){
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += *a;
        a++;
    }
    return s;
}


int main(){
    int arr[5] = {1,2,3,4,5};
    std::cout << display_point(arr, 5) << '\n';

    int arr1[5] = {1,2,3,4,5};
    display_arr(arr1, 5);

    std::cout << '\n';

    int arr2[5] = {1,2,3,4,5};
    display(arr2, 5);

}