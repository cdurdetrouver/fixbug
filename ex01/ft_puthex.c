#include <unistd.h>

void	ft_putchar(const char c)
{
	write(1, &c, 1);
}

void	ft_puthex(int num) // unsigned int
{
	if (num == 0)
		ft_putchar('0');
	if (num >= 16)
	{
		ft_puthex(num / 16);
		ft_puthex(num % 16);
	}
	else if (num <= 9)
		ft_putchar(num + '0');
	else
		ft_putchar(num - 10 + 'a');
}
