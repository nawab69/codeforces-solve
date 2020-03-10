#include<stdio.h>
int main(){
    int n,a,b,c,x=0,s=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d%d",&a,&b,&c);
        if(a==1) x++;
        if(b==1) x++;
        if(c==1) x++;
        if(x>=2) s++;
        x=0;
    }
    printf("%d\n",s);
    return 0;
}
