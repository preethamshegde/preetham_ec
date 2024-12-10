#include<stdio.h>
#include<math.h>
int main(){
    
    int inputNumber=0,sqrt1=0;
    printf("enter a number: \n");
    scanf("%d",&inputNumber);
    sqrt1 = sqrt(inputNumber);
    printf("square root of %d is : %d ",inputNumber,sqrt1);
    if ((sqrt1*sqrt1) == inputNumber){
        printf("perfict square");
    }
    else{
        printf("nat a perfact square");
    }

    return 0;
}