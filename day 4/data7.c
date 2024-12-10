#include<stdio.h>
int main(){
    int inputchar;
    printf("enter a character:\n");
    scanf("%d",&inputchar);
    if(inputchar>=65 && inputchar<=90){
        printf("the given character is upper");
    }
    else{
        printf("the given character is lower ");
    }
    return 0;
}