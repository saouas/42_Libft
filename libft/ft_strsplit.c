#include "libft.h"
//HEADER MANQUANT
//
//
//

static	int		count_words(const char *str, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			words++;
		i++;
	}
	if (str[0] != '\0')
		words++;
	return (words);
}

static char		*ft_word(const char *str, char c, int *i)
{
	char	*word;
	int		j;

	if (!(word = (char *)malloc(sizeof(word) * (ft_strlen(str)))))
		return (NULL);
	j = 0;
	while (str[*i] != c && str[*i])
	{
		word[j] = str[*i];
		j++;
		*i += 1;
	}
	word[j] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (word);
}

char		**ft_strsplit(const char *str, char c)
{
	int		i;
	int		j;
	int		nb_words;
	char	**tab;

	i = 0;
	j = 0;
	nb_words = count_words(str, c);
	if (!(tab = (char **)malloc(sizeof(tab) * (nb_words + 2))))
		return (NULL);
	while (str[i] == c && str[i])
		i++;
	while (j < nb_words && str[i])
	{
		tab[j] = ft_word(str, c, &i);
		j++;
	}
	tab[j] = 0;
	return (tab);
}
