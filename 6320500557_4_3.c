#include <stdio.h>
#include <string.h>
int main()
{
    char dirty[201];
    scanf("%s",dirty);
    int i;
    for(i=0 ; i<strlen(dirty); i++)
    {
       if(dirty[i] != dirty[i+1])
       {
           printf("%c",dirty[i]);
       }
    }
    return 0;
}
