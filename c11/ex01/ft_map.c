#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *out;

	out = malloc(sizeof(int) * length);
	i= 0;
	while(i < length)
	{
		out[i] = (*f)(tab[i]);
		i++;
	}
	return out;
}



#include <unistd.h>
#include <stdio.h>

int	ft_plusone(int nb)
{
	return(nb + 1);
}


int main()
{
	int tab[] = {1,2,3,4,5,6} ;
	printf("%d", ft_map(tab, 6, &ft_plusone)[6]);
}