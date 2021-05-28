/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** init_all_struct.c
*/

#include "my_defender.h"
#include "my_struct.h"

all_t *init_all_struct(void)
{
    all_t *all = malloc(sizeof(*all));

    if (!all)
        return (NULL);
    all->scene = MENU;
    all->basics = init_basics();
    all->menu = init_menu();
    all->res_menu = init_resume_menu();
    all->game = init_game();
    all->htp = init_how_to_play();
    all->twr_pos = init_twr_pos();
    return (all);
}
