/*
** EPITECH PROJECT, 2021
** PRINT.C
** File description:
** PRINT.C file.
*/

#include "../include/my.h"
#include "../include/prototypes.h"

void print_result(char *arr)
{
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == 'p') {
            my_putstr("pb ");
        } else if (arr[i] == 'r') {
            my_putstr("ra ");
        }
    }
}
