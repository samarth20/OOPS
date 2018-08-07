#include<stdio.h>
void main()
{
    int i,j;
    scanf("%d%d",&i,&j);
    if(i%j==0)
        printf("%d",(i/j));
    else
        printf("%d",(i/j)+1);
}
