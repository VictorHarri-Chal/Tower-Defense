/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** update_ennemies.c
*/

#include "my_defender.h"
#include "my_struct.h"

void update_ennemies(all_t *all)
{
    sfTime time = sfClock_getElapsedTime(all->basics->clock);
    float seconds = time.microseconds / 1000000.0;

    if (seconds > 0.001) {
        move_rect(&all->game->rect_enemy, 72, 1008);
        all->game->status = ennemy_road(all);
        sfSprite_setTextureRect(all->game->sp_enemy, all->game->rect_enemy);
        sfClock_restart(all->basics->clock);
    }
}

int ennemy_road(all_t *all)
{
    if (all->game->status == 0) {
        all->game->enemy_pos.x += 1;
        if (all->game->enemy_pos.x >= 145) {
            all->game->status = 1;
            return (1);
        }
        return (0);
    }
    if (all->game->status == 1) {
        all->game->enemy_pos.y -= 1;
        if (all->game->enemy_pos.y <= 145) {
            all->game->status = 2;
            return (2);
        }
        return (1);
    }
    return (ennemy_road2(all));
}

int ennemy_road2(all_t *all)
{
    if (all->game->status == 2) {
        all->game->enemy_pos.x += 1;
        if (all->game->enemy_pos.x >= 365) {
            all->game->status = 3;
            return (3);
        }
        return (2);
    }
    if (all->game->status == 3) {
        all->game->enemy_pos.y += 1;
        if (all->game->enemy_pos.y >= 415) {
            all->game->status = 4;
            return (4);
        }
        return (3);
    }
    return (ennemy_road3(all));
}

int ennemy_road3(all_t *all)
{
    if (all->game->status == 4) {
        all->game->enemy_pos.x += 1;
        if (all->game->enemy_pos.x >= 640) {
            all->game->status = 5;
            return (5);
        }
        return (4);
    }
    if (all->game->status == 5) {
        all->game->enemy_pos.y -= 1;
        if (all->game->enemy_pos.y <= 275) {
            all->game->status = 6;
            return (6);
        }
        return (5);
    }
    return (ennemy_road4(all));
}

int ennemy_road4(all_t *all)
{
    if (all->game->status == 6) {
        all->game->enemy_pos.x += 1;
        return (6);
    }
    return (84);
}
