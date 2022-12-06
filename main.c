#include<stdio.h>

void    put_binary(int nb)
{
	int size;

	size = sizeof(nb) * 8;
	while (size--)
		printf("%d", (nb >> size) & 1);
	printf("\n");
}

void    show_table(int nb, int mask, int res)
{
	int i;

	put_binary(nb);    
	put_binary(mask);
	i = sizeof(nb) * 8;
	while (i--)
		printf("-");
	printf("\n");
	put_binary(res); 
}

/*
	Operateur Binaire
		
		&		and
		|		or
		^		xor
		~		not


		>>		right-bitshift
		<<		left-bitshift

*/

int main(void)
{
	int nb;
	int mask;
	int res;

	nb = 1;
	mask = 1;
	res = nb & mask;

	// show_table(nb, mask, res);   
	// printf("res = %d\n", res);    
	return 0;
}
