#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	size_t num = 0;
	bool primo = true;
	printf("Inserire il numero.\n");
	scanf("%d", &num);
	for (size_t i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			primo = false;
			break;
		}
	}
	if (primo == true)
		printf("%d e' un numero primo.\n", num);
	else
		printf("%d non e' un numero primo.\n", num);
	return 0;
}
