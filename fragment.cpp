//
// Created by Lenovo on 25/01/2024.
//
#include <iostream>

int main(){
    // Is the following fragment legal or illegal?
    int list1[5], list2[5] = {3,3,3,3,3};
    // List1 = List2 is illegal since list1 work as a constant pointer
    // it cannot be reassigned besides it cannot appear on the left
    // side of the assigment operator all by itself. wherever b points,
    // it must continue to point there during its lifetime. the code above
    // will not compile
    // the correct way would be this way:
    int List1[5], *List2;
    for (int i = 0; i < 5; i++)
        List1[i] = i;
    List2 = new int[5];
    for (int i = 0; i < 5; i++)
        List2[i] = List1[i];
    delete [] List2;
}