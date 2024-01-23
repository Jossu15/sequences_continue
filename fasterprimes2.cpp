//
// Created by Lenovo on 19/01/2024.
//
#include <iostream>
#include <vector>
#include <ctime>

// Display the prime numbers between 2 and 500000 and
// time how long it takes

// Largest potential prime considered
const int MAX = 2000000;

// each position in the boolean vector indicates
// if the number of that position is not prime:
// false means "prime, " and true means "composite."
// initially all numbers are prime until proven otherwise
std::vector<bool> nonprimes(MAX); // Global vector initialize

void count_primes1(){
    int count = 0;
    clock_t start_time = clock(); // record start time
    for (int value = 2; value <= MAX; value++){
        // See if value is prime
        bool is_prime = true; // provisionally, value is prime
        // Try all possible from 2 to the value - 1
        for (int trial_factor = 2;
             is_prime && trial_factor < value; trial_factor++)
            is_prime = (value % trial_factor != 0);
        if (is_prime)
            count++; // Count the prime number
    }
    // Print the elapsed time
    std::cout << "Count = " << count << " ";
    std::cout << "Elapsed time: "
              << static_cast<double>(clock()-start_time)/CLOCKS_PER_SEC
              << " seconds\n";
}

void count_primes2(){
    int count = 0;
    clock_t start_time = clock(); // record start time
    for (int value = 2; value <= MAX; value++){
        // See if value is prime
        bool is_prime = true; // Provisionally, value is prime
        double r = value, root = sqrt(r);
        // Try all possible factors from 2 to the square
        // root of value
        for (int trial_factor = 2;
              is_prime && trial_factor <= root; trial_factor++)
            is_prime = (value % trial_factor != 0);
        if (is_prime)
            count++; // Count the prime number
    }
    // print the elapsed time
    std::cout << "Count = " << count << "  ";
    std::cout << "Elapsed time: "
              << static_cast<double>(clock() - start_time)/CLOCKS_PER_SEC
              << " seconds\n";

}

void count_primes3(){
    int count = 0;
    clock_t start_time = clock(); // Record start time

    // first prime number is 2; 0 and 1 are not prime
    nonprimes[0] = nonprimes[1] = true;

    // Start at the first prime number, 2.
    for (int i = 2; i < MAX; i++){
        // See if i is prime
        if (!nonprimes[i]){
            count++; // It's prime, so count it
            // It is prime, so eliminate all of its
            // multiple that cannot be prime
            for (int j = 2 * i; j < MAX; j += i)
                nonprimes[j] = true;
        }
    }
    // Print the elapsed time
    std::cout << "Count = " << count << "  ";
    std::cout << "Elapsed time: "
              << static_cast<double>(clock() - start_time)/CLOCKS_PER_SEC
              << " seconds\n";
}

int main(){
    count_primes1();
    count_primes2();
    count_primes3();
}