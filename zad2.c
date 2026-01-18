#include <stdio.h>
    
int sequence_calc(int n){
    if (n == 0){
        return 0;
    }
    else if (n%3 == 0){
        sequence_calc((n/3) +1);
    }
    else if (n%3 == 1){
        sequence_calc((n-1)*2);
    }
    else if (n%3 == 2){
        sequence_calc((n-2) + 1);
    }
}
int main()
{
    unsigned int n;
    scanf("%u", &n);
    printf("%d", sequence_calc(n));
}
