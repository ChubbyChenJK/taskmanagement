#include <stdio.h>

int main()
{
	FILE *fp;
	int fd;

	fp = fopen("./test.txt","r");
	fd = fileno(fp);

	printf("fd = %d",fd);
	fclose(fp);

	printf("hello, world!");
}
