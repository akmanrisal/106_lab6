#include <stdio.h>
int main ()
{
    int w,h,a,b,sum=0,all,num;
    scanf("%d",&w);
    scanf("%d",&h);
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            scanf("%d",&all);
            sum=sum+all;
        }
    }

    a=sum%(w*h);
    b=2/(w*h);

    if(a>b)
    {
        num=(w*h)-a;
        printf("%d",num);
    }
    else
        printf("%d",a);

    return 0;
}
