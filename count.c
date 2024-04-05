#include <stdio.h>
#include <string.h>
int main(){
    char str[10] = "string_123";
    int alpha, digits, splch, whspace, es_sequence, i;
    alpha = digits = splch = whspace = es_sequence = i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alpha++;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            digits++;
        }
        else if (str[i] == '\0' || str[i] == '\n' || str[i] == '\t')
        {
            es_sequence++;
        }
        else if (str[i] == ' ')
        {
            whspace++;
        }
        
        else
        {
            splch++;
        }
        i++;
    }
    printf("total alphabets : %d\n", alpha);
    printf("total digits : %d\n", digits);
    printf("total special characters : %d\n", splch);
    printf("total escape sequences : %d\n", es_sequence);
    printf("total white spaces : %d\n", whspace);
    

return 0;
}