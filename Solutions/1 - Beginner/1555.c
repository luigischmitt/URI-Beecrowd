// beecrowd | 1555 (Funções)

// Durante a aula eu fiz usando funções, mas aqui fiquei sem vontade, porém mesma lógica :)

#include <stdio.h>
#include <math.h>

int main ()
{

	int x, y, rafael, beto, carlos;
	unsigned casos;

	scanf("%u", &casos);

	while (casos--)
	{
		scanf("%d %d", &x, &y);

		rafael = pow(3*x, 2) + pow(y, 2);
		beto = 2*(pow(x, 2)) + pow(5*y, 2);
		carlos = -100*x + pow(y, 3);

		if (rafael > beto && rafael > carlos)
			printf("Rafael ganhou\n");
		else if (beto > rafael && beto > carlos)
			printf("Beto ganhou\n");
		else
			printf("Carlos ganhou\n");
	}

}
