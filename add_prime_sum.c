#include <stdlib.h>
#include <unistd.h>

int     ft_atoi(const char *str)
{       
        int     i = 0;
        int result = 0;

        while (str[i] >= '0' && str[i] <= '9')
        {       
                result = (result * 10) + (str[i++] - '0');
        }       
        return (result);
}  

void	ft_putchar(char c)
{
	write(1, &c, 1);
}        

void ft_putnbr(int n)
{
	if (n > 9)
    	{
        		ft_putnbr(n / 10);
        		ft_putchar(n % 10 + '0');
    	}
    	else
    	{
       		ft_putchar(n + '0');
    	}
}

int is_prime(int num)
{
    // Les nombres inférieurs ou égaux à 1 ne sont pas premiers
    if (num <= 1)
        return 0;

    // Les nombres pairs supérieurs à 2 ne sont pas premiers
    if (num % 2 == 0 && num > 2)
        return 0;

    // Nous n'avons pas besoin de vérifier les diviseurs jusqu'à (num / 2)
    // Nous pouvons aller jusqu'à la racine carrée de num car tout diviseur supérieur
    // à la racine carrée aurait un correspondant plus petit qui aurait déjà été vérifié
    // Pour des raisons d'efficacité, nous initialisons i à 3 et incrémentons de 2 à chaque itération
    // pour ne tester que les nombres impairs (les pairs ont déjà été vérifiés)
    int i = 3;
    while (i * i <= num)
    {
        if (num % i == 0)
            return 0;
        i += 2;
    }

    // Si aucune division exacte n'est trouvée, le nombre est premier
    return 1;
}

int	main(int ac, char** av)
{
	if (ac == 2)
	{
		int	nb = ft_atoi(av[1]);
		int	sum = 0;
		while (nb > 0)
		{
    			if (is_prime(nb))
        			{	
        				sum += nb;
        			}
    			nb--;
		}
		ft_putnbr(sum);
	}
	else
	{
		ft_putnbr(0);
	}	
	write(1, "\n", 1);
	return (0);
}
/*/D'accord, prenons l'exemple où num est égal à 17, et parcourons les étapes de la fonction is_prime.

La fonction is_prime est appelée avec num égal à 17.

i est initialisé à 3.

La première condition vérifie si num est inférieur ou égal à 1. Ce n'est pas le cas ici (17 > 1), donc la condition est fausse et le code passe à l'étape suivante.

La seconde condition vérifie si num est divisible par 2 et si num est supérieur à 2. Encore une fois, ce n'est pas le cas ici (17 n'est pas divisible par 2), donc la condition est fausse et le code passe à la boucle while.

La boucle while continue à s'exécuter tant que i est inférieur à num / 2 (soit 8.5 dans ce cas). Puisque i (3) est inférieur à num / 2, le code entre dans la boucle.

À l'intérieur de la boucle, la condition if (num % i == 0) vérifie si num est divisible par i (3). Ce n'est pas le cas ici (17 n'est pas divisible par 3), donc le code passe à l'étape suivante.

i est augmenté de 2, donc i est maintenant égal à 5.

i (5) est toujours inférieur à num / 2 (8.5), donc la boucle continue. La condition if (num % i == 0) vérifie si num est divisible par i (5). Encore une fois, ce n'est pas le cas (17 n'est pas divisible par 5), donc i est de nouveau augmenté de 2 pour devenir 7.

i (7) est toujours inférieur à num / 2 (8.5), donc la boucle continue. La condition if (num % i == 0) vérifie si num est divisible par i (7). Encore une fois, ce n'est pas le cas (17 n'est pas divisible par 7), donc i est de nouveau augmenté de 2 pour devenir 9.

Maintenant, i (9) n'est pas inférieur à num / 2 (8.5), donc la boucle se termine.

La fonction is_prime renvoie 1, indiquant que num (17 dans ce cas) est un nombre premier.

C'est ainsi que la fonction is_prime détermine que 17 est un nombre premier.


D'accord, supposons que nb soit égal à 17. Voici comment le code se déroulera :

nb = ft_atoi(av[1]) : Cela convertit l'argument d'entrée en un entier. Donc nb est maintenant 17.

sum = 0 : sum est initialisé à 0.

while (nb > 0): Comme nb est 17, qui est supérieur à 0, nous entrons dans la boucle.

if (is_prime(nb--)) : Cela vérifie si 17 est un nombre premier. Comme 17 est un nombre premier, la condition est vraie et le code entre dans la clause if. Notez que nb-- décrémente nb après avoir vérifié s'il est premier. Ainsi, nb est maintenant 16.

sum += (nb + 1): Cela ajoute nb + 1 (qui est 17) à sum. sum est maintenant 17.

La boucle while continue avec nb maintenant égal à 16. Comme 16 n'est pas un nombre premier, sum n'est pas augmenté cette fois-ci. nb est décrémenté à 15.

Le même processus se répète pour tous les nombres de 15 à 1. Chaque fois qu'un nombre premier est trouvé, il est ajouté à sum. Les nombres premiers inférieurs à 17 sont 2, 3, 5, 7, 11, 13 et 17.

L'ajout de tous ces nombres premiers donne :
sum = 2 + 3 + 5 + 7 + 11 + 13 + 17 = 58.

Une fois que nb atteint 0, la boucle while s'arrête.

Enfin, ft_putnbr(sum) affiche la somme, qui est 58.

Donc, si nb est 17, le programme affichera 58, qui est la somme de tous les nombres premiers inférieurs ou égaux à 17.*/
