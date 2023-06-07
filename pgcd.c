#include <stdio.h>
#include <stdlib.h>

int main(int ac, char const** av)
{
	if (ac == 3)
	{
		int	string1 = atoi(av[1]);
		int	string2 = atoi(av[2]);
		
		if (string1 <= 0 || string2 <= 0)
		{
			printf("\n");
			return (0);
		}
		while (string2 != 0)
		{
			int temporary = string2;
			string2 = string1 % string2;
			string1 = temporary;
		}
		printf("%d", string1);
	}
	printf("\n");
	return (0);
}
Par exemple, le PGCD de 24 et 36 est 12, car 12 est le plus grand nombre qui divise à la fois 24 et 36 sans laisser de reste.

Voici comment les valeurs de string1, string2 et temporary changent à chaque tour de boucle :

Au début :

string1 = 48
string2 = 18
Après la première itération de la boucle :

temporary (ancienne string2) = 18
string2 (reste de string1 / string2) = 48 % 18 = 12
string1 (ancienne string2) = 18
Après la deuxième itération :

temporary (ancienne string2) = 12
string2 (reste de string1 / string2) = 18 % 12 = 6
string1 (ancienne string2) = 12
Après la troisième itération :

temporary (ancienne string2) = 6
string2 (reste de string1 / string2) = 12 % 6 = 0
string1 (ancienne string2) = 6
À la fin de ces étapes, string2 est devenu 0, donc la boucle s'arrête. Le PGCD, qui est la valeur actuelle de string1, est donc 6.

J'espère que cette explication textuelle détaillée vous aide à visualiser le processus. Pour une représentation visuelle, vous pouvez envisager de dessiner un tableau ou un diagramme à partir de ces informations.

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$
