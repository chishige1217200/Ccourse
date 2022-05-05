#include <stdio.h>
#include <stdlib.h>

void int_list_print();
void int_list_append(int a);
void int_list_del(int a);
// int int_list_sum(); // リストの要素の合計を返す関数（演習用）

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

    int_list_del(3);
    int_list_print();
    int_list_del(1);
    int_list_print();

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

void int_list_del(int a)
{
    struct int_list *ne = parent;
    struct int_list *del = NULL;
    int counter = 1;

    if (a < 1)
    {
        fprintf(stderr, "その操作はサポートされていません．\n");
        return;
    }

    if (parent == NULL)
    {
        fprintf(stderr, "削除する対象がありません．\n");
        return;
    }
    else
    {
        while (1)
        {
            if (a == 1)
            {
                parent = ne->next;
                free(ne);
                break;
            }
            if (counter == a - 1)
            {
                del = ne->next;
                ne->next = ne->next->next;
                free(del);
                break;
            }
            if (ne->next != NULL)
            {
                ne = ne->next;
                counter++;
            }
            else
            {
                fprintf(stderr, "削除する対象がありません．\n");
                return;
            }
        }
    }
}