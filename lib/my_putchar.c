/*
** EPITECH PROJECT, 2021
** MY_PUTCHAR.C
** File description:
** MY_PUTCHAR function.
*/

#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
