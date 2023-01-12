#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
	char option = 'p';
	char in, out;

	if (argc > 1)
	{
		if (strcmp(argv[1], "-p") == 0)
			option = 'p';
		else if (strcmp(argv[1], "-u") == 0)
			option = 'u';
		else if (strcmp(argv[1], "-l") == 0)
			option = 'l';
	}

	while (1)
	{
		in = getchar();

		if (in == EOF)
			break;

		switch (option)
		{
		case 'p':
			out = in;
			break;
		case 'u':
			out = toupper(in);
			break;
		case 'l':
			out = tolower(in);
			break;
		}

		putchar(out);
	}
	putchar('\n');

	return 0;
}