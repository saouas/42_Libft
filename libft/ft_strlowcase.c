//DO NOT FORGOT TO ADD HEADER

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		str[i] = str[i] - 32;
		i++;
	}
return (str);
}

int main ()

{
	printf("HELLO SAVA POTO -> %s",ft_strlowcase("HELLO SAVA POTO"));

	return(0);
}
