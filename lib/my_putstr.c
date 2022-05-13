/*
** EPITECH PROJECT, 2021
** MY_PUTSTR.C
** File description:
** MY_PUTSTR function.
*/

#include "../include/my.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}
