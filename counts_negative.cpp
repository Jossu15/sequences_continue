//
// Created by Lenovo on 26/01/2024.
//

#include <iostream>
#include <random>

template <std::size_t N>
int count_negative(int (&arr)[N][N])
{
    int neg = 0;
    for (int row = 0; row < N; row++)
        for (int col = 0; col < N; col++)
            if (arr[row][col] < 0)
                neg++;
    return neg;
}

int main(){
    std::random_device rdev;
    std::mt19937 mt(rdev());
    std::uniform_int_distribution<int> dist(-1,2);

    int a[10][10];
    for (auto & i : a) {
        for (int &j: i) {
            int r = dist(mt);
            j = r;
        }
    }
    std::cout << "There are: " << count_negative(a) << " negative values"
                               << '\n';
}