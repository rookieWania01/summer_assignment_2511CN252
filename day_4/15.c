#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int count = 0;
    int m = n;
    while(m!=0){
        count++;
        m = m/10;
    }
    int rem = 0,p = n ;
    while(p!=0){
        rem = rem + (int)pow(p%10,count);
        p = p/10;
    }
    if( n == rem) printf("%d is an armstrong no.",n);
    else printf("%d is not an armstrong no.",n);
    return 0;
}