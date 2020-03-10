#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    int i,x,y;
    char a[100],b[100];
    scanf("%s%s",&a,&b);

    for(i=0; a[i]!='\0';i++){
        a[i] = tolower(a[i]);
    }

    for(i=0;b[i]!='\0';i++){
        b[i] = tolower(b[i]);
    }
    x= strcmp(a,b);
    printf("%d\n",x);
    return 0;
}
