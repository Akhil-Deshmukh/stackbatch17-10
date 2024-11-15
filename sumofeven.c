// Write a program to calculate sum of first 10 even numbers.


#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum += i * 2; 
    }

    printf("Sum of the first 10 even numbers is: %d\n", sum);

    return 0;
}
