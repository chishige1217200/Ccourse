#include <stdio.h>
#include <stdlib.h>

void int_list_print();
void int_list_append(int a);

struct int_list
{
    int num;
    struct int_list *next; // 次のint_listを指すポインタ
};

struct int_list *parent; // グローバル変数（先頭要素用）

int main(void)
{
    int i = 0;
    int_list_print();
    for (i = 0; i < 5; i++)
    {
        int_list_append(i);
        int_list_print();
    }

    return 0;
}

void int_list_print()
{
    if (parent == NULL)
    {
        printf("Empty\n");
        return;
    }

    struct int_list *ne = parent;
    printf("[");
    while (1)
    {
        printf("%d", ne->num);
        if (ne->next != NULL)
        {
            printf(", ");
            ne = ne->next;
        }
        else
            break;
    }
    printf("]\n");
}

void int_list_append(int a)
{
    struct int_list *ne;
    if (parent == NULL)
    {
        parent = malloc(sizeof(struct int_list *)); // 動的メモリ確保
        parent->num = a;
        parent->next = NULL;
        return;
    }
    else
    {
        ne = parent;
        while (1)
        {
            if (ne->next != NULL)
                ne = ne->next;
            else
            {
                ne->next = malloc(sizeof(struct int_list *)); // 動的メモリ確保
                ne->next->num = a;
                ne->next->next = NULL;
                return;
            }
        }
    }
}