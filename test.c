#include <stdio.h>

int main (void)
{
	int printed;
	//printf("%-6s\n","kekwloljopalox");
	printed = printf("test = %10d", 100);
	printf("\nprinted = %d", printed);
}