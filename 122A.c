#include<stdio.h>
int main(){
    int a[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int x,i,b=0;
    scanf("%d",&x);
    for(i=0;i<14;i++){
        if(x%a[i]==0){
            b=1;
            break;
        }
    }
    if(b==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
