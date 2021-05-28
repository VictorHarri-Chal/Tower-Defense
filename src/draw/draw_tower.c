/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** draw_tower.c
*/

#include "my_defender.h"
#include "my_struct.h"

void draw_tower(all_t *all)
{
    if (all->game->boxes_pos[0][2] > 0) {
        sfSprite_setPosition(all->game-> \
        sp_twr[all->game->boxes_pos[0][2] - 1], all->twr_pos->twr0_pos);
        sfRenderWindow_drawSprite(all->basics->window, \
        all->game->sp_twr[all->game->boxes_pos[0][2] - 1], NULL);
    }
    if (all->game->boxes_pos[1][2] > 0) {
        sfSprite_setPosition(all->game-> \
        sp_twr[all->game->boxes_pos[1][2] - 1], all->twr_pos->twr1_pos);
        sfRenderWindow_drawSprite(all->basics->window, \
        all->game->sp_twr[all->game->boxes_pos[1][2] - 1], NULL);
    }
    if (all->game->boxes_pos[2][2] > 0) {
        sfSprite_setPosition(all->game-> \
        sp_twr[all->game->boxes_pos[2][2] - 1], all->twr_pos->twr2_pos);
        sfRenderWindow_drawSprite(all->basics->window, \
        all->game->sp_twr[all->game->boxes_pos[2][2] - 1], NULL);
    }
    draw_tower2(all);
}

void draw_tower2(all_t *all)
{
    if (all->game->boxes_pos[3][2] > 0) {
        sfSprite_setPosition(all->game-> \
        sp_twr[all->game->boxes_pos[3][2] - 1], all->twr_pos->twr3_pos);
        sfRenderWindow_drawSprite(all->basics->window, \
        all->game->sp_twr[all->game->boxes_pos[3][2] - 1], NULL);
    }
    if (all->game->boxes_pos[4][2] > 0) {
        sfSprite_setPosition(all->game-> \
        sp_twr[all->game->boxes_pos[4][2] - 1], all->twr_pos->twr4_pos);
        sfRenderWindow_drawSprite(all->basics->window, \
        all->game->sp_twr[all->game->boxes_pos[4][2] - 1], NULL);
    }
    if (all->game->boxes_pos[5][2] > 0) {
        sfSprite_setPosition(all->game-> \
        sp_twr[all->game->boxes_pos[5][2] - 1], all->twr_pos->twr5_pos);
        sfRenderWindow_drawSprite(all->basics->window, \
        all->game->sp_twr[all->game->boxes_pos[5][2] - 1], NULL);
    }
    draw_tower3(all);
}

void draw_tower3(all_t *all)
{
    if (all->game->boxes_pos[6][2] > 0) {
        sfSprite_setPosition(all->game-> \
        sp_twr[all->game->boxes_pos[6][2] - 1], all->twr_pos->twr6_pos);
        sfRenderWindow_drawSprite(all->basics->window, \
        all->game->sp_twr[all->game->boxes_pos[6][2] - 1], NULL);
    }
    if (all->game->boxes_pos[7][2] > 0) {
        sfSprite_setPosition(all->game-> \
        sp_twr[all->game->boxes_pos[7][2] - 1], all->twr_pos->twr7_pos);
        sfRenderWindow_drawSprite(all->basics->window, \
        all->game->sp_twr[all->game->boxes_pos[7][2] - 1], NULL);
    }
    if (all->game->boxes_pos[8][2] > 0) {
        sfSprite_setPosition(all->game-> \
        sp_twr[all->game->boxes_pos[8][2] - 1], all->twr_pos->twr8_pos);
        sfRenderWindow_drawSprite(all->basics->window, \
        all->game->sp_twr[all->game->boxes_pos[8][2] - 1], NULL);
    }
    draw_tower4(all);
}

void draw_tower4(all_t *all)
{
    if (all->game->boxes_pos[9][2] > 0) {
        sfSprite_setPosition(all->game-> \
        sp_twr[all->game->boxes_pos[9][2] - 1], all->twr_pos->twr9_pos);
        sfRenderWindow_drawSprite(all->basics->window, \
        all->game->sp_twr[all->game->boxes_pos[9][2] - 1], NULL);
    }
}
