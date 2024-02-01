//
// Created by Lenovo on 26/01/2024.
//
#include <iostream>
#include <cstring>

void proc(const char *s) {
    std::cout << strlen(s);
}


int main(){
    char const *word = "abcde";
    proc(word);
}