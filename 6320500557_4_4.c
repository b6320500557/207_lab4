#include <stdio.h>
#include <string.h>
int main()
{
    char word[1001],x[11][5]={"i","of","the","on","at","for","with","a","an","in","and"};
    scanf("%s",word);
    char *word2;
    word2 = strtok(word," ");
    if(word2)
    {
        printf("%s",word2);
    }
    return 0;
}
