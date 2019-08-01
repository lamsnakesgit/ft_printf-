#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int main(int ac, char **av)
{
/*	int fd;
	char buf[12];
	fd = open(av[1], O_RDONLY);
	read(fd, buf, 11);
	buf[11] = '\0';
	write(1, buf, 12);
*/
	double d= 0.1;
	float f = 0.2;

	long double res;
	res = d + f;
	printf("%%f=%#10.54f            ", -(d + f));
	printf("%%f=% Lf\n", res);

//	printf("%s %s %C", "f", "e", '3', res);
	printf("%d %c\n", 123, 128);
	printf("%%s=%10s","QWE\n" );
	printf("\"");
	printf("\nstr=%-12s", "mystring");
	printf("это мой юиикод!!!");
	return (0);
}
