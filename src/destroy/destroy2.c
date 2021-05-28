/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** destroy2.c
*/

#include "my_defender.h"
#include "my_struct.h"

void destroy_htp(htp_t *htp)
{
    sfTexture_destroy(htp->tex_quit);
    sfTexture_destroy(htp->tex_htpbg);
    sfSprite_destroy(htp->sp_quit);
    sfSprite_destroy(htp->sp_htpbg);
    free(htp->quit_btn);
    free(htp);
}
