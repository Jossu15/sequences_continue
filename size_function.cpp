//
// Created by Lenovo on 22/01/2024.
//
#include <iostream>
#include <vector>

void proc(const std::vector<int>& v){

    // we could have used std::vector<int> but
    // it only passes as a copy of each value and not as a
    // value passed as a reference besides 'const' makes vector values not change
    // when building the body of the function.

    size_t vecSize = v.size();

    std::cout << vecSize << '\n';

}

int main(){
    std::vector<int> vec{4,5,6,7,8};
    proc(vec);
}