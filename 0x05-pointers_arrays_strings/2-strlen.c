#include "holberton.h"
/**
 * _strlen - prints lenght of string
 * @s: character value.
 * Return: letters
 */
int _strlen(char *s)
{
        int letter;

        for (letter = 0; s[letter] != 0; letter++);
        return (letter);
}

