#include <stdio.h>

int number_simulation(int n){
		int  m = n%10;
		int count = 0;
		while (n > 10){
		if (m >= 0 && m < 4){ 
			n = n + m*2;
			count ++;
			}
		else if (m > 3 && m < 7){ 
			n = n - 3;
			count++;
			}
		else if (m > 6 && m < 10){ 
			n = n / 2;
			count++;
			}

	}
	return count;

}

int main(){
	int n;
	scanf("%d", &n);
	int wynik = number_simulation(n);
	printf("Wynik: %d ", wynik);
}
