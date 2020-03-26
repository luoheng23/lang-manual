// 空值
// c语言有空值的概念, 空值为NULL.
#include <stdio.h>

int array_size = 5;
int array[] = {1, 2, 3, 4, 5};
int index_size = 4;
int ind[] = {0, 2, 4, 6};

int *get_element_by_index(int ind)
{
    if (ind < 0 || ind >= array_size)
    {
        return NULL;
    }
    return array + ind;
}

int main()
{
    int sum = 0;
    int i;
    for (i = 0; i < index_size; i++)
    {
        int *cur = get_element_by_index(ind[i]);
        if (cur != NULL)
        { // 需要检查函数返回的变量是否为空，不检查也可以编译，但程序有崩溃的危险
            sum += *cur;
        }
    }
    printf("sum: %d\n", sum);
}