/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** my_defender.c
*/

#include "my_defender.h"
#include "my_struct.h"

int my_defender(void)
{
    all_t *all = all = init_all_struct();

    sfMusic_play(all->basics->music);
    loop(all);
    return (0);
}
