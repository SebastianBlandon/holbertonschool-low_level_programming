#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - calculate the lengt of string
 * @s: pointer to char input
 * Return: len (Size s).
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
/**
 * _strlen_word - calculate the lengt of string
 * @s: pointer to char input
 * Return: len (Size s).
 */
int _strlen_word(char *s)
{
	int len = 0;

	while (*(s + len) != ' ')
		len++;

	return (len);
}
/**
 * _stramount_word - calculate the amount words of string
 * @s: pointer to char input
 * Return: amount words.
 */
int _stramount_word(char *s)
{
	int i = 0, len = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) != ' ' && *(s + i + 1) == ' ')
			len++;
		i++;
	}

	return (len);
}
/**
 * **strtow - splits a string into words.
 *  Each element of this array should contain a single word, null-terminated
 *  The last element of the returned array should be NULL
 *  Words are separated by spaces
 * @str: pointer char input
 * Return: NULL if str == NULL or str == ""
 *  returns a pointer to an array of strings (words)
 *  If your function fails, it should return NULL
 */
char **strtow(char *str)
{
	int i, j, size = 0, size_word = 0, amount_word = 0, amount_word_str = 0;
	char **str1;

	if (!str || *str == '\0')
		return (NULL);

	amount_word_str = _stramount_word(str);
	printf("%d\n", amount_word_str);
	str1 = malloc((amount_word_str + 1) * sizeof(char *));
	if (!str1)
	{
		free(str1);
		return (NULL);
	}

	size = _strlen(str);
	for (i = 0; i < size; i++)
	{
		if (*str != ' ')
		{
			size_word = _strlen_word(str);
			printf("%d\n", size_word);
			str1[amount_word] = malloc((size_word + 1) * sizeof(char));
			if (str1[amount_word] == NULL)
			{
				for (amount_word--; amount_word >= 0; amount_word--)
					free(str1[amount_word]);
				free(str1);
				return (NULL);
			}

			for (j = 0; j < size_word; j++, i++)
			{
				str1[amount_word][j] = (*str);
				printf("*str : %c\n", *str);
				printf("str1[%d][%d] : %c\n", amount_word, j, *str);
				str++;
			}
			str1[amount_word][j] = '\0';
			amount_word++;
			if (amount_word == amount_word_str)
				break;
		}
		str++;
	}
	if (!amount_word)
		return (NULL);

	printf("str1[0] : %s\n", str1[0]);
	return (str1);
}
