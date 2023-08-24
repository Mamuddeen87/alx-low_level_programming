#include “main.h”
/**
 * Cap_string – capitalize each/first char of a word
 * 
 * @str: the string input
 *
 * Return: str which is the modified string
 */
char *cap_string(char *str)
{
	int i, j;
	char c[] = {44, 59, 46, ‘!’, ‘?’, ‘”’, ‘(‘, ‘)’, ‘\{‘, ‘\}’, ‘ ‘, ‘\t’, ‘\n’};

	for (i = 0; str[i] != ‘\0’; i++)
	{
		If (i == 0 && str[i] >= ‘a’ && str[i] <= ‘z’)
		{
			str[i] = str[i] – 32;
		}
		For (j = 0; c[j]  != ‘\0’; j++)
		{
			If (c[j] == str[i] && (str[i + 1] >= ‘a’ && str[i + 1] <= ‘z’))
			{
				str[i + 1] = str[i +1] – 32;
			}
		}
	}
	return (str);
}
