#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num = 0;
	int pari = 0;
	int dispari = 0;
	printf("Inserisci 10 numeri.\n");
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d", &num);
		if(num % 2 == 0)
			pari++;
		else
			dispari++;
	}

	printf("Pari: %d\nDispari: %d", pari, dispari);
	return 0;
}
