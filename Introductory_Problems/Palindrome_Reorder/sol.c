#include <stdio.h>

int main( void )
{
    char s[(int) 1e6];
    int mp[26] = {0};
    int o = 0;
    char c;

    scanf("%s", s);
    
    for(int i = 0; s[i]!='\0';i++)
    {
        int pos = s[i]-'a';
        mp[pos]++;
    }
    
    for(int i = 0;i<26;i++)
    {
        if(mp[i]%2==1)
        {
            o++;
            mp[i]--;
            c = 'a' + i;
        }
        if(o>1)
        {
            printf("NO SOLUTION");
            return 0;
        }
    }
    
    for(int i = 0;i<26;i++)
    {
        for(int j = 0; j < mp[i]/2;j++)
        {
            printf("%c", 'a'+i);
        }
        mp[i] = mp[i]/2;
    }
    
    if(o==1) 
    {
        printf("%c", c);
    }
    
    for(int i = 25;i>=0;i--)
    {
        for(int j = 0; j < mp[i];j++)
        {
            printf("%c", 'a'+i);
        }
    }
    
    return 0;
}