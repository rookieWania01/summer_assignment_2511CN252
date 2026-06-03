#include<stdio.h>
int main(){
    int a,b;
    printf("enter a and b: ");
    scanf("%d %d",&a,&b);
    int lcm;
    int max;
    if(a>b) max = a;
    else max = b;
    for(int i = max;;i++){
        if(i%a == 0 && i%b == 0){
            lcm = i;
            break;
        }
    }
    
    printf("the lcm of %d and %d is: %d",a,b,lcm);
    return 0;
}