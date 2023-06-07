void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	int	temp;

	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i+ 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

Prenons un tableau d'entiers de taille 5 comme exemple : tab[] = {5, 3, 8, 1, 4}. Nous allons montrer comment la fonction sort_int_tab triera ce tableau en utilisant l'algorithme de tri à bulles.

Initialisation : i est initialisé à 0, et temp est prêt à être utilisé pour les échanges. Le tableau initial est {5, 3, 8, 1, 4}.

Première itération de la boucle : La fonction compare tab[i] et tab[i + 1], soit tab[0] et tab[1], ou 5 et 3. 5 est plus grand que 3, donc ces deux éléments sont échangés. Le tableau devient {3, 5, 8, 1, 4}. Comme un échange a eu lieu, i est réinitialisé à 0.

Deuxième itération : La fonction compare maintenant tab[0] et tab[1], ou 3 et 5. 3 n'est pas plus grand que 5, donc ces éléments restent en place et i est incrémenté à 1.

Troisième itération : La fonction compare tab[1] et tab[2], soit 5 et 8. 5 n'est pas plus grand que 8, donc ces éléments restent en place et i est incrémenté à 2.

Quatrième itération : La fonction compare tab[2] et tab[3], soit 8 et 1. 8 est plus grand que 1, donc ces deux éléments sont échangés. Le tableau devient {3, 5, 1, 8, 4}. Comme un échange a eu lieu, i est réinitialisé à 0.

Cela continue jusqu'à ce que tout le tableau soit trié. Les étapes finales seraient :

Après la quatrième itération, la fonction recommence à partir de l'index 0 et compare à nouveau chaque paire d'éléments, effectuant des échanges au besoin. À la fin de ce passage, le tableau sera {3, 1, 5, 4, 8}.

La fonction recommence à partir de l'index 0 et effectue un autre passage. À la fin de ce passage, le tableau sera {1, 3, 4, 5, 8}.

Enfin, la fonction effectue un dernier passage à travers le tableau, mais cette fois, elle ne trouve aucun élément à échanger, ce qui indique que le tableau est entièrement trié. La boucle while se termine donc et la fonction renvoie, laissant le tableau trié en {1, 3, 4, 5, 8}.

Cette fonction, sort_int_tab, est une implémentation simple de l'algorithme de tri à bulles pour trier un tableau d'entiers en ordre croissant.

Voici ce qu'elle fait, étape par étape :

Initialisation : La fonction commence par initialiser deux variables : i, qui est l'index actuel dans le tableau, et temp, qui est utilisée pour échanger deux éléments du tableau.

Boucle principale : La fonction entre ensuite dans une boucle while, qui continue tant que i est inférieur à size - 1. C'est parce que l'indice du dernier élément d'un tableau de taille size est size - 1 (puisque les indices de tableau en C commencent à 0).

Vérification de l'ordre des éléments : Dans la boucle, la fonction vérifie si l'élément à l'index i est plus grand que l'élément à l'index i + 1. Si c'est le cas, cela signifie que ces deux éléments sont dans le mauvais ordre et doivent être échangés.

Échange des éléments : Si les éléments sont dans le mauvais ordre, la fonction utilise la variable temp pour les échanger. Elle stocke l'élément à l'index i dans temp, puis copie l'élément à l'index i + 1 à l'index i, puis copie temp (qui contient l'ancien élément à l'index i) à l'index i + 1. Ensuite, elle réinitialise i à 0 pour recommencer le parcours du tableau depuis le début.

Passage à l'élément suivant : Si les éléments sont dans le bon ordre (c'est-à-dire que l'élément à l'index i n'est pas plus grand que l'élément à l'index i + 1), la fonction passe simplement à l'élément suivant en incrémentant i.

Le tableau est entièrement trié lorsque la fonction a parcouru tout le tableau sans avoir besoin d'échanger d'éléments, c'est-à-dire lorsqu'elle a traversé le tableau une fois sans entrer dans le bloc if.

Notez que le tri à bulles n'est pas un algorithme de tri très efficace, surtout pour les grands tableaux, car sa complexité temporelle est O(n^2) dans le pire des cas (où n est la taille du tableau).
