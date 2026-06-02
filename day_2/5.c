#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int sum = 0;
    int m = n;
    while(m!=0){
        sum = sum + m%10;
        m = m/10;
    }
    printf("sum of digits of %d is: %d",n,sum);
    return 0;
}