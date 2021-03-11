#include <string.h>
#include<stdio.h>
#include <stdbool.h>
int main()
{
    char s[1000],c1='(',c2='x',c3=')';
    int  i;
    bool enter=1;
 
    printf("inserte un string : ");
    gets(s);



    for(i=0;s[i];i++)
    {
        if(s[i]==c1)
        enter=0;
        if(s[i]==c3)
        enter=1;
        if(enter)
        {
          if(s[i]!=c1&&s[i]!=c3)
        {
           s[i]=c2;

        }
        }



 
    }

    printf("\nafter replace:%s",s);


    return 0;
}

