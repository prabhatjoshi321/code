#include <stdio.h>
#include <stdlib.h>


void repString()
{
    char str[100], pat[100], rep[100], ans[100];
    printf("\nEnter the main string: ");
    fgets(str, 10, stdin);

    printf("\nEnter the pattern string: ");
    fgets(pat, 10, stdin);

    printf("\nEnter the replace string: ");
    fgets(rep, 10, stdin);

    int s = 0, s1 = 0;
    int p = 0, a = 0;

    int flag = 0;

    while(str[s] != '\0')
    {
        if(str[s1] == pat[p])
        {
            ++s1; ++p;
            if(pat[p] != '\0')
            {
                flag = 1;
                for(int i = 0; rep[i] != '\0'; ++i,++a)
                {
                    ans[a] = rep[i];
                }
                p = 0;
                s = s1;
            }
        }
        else
        {
            ans[a] = str[s];
            ++a; ++s;
            p = 0;
            s1 = s;
        }
    }
    if(flag)
    {
        ans[a] = '\0';
        printf("\nThe resultant string is: %s\n", ans);
    }
    else
    {
        printf("\nPatter not found!\n");
    }
    
}

int main()
{
    repString();
    return 0;
}