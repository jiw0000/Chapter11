#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	int word_flag = 0;
	int number_flag = 0;

	int word_cnt = 0;
	int up_cnt = 0;
	int low_cnt = 0;
	int punc_cnt = 0;
	int num_cnt = 0;

	while (1)
	{
		
		ch = getchar();

		if (ch == EOF)
			break;

		if (isupper(ch)) up_cnt++;
		else if (islower(ch)) low_cnt++;
		else if (ispunct(ch)) punc_cnt++;

		if (isspace(ch))
		{
			if (word_flag == 1) word_flag = 0;
			else if (number_flag == 1) number_flag = 0;
		}
		else if (!isspace(ch))
		{
			if (word_flag == 0 && isalpha(ch))
			{
				word_flag = 1;
				word_cnt++;

				if (number_flag == 1)
				{
					number_flag = 0;
					num_cnt--;
				}
			}
			else if (number_flag == 0 && isdigit(ch))
			{
				number_flag = 1;
				num_cnt++;

				if (word_flag == 1)
				{
					word_flag = 0;
					word_cnt--;
				}
			}
		}
	}


	printf("단어 수  %d\n", word_cnt);
	printf("대문자 수  %d\n", up_cnt);
	printf("소문자 수  %d\n", low_cnt);
	printf("구두점 수  %d\n", punc_cnt);
	printf("숫자 수  %d\n", num_cnt);
}