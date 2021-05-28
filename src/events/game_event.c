/*
** EPITECH PROJECT, 2021
** game_event
** File description:
** game_event
*/

#include "my_defender.h"
#include "my_struct.h"

void game_event(all_t *all, sfEvent event)
{
    if (event.type == sfEvtKeyPressed && event.key.code == sfKeyEscape)
        all->scene = RESUME_MENU;
    if (is_map_clicked(event) && !is_icone_clicked(all, event) &&
    (all->game->icone_state == 1)) {
        all->game->icone_state = 0;
    }
    if (are_boxes_clicked(all, event)) {
        all->game->icone_pos.x = event.mouseButton.x;
        all->game->icone_pos.y = event.mouseButton.y;
        all->game->icone_state = 1;
    }
    if (all->game->icone_state == 1) {
        if (is_icone_clicked(all, event) > 0) {
            all->game->icone_state = 0;
            all->game->tower_state = 1;
        }   
    }
}
