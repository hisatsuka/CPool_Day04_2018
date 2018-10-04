/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** Show all integrers in char
*/

int my_strlen(char const * str);

int my_getnbr(char const *str)
{
    int nb = 0;
    int specialchar = 1;
    int countchar = 0;

    for(int i = 0; str[i]; i++)
    {
        /*if(str[i] == '-')
            (specialchar == 1) ? (specialchar = 0) : (specialchar = 1); */

        if(str[i] >= '0' && str[i] <= '9')
        {

            if(str[i - 1] == '-')
                specialchar = -1;

                //printf("%d", nb);
            if(nb >= 1000000000) return (0);

            if(str[i] >= '0' && str[i] <= '9')
                nb = ((nb * 10) + (str[i] - '0'));


            if(!(str[i + 1] >= '0' && str[i + 1] <= '9'))
                return (nb * specialchar);



        }
    }
    return (nb * specialchar);
}
