#include <stdio.h>
#include <string.h>
int main()
{
    int n ;
    scanf("%d",&n);
    char names[n][20];
    char temp[20];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (strcmp(names[j], names[j + 1]) == 1)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}
