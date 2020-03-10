#include<stdio.h>
#include<ctype.h>
int main()
{     int i;
      char a[100];
      scanf("%s",&a);

      for(int i=0; a[i]!='\0'; i++)
      {
        a[i]=tolower(a[i]);
      }
      for(i=0; a[i]!='\0'; i++)
      {
          if(a[i] == 'a' || a[i] == 'e' ||a[i] == 'i' || a[i] == 'o' || a[i] == 'u'|| a[i] == 'y'){
        a[i]= '0';
          }
      }
      for(i=0; a[i]!='\0'; i++)
      {
        if(a[i] !='0'){
            printf(".%c",a[i]);
        }
      }
      printf("\n");
      return 0;
}
