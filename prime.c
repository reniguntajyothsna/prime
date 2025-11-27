#include<stdio.h>
int main(){
    int i,num,count=0;
    printf("enter the number: ");
    scanf("%d",&num);
    i=1;
    while(i <= num){
        if(num % i == 0)
        count ++;
        i++;
    }
    if(count == 2)
    printf("given number is prime numbebr");
    else{
        printf("not a prime number");
    }
    return 0;
    }

