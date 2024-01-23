//
// Created by Lenovo on 22/01/2024.
//
#include <iostream>
#include <vector>

int main(){

    // consider the declaration

    std::vector<std::vector<std::vector<std::vector<int>>>>
      vec(100,std::vector<std::vector<std::vector<int>>>
            (200,std::vector<std::vector<int>>
                    (100,std::vector<int>
                            (50))));
    // How many elements does vec hold?
    std::cout << vec.size() * vec[0].size() * vec[0][0].size() * vec[0][0][0].size()<< '\n';

}