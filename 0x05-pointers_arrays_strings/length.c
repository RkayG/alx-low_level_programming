#include <stdio.h>

int main(void)
{
	char s[] = "greeting to you my dear";
	int len;

	len = printf("%ld", sizeof(s) - 2);
	return len;
}
