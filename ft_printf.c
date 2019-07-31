#include <stdarg.h>
#include <stdio.h>

int			cut_arg(va_list *apl, char *frmt)
{
	int i;
	while ()
	{

	}
}

int			ft_printf(char *frmt, ...)
{
	va_list	apl;
	int ret;

	va_start(apl, frmt);//как проеврить что аргументы есть?
	ret = cut_arg(&apl, frmt);//in
	va_end(apl);
	return (-4); //bytes displayed
	return (0);
}
int			main()
{
	int ret;
	char *frmt;
	frmt = "FUCK %s life %d";
	ret = ft_printf(frmt, "YR", 111);
	ret = printf("ret=%i\n", ret);
	ret = printf("");
	return (0);
}