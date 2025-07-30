/**
 * ABC-042-C
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 *
 */
bool check_num(int n, int *a, int k)
{
    int m = 0;

    while (n > 0)
    {
        m = n % 10;
        for (int i = 0; i < k; i++)
        {
            if (m == a[i])
            {
                return false;
            }
        }
        n = n / 10;
    }
    return true;
}

/**
 *
 */
int main()
{
    int n;
    int k;
    scanf("%d%d", &n, &k);

    int *d = (int *)malloc(k * sizeof(int));
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &d[i]);
    }

    while (n <= 100000)
    {
        if (check_num(n, d, k) == true)
        {
            printf("%d\n", n);
            break;
        }
        n++;
    }

    free(d);

    return 0;
}