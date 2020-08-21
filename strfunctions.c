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

    size_t counter;

    for (counter = 0; counter < n && s1[counter] != '\0'; counter++)
    {
        if (s1[counter] != s2[counter])
        {
            return (s1[counter] - s2[counter]);
        }

    }

    return (0);
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

    size_t counter;

    for (counter = 0; counter < n && s1[counter] != '\0'; counter++)
    {
        if (s1[counter] != s2[counter])
        {
            return (s1[counter] - s2[counter]);
        }

    }

    return (0);
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

    int counter;

    for (counter = 0; s1[counter] != '\0'; counter++)
    {
        if (s1[counter] != s2[counter])
        {
            return (s1[counter] - s2[counter]);
        }

    }

    return (0);
}
