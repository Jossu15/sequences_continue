//
// Created by Lenovo on 20/01/2024.
//
#include <iostream>
#include <vector>
#include <algorithm>

bool equals(const std::vector<int>& v1, const std::vector<int>& v2) {
    for (int i = 0; i < v1.size(); i++)
        if (v1.size() != v2.size() || v1[i] != v2[i])
            return false;
    return true;
}

int main(){
    std::vector<int> v1{3,45,2,-1,2}, v2{3,45,2,-1,2};
    std::cout << equals(v1,v2) << '\n';
}