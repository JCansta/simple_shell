#include "holberton.h"

/**
 * _strncmp - string compare
 * @s1: String compare 1
 * @s2: String compare 2
 * @n: bites
 * Return: 0 or diference.
 */

int _strncmp(char *s1, char *s2, size_t n)
{
<<<<<<< HEAD
	size_t counter;

	for (counter = 0; counter < n && s1[counter] != '\0'; counter++)
	{
		if (s1[counter] != s2[counter])
		{
			return (s1[counter] - s2[counter]);
		}
	}

	return (0);
=======

    size_t counter;

    for (counter = 0; counter < n && s1[counter] != '\0'; counter++)
    {
        if (s1[counter] != s2[counter])
        {
            return (s1[counter] - s2[counter]);
        }

    }

    return (0);
>>>>>>> 3e4b1749b3d5848499f490a1b0deed3152cad746
}

/**
 * _strncmp - string compare
 * @s1: String compare 1
 * @s2: String compare 2
 * @n: bites
 * Return: 0 or diference.
 */

int _strncmp(char *s1, char *s2, size_t n)
{
<<<<<<< HEAD
	size_t counter;

	for (counter = 0; counter < n && s1[counter] != '\0'; counter++)
	{
		if (s1[counter] != s2[counter])
		{
			return (s1[counter] - s2[counter]);
		}
	}

	return (0);
=======

    size_t counter;

    for (counter = 0; counter < n && s1[counter] != '\0'; counter++)
    {
        if (s1[counter] != s2[counter])
        {
            return (s1[counter] - s2[counter]);
        }

    }

    return (0);
>>>>>>> 3e4b1749b3d5848499f490a1b0deed3152cad746
}

/**
 * _strcmp - string compare
 * @s1: String compare 1
 * @s2: String compare 2
 *
 * Return: 0 or diference.
 */

int _strcmp(char *s1, char *s2)
{
<<<<<<< HEAD
	int counter;

	for (counter = 0; s1[counter] != '\0'; counter++)
	{
		if (s1[counter] != s2[counter])
		{
			return (s1[counter] - s2[counter]);
		}
	}

	return (0);
=======

    int counter;

    for (counter = 0; s1[counter] != '\0'; counter++)
    {
        if (s1[counter] != s2[counter])
        {
            return (s1[counter] - s2[counter]);
        }

    }

    return (0);
>>>>>>> 3e4b1749b3d5848499f490a1b0deed3152cad746
}

/**
 * *_strcpy - copy a string.
 * @dest:string that recive the value of the other one.
 * @src:source string with the info
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
<<<<<<< HEAD
	int count;

	for (count = 0; src[count] != '\0'; count++)
		dest[count] = src[count];

	dest[count] = '\0';

	return (dest);
=======

    int count;


    for (count = 0; src[count] != '\0'; count++)

    dest[count] = src[count];


    dest[count] = '\0';

    return (dest);
>>>>>>> 3e4b1749b3d5848499f490a1b0deed3152cad746
}

/**
 * _strlen - calculates the length of the string.
 * @s:pointer variable.
 * Return: Always 0.
 */

int _strlen(char *s)
{
<<<<<<< HEAD
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	return (a);
=======
    int a;

    for (a = 0; s[a] != '\0'; a++)
    {
    }
    return (a);


>>>>>>> 3e4b1749b3d5848499f490a1b0deed3152cad746
}
