#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int count = 0;
    int m = n;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("the no of digits in %d is: %d",m,count);
    return 0;
}