/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** menu.c
*/

#include "my_defender.h"
#include "my_struct.h"

void loop(all_t *all)
{
    while (sfRenderWindow_isOpen(all->basics->window)) {
        while (all->scene == MENU) {
            analyse_event(all);
            draw_menu(all);
        }
        while (all->scene == RESUME_MENU) {
            analyse_event(all);
            draw_resume_menu(all);
        }
        while (all->scene == GAME) {
            analyse_event(all);
            update_ennemies(all);
            draw_game(all);
        }
        while (all->scene == HTP) {
            analyse_event(all);
            draw_htp(all);
        }
    }
    destroy_all(all);
}
