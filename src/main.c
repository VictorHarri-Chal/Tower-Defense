/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** main.c
*/

#include "my_defender.h"
#include "my_struct.h"

int main(int ac, char **av)
{
    (void) av;
    if (ac != 1)
        return (84);
    return (my_defender());
}
