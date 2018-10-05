/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** Show all integrers in char
*/

int is_valid_int(long nb)
{
    if(nb > 2147483647 || nb <= -2147483648)
        return (0);

    else
        return (nb);
    //return ((nb > 2147483647 || nb < -2147483648) ? 1 : 0);
}

int my_getnbr(char const *str)
{
    long nb = 0;
    int specialchar = 1;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            if (str[i - 1] == '-')
                specialchar = -1;
            if (str[i] >= '0' && str[i] <= '9')
                nb = ((nb * 10) + (str[i] - '0'));
            if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
                return (is_valid_int(nb * specialchar));
                //return (nb > 2147483647 || nb < -2147483648 ? 0 : (nb * specialchar));
        }
    }
    return (is_valid_int(nb * specialchar));
    //return ((nb > 2147483647 || nb < -2147483648) ? 0 : (nb * specialchar));
}

void main()
{
    printf("%d\n", my_getnbr("-2147483647"));
    printf("%d\n", my_getnbr("-50"));
}
