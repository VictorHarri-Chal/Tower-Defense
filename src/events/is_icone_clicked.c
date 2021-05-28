/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** is_icone_clicked.c
*/

#include "my_defender.h"
#include "my_struct.h"

int is_icone_clicked(all_t *all, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed) {
        if ((event.mouseButton.x > all->game->icone_pos.x && \
        event.mouseButton.x < all->game->icone_pos.x + 80) && \
        (event.mouseButton.y > all->game->icone_pos.y && \
        event.mouseButton.y < all->game->icone_pos.y + 80)) {
            all->game->box_clicked = which_box_is_clicked(all);
            all->game->boxes_pos[all->game->box_clicked][2] = 1;
            return (1);
        }
        if ((event.mouseButton.x > all->game->icone_pos.x + 80 && \
        event.mouseButton.x < all->game->icone_pos.x + 160) && \
        (event.mouseButton.y > all->game->icone_pos.y && \
        event.mouseButton.y < all->game->icone_pos.y + 80)) {
            all->game->box_clicked = which_box_is_clicked(all);
            all->game->boxes_pos[all->game->box_clicked][2] = 2;
            return (2);
        }
        return (is_icone_clicked2(all, event));
    }
    return (0);
}

int is_icone_clicked2(all_t *all, sfEvent event)
{
    if ((event.mouseButton.x > all->game->icone_pos.x && \
        event.mouseButton.x < all->game->icone_pos.x + 80) && \
        (event.mouseButton.y > all->game->icone_pos.y + 80 && \
        event.mouseButton.y < all->game->icone_pos.y + 160)) {
            all->game->box_clicked = which_box_is_clicked(all);
            all->game->boxes_pos[all->game->box_clicked][2] = 3;
            return (3);
    }
    if ((event.mouseButton.x > all->game->icone_pos.x + 80 && \
        event.mouseButton.x < all->game->icone_pos.x + 160) && \
        (event.mouseButton.y > all->game->icone_pos.y + 80 && \
        event.mouseButton.y < all->game->icone_pos.y + 160)) {
            all->game->box_clicked = which_box_is_clicked(all);
            all->game->boxes_pos[all->game->box_clicked][2] = 4;
            return (4);
    }
    return (0);
}

