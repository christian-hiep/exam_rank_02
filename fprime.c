#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	number;

	if (argc == 2)
	{
		i = 1;
		number = atoi(argv[1]);
		if (number == 1)
			printf("1");
		i++;
		while (number >= i)//== 2
		{
			if (number % i == 0)
			{
				printf("%d", i);
				if (number == i)
					break ;
				printf("*");
				number /= i;
				i = 1;
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}

//225225  /3      225225 > 2  si 225225 % i (= 2) == 0 pas possible
//		si 225225 % i (= 3) == 0 possible on print i = 3 ensuite number == i faux
//		on ajoute *
//		ensuite 225225 = 225225/3 = 75075
//		i = 1;
//		i++; i = 2;
//75075   /3
//25025  /5
//5005  /5
//1001 /7
//143 /11
//13 /13
//1
