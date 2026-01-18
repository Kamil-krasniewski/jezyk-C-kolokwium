#include <stdio.h>
    
void matrix_transformation(const int src[5][5], int dest[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int suma = 0;
            int count = 0;
            int wieksza = 1;

            if (i > 0) {
                suma += src[i - 1][j];
                count++;
                if (src[i][j] <= src[i - 1][j])
                    wieksza = 0;
            }

            if (i < 4) {
                suma += src[i + 1][j];
                count++;
                if (src[i][j] <= src[i + 1][j])
                    wieksza = 0;
            }

            if (j > 0) {
                suma += src[i][j - 1];
                count++;
                if (src[i][j] <= src[i][j - 1])
                    wieksza = 0;
            }

            if (j < 4) {
                suma += src[i][j + 1];
                count++;
                if (src[i][j] <= src[i][j + 1])
                    wieksza = 0;
            }

            int srednia = suma / count;

            if (wieksza == 1)
                dest[i][j] = 1;
            else if (src[i][j] < srednia)
                dest[i][j] = -1;
            else
                dest[i][j] = 0;
        }
    }
}


int main(){
}
