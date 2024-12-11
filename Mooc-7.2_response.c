#include <stdio.h>
void sort_bubble(int *p, int n);
void sort_exchange(int *p, int n);
int main()
{
    int n, a[10];
    printf("请输入数组长度（0<n≤10）且为整数:");
    scanf("%d", &n);

    // 优化，C语言输入时对n做了整数控制，暂不考虑其他数据类型，但其实这种C语言输入直接控制用户输入类型，其实很不符合用户实际使用情况，所以我觉得scanf这个函数在C语言中很鸡肋，这可能也是C语言不适合开发的原因之一，大多数只能运用到硬件的逻辑控制中，且scanf在实际中很少用到
    if (n <= 0 || n > 10) // 优化：对n的值没有做考虑，如果为负值或大于10，将不会执行下一步
    {
        printf("请输入正确的数组长度！");
        return 0;
    }

    printf("请输入长度为%d数组（空格隔开）：", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf ", &a[i]); //&没有,其次建议%d改为长浮点型（double)%lf
    }

    // sort_bubble(a, n);//冒泡排序
    sort_exchange(a, n); // 交换排序

    printf("排序后长度为%d的数组为：", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
    return 0;
}

// 冒泡排序
void sort_bubble(int *p, int n)
{
    int i, j, t;
    for (i = 0; i < n - 2; i++)
    { // n-1
        for (j = i + 1; j < n; j++)
        {
            if (p[i] > p[j])
            {
                t = p[i];
                p[i] = p[j];
                p[j] = t;
            }
        }
    }
}

// 交换排序
void sort_exchange(int *p, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        // 找最小下标索引
        for (int j = i + 1; j < n; j++)
        {
            if (p[j] < p[min_idx])
            {
                min_idx = j;
            }
        }
        // 交换当前数组与最小值数组
        if (min_idx != i)
        {
            int temp = p[i];
            p[i] = p[min_idx];
            p[min_idx] = temp;
        }
    }
}