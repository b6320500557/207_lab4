#include <stdio.h>
#include <string.h>
int main()
{
    char word[1001],x[11][5]={"i","of","the","on","at","for","with","a","an","in","and"};
    scanf("%s",word);
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
    }
    return 0;
}
