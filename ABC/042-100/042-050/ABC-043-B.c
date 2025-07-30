/**
 * ABC-043-B
 */
#include <stdio.h>
#include <string.h>

/**
 *
 */
int main()
{
    char s[20];
    char t[20];
    scanf("%s", s);

    int len = strlen(s);
    int index = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'B')
        {
            if (index > 0)
            {
                index--;
                t[index] = '\0';
            }
        }
        else
        {
            t[index] = s[i];
            index++;
        }
    }
    t[index] = '\0'; // Null-terminate the string
    printf("%s\n", t);

    return 0;
}