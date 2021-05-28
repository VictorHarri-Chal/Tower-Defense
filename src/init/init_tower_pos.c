/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** init_tower_pos.c
*/

#include "my_defender.h"
#include "my_struct.h"

twr_pos_t *init_twr_pos(void)
{
    twr_pos_t *twr_pos = malloc(sizeof(*twr_pos));

    if (!twr_pos)
        return (NULL);
    twr_pos->twr0_pos.x = 432;
    twr_pos->twr0_pos.y = 75;
    twr_pos->twr1_pos.x = 250;
    twr_pos->twr1_pos.y = 150;
    twr_pos->twr2_pos.x = 652;
    twr_pos->twr2_pos.y = 150;
    twr_pos->twr3_pos.x = 761;
    twr_pos->twr3_pos.y = 150;
    twr_pos->twr4_pos.x = 220;
    twr_pos->twr4_pos.y = 285;
    twr_pos->twr5_pos.x = 448;
    twr_pos->twr5_pos.y = 295;
    twr_pos->twr6_pos.x = 549;
    twr_pos->twr6_pos.y = 295;
    init_twr_pos2(twr_pos);
    return (twr_pos);
}

void init_twr_pos2(twr_pos_t *twr_pos)
{
    twr_pos->twr7_pos.x = 726;
    twr_pos->twr7_pos.y = 364;
    twr_pos->twr8_pos.x = 359;
    twr_pos->twr8_pos.y = 440;
    twr_pos->twr9_pos.x = 645;
    twr_pos->twr9_pos.y = 440;
}

