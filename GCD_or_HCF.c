#include<stdio.h>
int main(){
    int a,b,i,t;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++){
        if(a%i==0 and b%i==0){
            t=i;
        }
    }
printf("%d",t);
}