#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0';
    length = strlen(str);
    printf("Reversed string: ");6
    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}