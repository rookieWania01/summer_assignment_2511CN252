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
    if(rev == n) printf("the number is a palindrome");
    else printf("the number is not a palindrome");
    
    return 0;
}