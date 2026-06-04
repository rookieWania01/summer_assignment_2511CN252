#include<stdio.h>
#include<math.h>
int main(){
    int m,n;
    printf("enter m and n: ");
    scanf("%d %d",&m,&n);
    
   for(int i = m;i<=n;i++){ 
    int count = 0;
    int r = i;
    while(r!=0){
        count++;
        r = r/10;
    }
    int rem = 0,p = i ;
    while(p!=0){
        rem = rem + pow(p%10,count);
        p = p/10;
    }
    if(rem == i) printf("%d is an armstrong no \n",i);
}
   
    return 0;
}