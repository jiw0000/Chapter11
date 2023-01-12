#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 10

int atoi_func(char* str);

int main(void)
{
	char str[SIZE];

	while (1)
	{

		scanf_s("%s", str);

		if (strcmp(str, "0") == 0)
			break;

		printf("%d\n", atoi_func(str));
	}
}

int atoi_func(char* str)
{
	int num = 0;
	char digits[] = { '0','1','2','3','4','5','6','7','8','9' };

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (isdigit(str[i]) == 0)
			return 0;

		num *= 10;
		for (int j = 0; j < 10; j++)
		{
			if (str[i] == digits[j])
			{
				num += j;
				break;
			}
		}
	}
	return num;
}