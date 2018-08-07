#include<stdio.h>
void main()
{
    int n,f;
    scanf("%d",&n);
    f=fact(n);
    printf("%d",f);
}
int fact(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
