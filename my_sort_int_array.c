/*
** EPITECH PROJECT, 2018
** my_sort_int_array
** File description:
** Sorts an integer array in ascending order
*/

void my_swap(int *a, int *b);

void my_sort_int_array(int *array, int size)
{
    int check_size = 0;
    int nb = 0;

    while (check_size < size)
    {
        nb = 0;

        while (nb < (size - 1))
        {
            if (array[nb] > array[nb + 1])
            {
                my_swap(&array[nb], &array[nb + 1]);
            }
            nb++;
        }
        check_size++;
    }
}
