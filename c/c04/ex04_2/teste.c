#include <unistd.h>

void	write_alg(char c)
{
	write(1, &c, 1);
}

void	write_nbr(int nb, char *base)
{
	if (nb < 0)
	{
		write_alg('-');
		write_nbr(-nb, base);
	}
	else if(nb >= 5)
	{
		write_nbr(nb / 5, base);
		write_nbr(nb % 5, base);
	}		
	else if(nb < 5) 
	{	
		write_alg(base[nb]);
	}
}

int main()
{
	char *base = {"01234"};
	int nb = 5;
	write_nbr(nb, base);
}	
