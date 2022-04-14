#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    char word[100];
    int i, j, a;
    int l, ug;

    printf("Uguulber: ");
    gets(text);
    printf("Haih ug: ");
    gets(word);

    l  = strlen(text); 
    ug = strlen(word); 
    for(i=0; i<l - ug; i++)
    {
        a = 1;
        for(j=0; j<ug; j++)
        {
            if(text[i + j] != word[j])
            {
                a = 0;
                break;
            }
        }

        if(a == 1)
        {
            printf("%s ugiin bairlaliin index: %d \n", word, i);
        }
    }

    return 0;
}
