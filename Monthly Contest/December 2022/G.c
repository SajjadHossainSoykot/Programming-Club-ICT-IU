#include<stdio.h>
#include<string.h>
int main()
{
    char s[26];
    scanf("%s", s);
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        char w[12];
        scanf("%s", w);
        int count=0;
        for(int f=0; f<strlen(s); f++)
        {
            for(int g=0; g<strlen(w); g++)
            {
                if(w[g]==s[f]) count++;
            }
        }
        if(count==strlen(w)) printf("YES\n");
        else printf("NO\n");
    }

}