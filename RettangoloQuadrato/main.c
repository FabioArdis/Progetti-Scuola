#include <stdio.h>

int main(int argc, char const *argv[])
{
	int latoA, latoB, area;
	
	printf("Inserire il lato A.\n");
	scanf("%d", &latoA);

	printf("\nInserire il lato B.\n");
	scanf("%d", &latoB);

	if (latoA == latoB)
		printf("\nIl quadrilatero è un quadrato.\n");
	else
		printf("\nIl quadrilatero è un rettangolo.\n");
	
	return 0;
}
