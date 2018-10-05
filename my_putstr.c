/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** Display one by one the characters of a string
*/

void my_putchar(char c);

int my_putstr(char const * str)
{
    int i = 0;

    while (str[i])
    {
        my_putchar(str[i]);
        i++;
    }
    return 1;
}
