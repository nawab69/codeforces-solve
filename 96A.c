#include<stdio.h>
#include<string.h>
int main(){
    int i,count=0,x=0;
    char a[100];
    scanf("%s",&a);
    int n = strlen(a);
    for(i=0;i<n;i++){
        if(a[i]=='0' && a[i+1]=='0' && a[i+2]=='0' && a[i+3]=='0' && a[i+4]=='0' && a[i+5]=='0' && a[i+6]=='0'){
            x=1;
        }
        if(a[i]=='1' && a[i+1]=='1' && a[i+2]=='1' && a[i+3]=='1' && a[i+4]=='1' && a[i+5]=='1' && a[i+6]=='1'){
            x=1;
        }
    }
    if(x==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
