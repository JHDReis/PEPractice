//
// Created by Joao Henriques David Dos Reis on 05/11/2018.
//

#ifndef PROJECTEULER_PART1_H
#define PROJECTEULER_PART1_H

#include <cmath>

//-----------------------------------------------------
//Prob 1
//https://projecteuler.net/problem=1
long multiples_3_and_5(int max) {
    long sum = 0;
    for(int i = 0; i < max; i++) {
        if(i%3==0 || i%5==0)
            sum += i;
    }
    return sum;
}

//-----------------------------------------------------
//Prob 2
//https://projecteuler.net/problem=2
unsigned int fibonacci(unsigned int i){

    if(i == 0)
        return 0;
    else if(i == 1)
        return 1;
    else
        return fibonacci(i-1) + fibonacci(i-2);
}

unsigned int sum_even_fib(unsigned int i) {
    unsigned int sum = 0;
    for(unsigned int n = i; n != 0 ; n--) {
        unsigned int a = fibonacci(n);
        if (a % 2 != 0)
            sum += a;
    }
    return sum;
}

unsigned int sum_even_fib_max(unsigned int limit) {
    unsigned int sum = 0;
    unsigned int result = 0;
    unsigned int i = 0;

    while( (result = fibonacci(i)) < limit ){

        if (result % 2 != 0) {
            sum += result;
        }
        i++;
    }
    return sum;
}

//-----------------------------------------------------
//Prob 3
//https://projecteuler.net/problem=3
// Largest prime factor trial division method
long largest_prime_trial_division(long n) {

    if((n >= 0 && n <=3) || n == 5 || n== 7 || n == 11)
        return n;

    while(n > 0) {
       long max = static_cast<long>(std::sqrt(n));
       bool composite = false;
       for(long i = 2; i <= max ; i++) {
            if(n%i == 0) {
                composite = true;
                break;
            }
       }
       if(!composite)
           return n;
       n--;
    }
    return 1;
}


long largest_prime_Miller_Rabin(long n) {
    return 1;

}



#endif //PROJECTEULER_PART1_H
