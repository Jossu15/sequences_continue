//
// Created by Lenovo on 20/01/2024.
//
#include <vector>
#include <iostream>
#include <unordered_set>


bool contains(const std::vector<int>& v1,const std::vector<int>& v2) {
    for (int j = 0; j < v2.size(); j++) {
        if (std::unordered_set<int>{v2.begin(), v2.end()}.size() < v2.size())
            return false;
        auto it = std::find(v1.begin(),v1.end(),v2[j]);
        if (it == v1.end()) {
                return false;  // Return false if any element of v2 is not found in v1
            }
        }
    return true;
}

int main(){
    std::vector<int> vecofNumber{21,22,24,26,28};
    std::vector<int> test{21,22,28,24};
    std::cout << contains(vecofNumber, test);
}

