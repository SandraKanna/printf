#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	//int		pos = 15;
	//int		neg = 0;
	//unsigned int	u = 58;
	// int		hex = 0x2A;
	// char	*s = "123";

	int one;
	int two;

	one = ft_printf("M: %p\n", (void *)0);
	two = printf("R: %p\n", (void *)0);

	// one = ft_printf("M: %c\n", 0);
	// two = printf("R: %c\n", 0);

	// one = ft_printf("M pos: %d\n", pos);
	// two = printf("R pos: %d\n", pos);

	// one = ft_printf("M neg: %u\n", neg);
	// two = printf("R neg: %u\n", neg);

	// one = ft_printf("M uns: %i\n", u);
	// two = printf("R uns: %i\n", u);

	// ft_printf("This is a hex: %i\n", hex);

	printf("M: %d\n", one);
	printf("R: %d\n", two);
}

//flags for bonus: 0, # and +
/*	printf("");
	printf("pos without flag: %u\n", d);
	printf("flag +d or +i of pos: %+d\n", d);
	printf("flag +d or +i of neg: %+i\n", dd);
	printf("\n");

	printf("char: %c\n", c);
	printf("int: %i\n", d);
	printf("char in hex no flag #x: %x\n", c);
	printf("char in hex with flag #x: %#x\n", c);
	printf("int in hex no flag #x: %x\n", d);
	printf("int in hex with flag #x: %#x\n", d);
	printf("neg int in hex with flag #x: %#x\n", dd);
	printf("\n");

	printf("char with specifier 5: %5c\n", c);
	printf("char with padd 05: %05c\n", c);
	printf("int with padd #05: %05d\n", d);
	printf("s no padd: %s\n", s);
	printf("s padd 01: %01s\n", s);
	printf("s spec -1: %-1s\n", s);
	printf("s with specifier 10s: %10s\n", s);
	printf("s with padd 0s: %0s\n", s);
	printf("s with specifier -1s: %-1s\n", s);
	printf("s with specifier and flag -01s: %-010s\n", s);
	printf("s with specifier and flag -20s: %-20s\n", s);
	printf("s with specifier and flag -02s: %-020s\n", s);

}*/
