#include <stdio.h>


char* mystrncpy(char* s1, char* s2, int n);

int main(void)
{
	char s1[20], s2[20];
	char* res_fgets;
	char* result_str;

	while (1)
	{
		res_fgets = fgets(s2, 20, stdin);


		result_str = mystrncpy(s1, s2, 20);

		puts(result_str);
	}

	return 0;
}

char* mystrncpy(char* s1, char* s2, int n)
{
	int i = 0;

	while (1)
	{
		if (i < n && s2[i] != '\0')
		{
			s1[i] = s2[i];
		}
		else
		{
			if (s2[i] == '\0')
			{
				while (getchar() != '\n')
					continue;
			}
			s1[i] = '\0';
			break;
		}
		i++;
	}

	return s1;

}