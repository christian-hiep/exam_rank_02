#include <stdlib.h>	//For malloc
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	long	n = nbr;
	int	len = 0;
	
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	long	tmp = n;
	while (tmp)
	{
		tmp = tmp / 10;
		len++;
	}
	char *result = malloc(sizeof(char) * (len + 1));
	if (!result)
	{
		return (NULL);
	}
	result[0] = '\0';
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	len--;
	while (n)
	{
		result[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	if (nbr < 0)
	{
		result[0] = '-';
	}
	return (result);
}
	
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    int number = atoi(argv[1]);
    char *number_as_string = ft_itoa(number);

    if (number_as_string != NULL)
    {
        printf("Le nombre %d converti en chaîne de caractères est : %s\n", number, number_as_string);
        free(number_as_string);
    }
    else
    {
        printf("Erreur lors de la conversion du nombre en chaîne de caractères.\n");
    }

    return 0;
}
