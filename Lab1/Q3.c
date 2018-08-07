#include<stdio.h>
#include<math.h>
void main()
{
    int t,s,x,y;
    for(x=1;x<=9;x++)
    {
        for(y=0;y<=9;y++)
        {
            if(x!=y)
            {
                t=x*1100+y*11;
                s=sqrt(x);
                if(s*s==x)
                {
                    printf("%d\n",t);
                    break;
                }
            }
        }
    }
}
