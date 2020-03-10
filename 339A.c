#include<stdio.h>
#include<string.h>
int main(){
    int i,n,x,k,temp,j=0,b[1000];
    char a[1000];
    scanf("%s",&a);
    x = strlen(a);
    for(i=0;i<x;i++){
        if(i%2==0){
            b[j]=(int)a[i];
            j++;
        }
    }
    for(n=1;n<j;n++){
        for(k=0;k<(j-n);k++){
            if(b[k]>b[k+1]){
                temp = b[k];
                b[k] = b[k+1];
                b[k+1] = temp;
            }
        }
    }
        printf("%c",(char)b[0]);
    for(i=1;i<j;i++){
        printf("+%c",(char)b[i]);
    }
        printf("\n");
}
