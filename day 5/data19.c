#include <stdio.h>
int main() {
    int number, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0) {
        digit = number % 10;
        if (digit % 2 != 0) {
            sum += digit;  
        }
        number /= 10;
    }
    printf("The sum of odd digits is: %d\n", sum);
    
    return 0;
}