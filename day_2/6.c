#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int rev = 0;
    int m = n;
    while(m!=0){
        rev = rev*10 + m%10;
        m = m/10;
    }
    printf("reverse of %d is: %d",n,rev);
    return 0;
}