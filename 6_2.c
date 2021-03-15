#include<stdio.h>
int main()
{
    int n,k=0,j=0;
    scanf("%d",&n);
    char num[n],num1[n];

    if(n>=4&&n<=9)
    {
        scanf("%s",num);
        scanf("%s",num1);
    }
    else
        printf("Error");

    for(int i=0; i<n; i++)
    {
        if(num[i]!=num[i+1]&&num1[i]!=num1[i+1])
        {
            if(num[i]==num1[i])
            {
                k=k+1;
            }
            else
                j=j+1;
        }
        else
        {
            printf("Error");
            break;
        }
    }
    if(k>0||j>0)
        printf("%d %d",k,j);

    return 0;

}
