#include<stdio.h>
int main()
{
    int ls,lt,x,c=0,flag=0;
    char s[50];
    char t[50];
    scanf("%s%s",&s,&t);
    for(ls=0;s[ls]!='\0';ls++);
    for(lt=0;t[lt]!='\0';lt++);
    for(x=lt;x<=ls-1;x++)
    {
        if(s[x]!=t[c++])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("1");
    else
        printf("0");
    return 0;
}
