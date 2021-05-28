/*
** EPITECH PROJECT, 2021
** init_boxes_pos
** File description:
** init_boxes_pos
*/

#include "my_defender.h"
#include "my_struct.h"

int **init_2d_tab(void)
{
    int i = 0;
    int **pos = malloc(sizeof(int *) * 10);

    if (!pos)
        return (NULL);
    while (i < 10) {
        pos[i] = malloc (sizeof(int) * 3);
        if (!pos[i])
            return (NULL);
        i++;
    }
    return (pos);
}

int **init_boxes_pos(void)
{
    int **pos = init_2d_tab();

    pos[0][0] = 441;
    pos[0][1] = 145;
    pos[0][2] = 0;
    pos[1][0] = 257;
    pos[1][1] = 217;
    pos[1][2] = 0;
    pos[2][0] = 659;
    pos[2][1] = 212;
    pos[2][2] = 0;
    pos[3][0] = 771;
    pos[3][1] = 215;
    pos[3][2] = 0;
    pos[4][0] = 230;
    pos[4][1] = 353;
    pos[4][2] = 0;
    pos = init_boxes_pos_2(pos);
    return (pos);
}

int **init_boxes_pos_2(int **pos)
{
    pos[5][0] = 462;
    pos[5][1] = 360;
    pos[5][2] = 0;
    pos[6][0] = 558;
    pos[6][1] = 360;
    pos[6][2] = 0;
    pos[7][0] = 733;
    pos[7][1] = 423;
    pos[7][2] = 0;
    pos[8][0] = 368;
    pos[8][1] = 501;
    pos[8][2] = 0;
    pos[9][0] = 652;
    pos[9][1] = 501;
    pos[9][2] = 0;
    return (pos);
}
