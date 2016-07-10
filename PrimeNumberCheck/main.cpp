//
//  main.cpp
//  PrimeNumberCheck
//
//  Created by Brent Perry on 7/9/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

bool check_for_prime(int number) {
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int i = 0;
    while (primes[i] < number) {
        if (number % primes[i] == 0) {
            return false;
        }
        ++i;
    }
    return true;
}

int main()
{
    vector<int> found_primes;
    
    for (int i = 0; i <=100; ++i) {
        if (check_for_prime(i)) {
            found_primes.push_back(i);
        }
    }
    
    cout << "List of prime numbers found: \n";
    for (int num : found_primes) {
        cout << num << " ";
    }
    cout << "\n";
}
