#include<stdio.h>
int main(){
    int n,i,sx=0,sy=0,sz=0;
    scanf("%d",&n);
    int x[n],y[n],z[n];
    for(i=0;i<n;i++){
        scanf("%d%d%d",&x[i],&y[i],&z[i]);
    }
    for(i=0;i<n;i++){
        sx=sx+x[i];
        sy=sy+y[i];
        sz=sz+z[i];
    }
    if(sx==0 && sy==0 && sz==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
