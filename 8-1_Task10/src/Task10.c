#include "defs.h"

// リストの先頭の要素へのポインタ
static element *first;

// キーボードの文字列入力を保持するバッファ
static char buff[MAXLEN];

// リストに要素を追加する関数
void comm_add(void)
{
    element *pt;
    char name[MAXLEN+1];

    pt = (element *)malloc(sizeof(element));
    if (pt == NULL)
    {
        error("Cannot allocate memory for structure");
    }

    pt -> next = first;
    first = pt;

    printf("名前: "); 
    scanf("%s", name);

    pt -> name = (char *)malloc(sizeof(char)*(strlen(name)+1));
    if (pt -> name == NULL)
    {
        error("Cannot allocate memory for name");
    }

    strcpy(pt -> name, name);

    printf("点数: "); 
    scanf("%d", &pt -> score);
    
    return;
}

// リストの大きさを出力する関数
void comm_count(void)
{
    int count = 0;
    element *pt;
    pt = first;

    while(pt != NULL)
    {
        count++
        pt = pt -> next;
    }

    printf("size of list: %d\n", pt -> name, pt -> score);
    
    return;
}

// リストの要素を列挙する関数
void comm_list(void)
{
    element *pt;
    pt = first;

    while(pt != NULL)
    {
        printf("%10sの得点 | %d\n", pt -> name, pt -> score);
        pt = pt -> next;
    }
    
    return;
}

// リストの要素を削除する関数
void comm_delete(void)
{
    char name[MAXLEN+1];
    element *pt;
    pt = first;

    printf("削除する名前: "); 
    scanf("%s", name);

    while(pt != NULL)
    {
        if( strcmp(name, pt -> name))
        { 
            printf("%10sの要素を削除します。 | %d\n", pt -> name, pt -> score);
            free(pt->name);
            free(pt);
        }
        pt = pt -> next;
    }
    
    return;
}

void comm_seach(void)
{
    char name[MAXLEN+1];
    element *pt;
    pt = first;

    printf("検索する名前: "); 
    scanf("%s", name);

    while(pt != NULL)
    {
        if( strcmp(name, pt -> name)){ printf("%10sの得点 | %d\n", pt -> name, pt -> score); }
        pt = pt -> next;
    }
    
    return;
}

// リスト構造を扱う関数。
void task10(void)
{
    first = NULL;

    while(1)
    {
        printf("Command: "); 
        scanf("%s", buff); 

        switch(buff[0])
        { 
            case 'a':
                comm_add(); break;
            // case 'd':
            //     comm_delete(); break;
            case 's':
                comm_search(); break;
            case 'c':
                comm_count(); break;
            case 'l':
                comm_list(); break;
            case 'e':
                return;
            default:
                printf("Illegal Command\a\n");
        }
    }
}

// エラーを出力する関数。
void error(char *str)
{
    printf("Error: %s\n", str);

    return;
}
