#include <stdio.h>
int main() {
    int number, count = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0) {
        digit = number % 10;
        if (digit % 2 == 0) {
            count++;  
        }
        number /= 10;
    }
    printf("The number of even digits is: %d\n", count);
    
    return 0;
}