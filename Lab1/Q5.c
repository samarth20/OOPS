#include<stdio.h>
void main()
{
    char s[50];
    int l;
    scanf("%s",s);
    for(l=0;s[l]!='\0';l++);
    printf("%d",l);
}
