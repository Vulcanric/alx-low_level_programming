#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to be encoded
 * Return: The encoded string 's'
 */
char *leet(char *s)
{
	int i;

	/* FOR LOOP to run through each character of the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* while the character is an alphabet */
		for (; (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'); i++)
		{
			if (s[i] == 'a' || s[i] == 'A') /* IF character is a/A*/
				s[i] = 4 + '0'; /* Change the value to 4 */
			else if (s[i] == 'e' || s[i] == 'E') /* ELSE IF character is e/E*/
				s[i] = 3 + '0'; /* Change the value to 3 */
			else if (s[i] == 'o' || s[i] == 'O') /* ELSE IF character is o/O*/
				s[i] = 0 + '0'; /* Change the value to 0 */
			else if (s[i] == 't' || s[i] == 'T') /* ELSE IF character is t/T*/
				s[i] = 7 + '0'; /* Change the value to 7 */
			else if (s[i] == 'l' || s[i] == 'L') /* ELSE IF character is l/L*/
				s[i] = 1 + '0'; /* Change the value to 1 */
		}
	}
	return (s); /* return encoded string */
}
