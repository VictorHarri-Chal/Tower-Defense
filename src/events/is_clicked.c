/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** is_clicked.c
*/

#include "my_defender.h"
#include "my_struct.h"

bool is_boxes_clicked(all_t *all, sfEvent event, int x, int y)
{
    int boxes_width = 70;
    int boxes_length = 70;

    if (event.type == sfEvtMouseButtonPressed) {
        if ((event.mouseButton.x > x && event.mouseButton.x < x + boxes_width)
            &&
        (event.mouseButton.y > y && event.mouseButton.y < y + boxes_length)) {
            all->game->box_pos.x = event.mouseButton.x - 40;
            all->game->box_pos.y = event.mouseButton.y - 120;
            return (true);
        }
    }
    return (false);
}

bool are_boxes_clicked(all_t *all, sfEvent event)
{
    int i = 0;
    int nb_of_boxes = 10;

    while (i < nb_of_boxes) {
        if ((is_boxes_clicked(all, event, all->game->boxes_pos[i][0], \
        all->game->boxes_pos[i][1])) && all->game->boxes_pos[i][2] == 0)
            return (true);
        i++;
    }
    return (false);
}

bool is_map_clicked(sfEvent event)
{
    int map_width = 1080;
    int map_length = 720;

    if (event.type == sfEvtMouseButtonPressed) {
        if ((event.mouseButton.x > 0 && event.mouseButton.x < map_width) && \
        (event.mouseButton.y > 0 && event.mouseButton.y < map_length))
            return (true);
    }
    return (false);
}

int which_box_is_clicked(all_t *all)
{
    int i = 0;

    while (i != 11) {
        if ((all->game->icone_pos.x > all->game->boxes_pos[i][0] && \
        all->game->icone_pos.x < all->game->boxes_pos[i][0] + 70) && \
        (all->game->icone_pos.y > all->game->boxes_pos[i][1] && \
        all->game->icone_pos.y < all->game->boxes_pos[i][1] + 70)) {
            return (i);
        }
        i++;
    }
    return (84);
}
