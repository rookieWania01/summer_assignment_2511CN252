#include<stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int a = 0;
    for(int i = 2;i<n;i++){
        if(n%i == 0){
            a = 1;
            break;;
        }
        else continue;
    }
    if(a == 0) printf("the number is a prime");
    else printf("the number is composite");
    
    return 0;
}