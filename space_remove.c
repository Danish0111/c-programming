#include <stdio.h>
#include <string.h>
void space_remove(char *str)
{
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
int main()
{
    char str[100];
    printf("enter a string\n");
    // scanf("%s", &str);
    // fgets(str, sizeof(str), stdin);
    gets(str);
    space_remove(str);
    printf("string after removing white spaces :\n%s", str);

    return 0;
}