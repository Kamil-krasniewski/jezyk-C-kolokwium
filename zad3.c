#include <stdio.h>
    
int calculate_score(const char *str)
{
    int suma = 0;
    int mnożnik = 1;

    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            suma += (*str) * 
            mnożnik;
        }
        else if (*str >= '0' && *str <= '9')
        {
            mnożnik = -mnożnik;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            suma = 0;
        }

        str++;
    }

    return suma;
}


    
int main(){
    char text[100];
    scanf("%s", text);
    printf("%d", calculate_score(text));
}
    