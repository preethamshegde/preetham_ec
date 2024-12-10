#include<stdio.h>
int main(){
    int inputnumber=0;
    printf("enter a number:\n");
    scanf("%d",&inputnumber);
    if(inputnumber%2==0){
        printf("the givrn number is even:");
    }
    else{
        printf("the given number is odd:");
    }
    return 0;
}