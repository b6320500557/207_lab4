#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char word[1001],x[11][5]={"i","of","the","on","at","for","with","a","an","in","and"};
    scanf("%[^\n]s",word);
    char *word2;
    word2 = strtok(word," ");
    int i,j,k=0;
    while(word2 != NULL)
    {
        for(i=0; i<11; i++)
        {
            if (strcmp(word2,x[i]))
            {
                k++;
            }
        }
           if(k==11 || j==0)
        {
            printf ("%c",toupper(word2[0]));
        }
            word2 = strtok(NULL," ");
            j++,k=0;
    }
    return 0;
}
