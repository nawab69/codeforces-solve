#include<stdio.h>
int main(){
    int a,b,temp,x;
    scanf("%d%d",&a,&b);
    if(b>a){
        temp = b;
        b=a;
        a=temp;
    }
    x=a/2;
    x*=b;
    if(a%2 !=0){
        x=x+(b/2);
    }
    printf("%d\n",x);
    return 0;
}

