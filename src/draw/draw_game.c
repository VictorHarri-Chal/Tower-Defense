/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** draw_game.c
*/

#include "my_defender.h"
#include "my_struct.h"

void draw_game(all_t *all)
{
    sfRenderWindow_clear(all->basics->window, sfTransparent);
    sfRenderWindow_drawSprite(all->basics->window, all->game->sp_gamebg, NULL);
    sfSprite_setPosition(all->game->sp_enemy, all->game->enemy_pos);
    sfRenderWindow_drawSprite(all->basics->window, all->game->sp_enemy, NULL);
    if (all->game->icone_state == 1) {
        sfSprite_setPosition(all->game->sp_icone, all->game->icone_pos);
        sfRenderWindow_drawSprite(all->basics->window, \
        all->game->sp_icone, NULL);
    }
    if ((all->game->tower_state == 1)) {
        draw_tower(all);
    }
    sfRenderWindow_display(all->basics->window);
}
