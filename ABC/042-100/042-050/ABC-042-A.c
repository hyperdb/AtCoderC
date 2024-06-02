/**
 * 
 */
#include <stdio.h>
#include <stdbool.h>
/**
 * 
 */
void swap(int *a, int *b)
{
    int t;

    t = *a;
    *a = *b;
    *b = t;
}
/**
 * 
 */
void sort(int a[], int n)
{
    for(int i = 0; i < (n - 1); i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                swap(&a[i], &a[j]);
            }
        }
    }
}
/**
 * 
 */
int sum(int a[], int n)
{
    int t = 0;

    for (int i = 0; i < n; i++)
    {
        t += a[i];
    }
    return t;
}
/**
 *
 */
int main()
{
    int a[3];
    bool r = false;

    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    if(sum(a, 3) == 17)
    {
        sort(a, 3);

        if(a[0] == 5 && a[1] == 5)
        {
            r = true;
        }
    }

    printf(r ? "YES": "NO");

    return 0;
}
