/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** init_basics.c
*/

#include "my_defender.h"
#include "my_struct.h"

sfRenderWindow *init_window(basics_t *basics)
{
    sfVideoMode mode = {1080, 720, 16};

    basics->window = sfRenderWindow_create(mode, "My_Defender", \
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(basics->window, 60);
    return (basics->window);
}

basics_t *init_basics(void)
{
    basics_t *basics = malloc(sizeof(*basics));

    if (!basics)
        return (NULL);
    basics->window = init_window(basics);
    basics->music = sfMusic_createFromFile("assets/songs/main_theme.ogg");
    basics->btn_msc = sfMusic_createFromFile("assets/songs/button_sound.ogg");
    basics->clock = sfClock_create();
    sfMusic_setLoop(basics->music, sfTrue);
    return (basics);
}
