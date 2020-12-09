#include "defs.h"

// 動的確保の例題関数。
void example23(void)
{
    char buff[MAXLEN+1];
    struct record *sp;

    sp = (struct record *)malloc(sizeof(struct record));

    if (sp == NULL)
    {
        error("Cannot allocate memory for structure");
    }

    scanf("%s", buff);
    printf("Name = %s\n", buff);
    sp->name = (char *)malloc(sizeof(char)*(strlen(buff)+1));

    if (sp->name == NULL)
    {
        error("Cannot allocate memory for name");
    }
    
    strcpy(sp->name, buff);
    scanf("%d", &sp->score);
    printf("score = %d\n", sp->score);
    printf("%s’s score is %d\n", sp->name, sp->score);
    
    return;
}

void error(char *str)
{
    printf("Error: %s\n", str);

    return;
}
