//
// Created by Lenovo on 25/01/2024.
//
#include <iostream>
#include <iomanip>

const int ROWS = 100,
          COLUMNS = 200;

using Matrix = double[ROWS][COLUMNS];

void print_matrix(const Matrix m){
    for (int row = 0; row < ROWS; row++){
        for (int col = 0; col < COLUMNS; col++)
            std::cout << std::setw(2) << m[row][col];
        std::cout << '\n';
    }
}

void collec(){
    //Consider the declaration
    int collection[100][200];
    //what does the expression collection[15][29]
    // the expression collection[15][29] represents the 16th value in the rows and
    // 30th value in the column from the array.

    // Consider the declaration
    int collection1[100][200];
    // What does the expression collection[15] represent?
    // it represents 16th index from the collection[100][200]

}

template<typename T>
T max (T a, T b)
{
    return b < a ? a:b;
}

int main(){
    Matrix mat;
    print_matrix(mat);
}