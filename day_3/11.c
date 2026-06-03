#include<stdio.h>
int main(){
    int a,b;
    printf("enter a and b: ");
    scanf("%d %d",&a,&b);
    int gcd = 1;
    int min;
    if(a>b) min = b;
    else min = a;
    for(int i = 2;i<=min;i++){
        if(a%i == 0 && b%i == 0) gcd = i;
        else continue;
    }
    printf("the gcd of %d and %d is: %d",a,b,gcd);
    return 0;
}