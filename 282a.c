#include<stdio.h>
#include<string.h>
int main(){
    int b,i,a=0;
    char x[150][3],s1[]="X++";
    char s2[]="X--";
    char s3[]="++X";
    char s4[]="--X";
    scanf("%d",&b);
    for(i=0;i<b;i++){
        scanf("%s",&x[i]);
        if(strcmp(x[i],s1)==0){
            a++;
        } else if(strcmp(x[i],s2)==0){
            a--;
        } else if(strcmp(x[i],s3)==0){
            ++a;
        } else if(strcmp(x[i],s4)==0){
            --a;
        }
    }
    printf("%d\n",a);
}
