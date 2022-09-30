#include <stdio.h>
#include <stdlib.h>

// Numero BITs
#define NB 8

void	ft_deci_bina(char *argv)
{
	char	bin[NB + 1];
	int		decimal;
	div_t	res;
	//int		res;
	int		i;

	for (int j = 0; j < NB; j++)
		bin[j] = '0';
	decimal = atoi(argv);
	i = NB - 1;
	while (decimal > 0)
	{
		res = div(decimal, 2);
		//res = decimal % 2;
		bin[i] = res.rem == 1 ? '1' : '0';
		decimal = res.quot;
		i--;
	}
	bin[NB] = '\0';
	printf("Num bin = %s\n", bin);
	return ;
}


int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("Bad No ARG\n");
	else
		ft_deci_bina(argv[1]);
	return (0);
}
