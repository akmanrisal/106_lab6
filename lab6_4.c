#include <stdio.h>

int main()
{
    int num, r, l, h, w, mid, i = -1, j = 1;
    scanf("%d",&num);

    h = num;

    if(num % 2 == 0)
    {
        w = num - 1;
        mid = num / 2;
    }
    else
    {
        w = num;
        mid = (num + 1) / 2;
    }

    r = l = mid;

    for(int m = 1; m <= h; m++)
    {
        for(int n = 1; n <= w; n++)
        {
            if(n == r || n == l)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");

        if(num % 2 == 0 && m == mid)
            continue;

        if(r + i == 0)
        {
            i *= -1;
            j *= -1;
        }

        r += i;
        l += j;
    }

    return 0;
}
