#include <stdio.h>
#include <string.h>
int main()
{
    char word[1000],x[]={'i','of',"the","on","at","for","with",'a',"an","in","and"};
    scanf("%s",word);
    char *word2;
    word2 = strstr(word,x);
    if(word2)
    {
        printf("%s",word2);
    }
    return 0;
}
