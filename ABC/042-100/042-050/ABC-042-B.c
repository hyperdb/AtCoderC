/**
 * ABC-042-B
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 */
void swap(char **a, char **b)
{
    char *t;

    t = *a;
    *a = *b;
    *b = t;
}
/**
 *
 */
void sort(char **s, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            char *t;
            if (strcmp(s[i], s[j]) > 0)
            {
                swap(&s[i], &s[j]);
            }
        }
    }
}
/**
 *
 */
int main()
{
    int n, l;

    scanf("%d%d", &n, &l);

    char **s = (char **)malloc(sizeof(char *) * n);

    for (int i = 0; i < n; i++)
    {
        s[i] = (char *)malloc(sizeof(char) * (l + 1));
        scanf("%s", s[i]);
    }

    sort(s, n);

    for (int i = 0; i < n; i++)
    {
        printf("%s", s[i]);
    }

    return 0;
}
