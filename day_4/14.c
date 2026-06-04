#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int a = 1,b=1;
    if(n==1 || n==2) printf("1");
    else{
        int c;
        for(int i = 1;i<=n-2;i++){
            c = a+b;
            a=b;
            b=c;
        }
        printf("%d",c);
    }
    return 0;
}