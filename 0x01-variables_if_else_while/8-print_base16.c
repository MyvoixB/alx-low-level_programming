#include<stdio.h>
/**
 * main- prints numbers between 0 to 9 and letters betwween a to f.
 *
 * return: always 0 (success)
 */
int main(void)
{
	int i;
	for(i=48; i<58; i++)
	{
		putchar(i);
	}
	for (i=97; i<103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return(0);
}
