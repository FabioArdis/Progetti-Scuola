#include <stdio.h>

int main()
{
	int base = 0;
	int altezza = 0;
	int area = 0;

	do:
		printf("Inserire la base \n");
		scanf("%d", &base);
	while(base != 0)
	
	do:
		printf("Inserire l'altezza\n");
		scanf("%d", &altezza);
	while(altezza != 0)
	
	area = base * altezza;
	
	printf("L'area e': %d", area);
	
	return 0;
}
