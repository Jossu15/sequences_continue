//
// Created by Lenovo on 20/01/2024.
//
#include <iostream>
#include <vector>

int sum_positive(const std::vector<int>& v){
    int sum = 0;
    for (auto& i : v){
        if (i > 0)
            sum += i;
        else if (v.empty())
            return 0;
    }
    return sum;
}
int main(){
    std::vector<int> vec{3,-3,5,2,-1,2};
    std::cout << sum_positive(vec) << '\n';
}