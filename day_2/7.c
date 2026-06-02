#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int product = 1;
    int m = n;
    while(m!=0){
        product = product*(m%10);
        m = m/10;
    }
    printf("product of digits of %d is: %d",n,product);
    return 0;
}