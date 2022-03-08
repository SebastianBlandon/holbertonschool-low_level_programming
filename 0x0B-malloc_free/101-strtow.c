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
	int i, j, index = 0, size_word = 0, amount_word_str = 0;
	char **str1 = NULL;

	if (!str || *str == '\0')
		return (NULL);

	amount_word_str = _stramount_word(str);
	if (!amount_word_str)
		return (NULL);

	str1 = malloc((amount_word_str + 1) * sizeof(char *));
	if (!str1)
		return (NULL);

	for (i = 0; i < amount_word_str; i++)
	{
		while (str[index] == ' ')
			index++;

		size_word = _strlen_word(str);
		str1[i] = malloc((size_word + 1) * sizeof(char));
		if (str1[i] == NULL)
		{
			for (; i >= 0; i--)
				free(str1[i]);
			free(str1);
			return (NULL);
		}

		for (j = 0; j < size_word; j++)
			str1[i][j] = str[index++];
		str1[i][j] = '\0';
	}

	str1[i] = NULL;
	return (str1);
}
