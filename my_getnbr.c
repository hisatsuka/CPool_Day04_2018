/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** Show all integrers in char
*/

int my_getnbr(char const *str)
{
    long nb = 0;
    int specialchar = 1;
    for(int i = 0; str[i]; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            if(str[i - 1] == '-')
                specialchar = -1;
            if(str[i] >= '0' && str[i] <= '9')
                nb = ((nb * 10) + (str[i] - '0'));
            if(!(str[i + 1] >= '0' && str[i + 1] <= '9'))
                return (nb > 2147483647 || nb < -2147483648 ? 0 : (nb * specialchar));
        }
    }
    return ((nb > 2147483647 || nb < -2147483648) ? 0 : (nb * specialchar));
}
