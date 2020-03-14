#include<stdio.h>
#include<string.h>
int main(){
    char word[100];
    int x=0,i,j,k,l,m,count=0;
    scanf("%s",&word);
    int n=strlen(word);
    if(n>=5){
    for(i=0;i<n;++i)
    {
        if(word[i]=='h') {
                j=i;
                count++;
                break;
    }

    }
    while(j<n){
            j++;
        if(word[j]=='e')
        {
            k=j;
            count++;
            break;
        }

    }
    while(k<n){
        k++;
        if(word[k]=='l')
        {
            l=k;
            count++;
            break;
        }

    }
    while(l<n){
        l++;
        if(word[l]=='l')
        {
            m=l;
            count++;
            break;
        }

    }
    while(m<n){
        m++;
        if(word[m]=='o')
        {
            count++;
            break;
        }

    }
    if(count==5){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }
    else{
        printf("NO\n");
    }
    return 0;

}
