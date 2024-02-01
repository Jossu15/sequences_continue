//
// Created by Lenovo on 23/01/2024.
//
#include <iostream>
#include <vector>

void print(const int *begin, const int *end){
    for (auto *elem = begin; elem != end; elem++)
        std::cout << *elem << ' ';
    std::cout << '\n';
}
int main(){
    int a[10] = {4,1,6,7,2,0,12,15,19,10};
    std::vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    print(&a[0], &a[0]+10);
    print(&vec[0],&vec[0]+vec.size());
}