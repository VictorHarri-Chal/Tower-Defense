/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** tools.c
*/

#include "my_defender.h"

sfVector2f init_vector(float width, float height)
{
    sfVector2f vector;

    vector.x = width;
    vector.y = height;
    return (vector);
}

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left >= max_value)
        rect->left = 0;
}
