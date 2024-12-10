#include<stdio.h>
int main(){
    int arr[10]={10,34,50,2,5};
    int data =5;
    for(int i=0;i<5;i++){
        if(arr[i]==data){
            printf("The position is :%d",i);
            break;
        }
    }
}