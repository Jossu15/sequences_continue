//
// Created by Lenovo on 20/01/2024.
//
#include <iostream>
#include <vector>

int count_evens(const std::vector<int>& v){
    int sum = 0;
    for (auto& i : v){
        if (i % 2 == 0 && i > 0)
            sum += i;
        else if (v.empty())
            return 0;
    }
    return sum;
}
int main(){
    std::vector<int> vec{3,5,4,-1,0,-2};
    std::cout << count_evens(vec) << '\n';
}