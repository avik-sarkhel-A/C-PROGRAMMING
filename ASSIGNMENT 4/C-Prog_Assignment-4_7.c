//To check whther a number is divisible by 5 and 11 or not.

#include<stdio.h>
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%5 == 0 && n%11 == 0){
        printf("%d is divisible by 5 and 11.",n);
    }
    else{
        printf("%d is not divisible by 5 and 11.",n);
    }
}