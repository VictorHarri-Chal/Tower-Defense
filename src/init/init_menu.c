/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** init_menu.c
*/

#include "my_defender.h"
#include "my_struct.h"

menu_t *init_menu(void)
{
    menu_t *menu = malloc(sizeof(*menu));

    if (!menu)
        return (NULL);
    set_menu_bg(menu);
    set_play_btn(menu);
    set_htp_btn(menu);
    set_quit_btn(menu);
    menu->play_btn = init_button(360, 150, 354, 142);
    menu->htp_btn = init_button(360, 300, 354, 142);
    menu->quit_btn = init_button(360, 450, 354, 142);
    return (menu);
}

void set_menu_bg(menu_t *menu)
{
    menu->tex_menubg = \
    sfTexture_createFromFile("assets/map/menu/menu_bg.png", NULL);
    menu->sp_menubg = sfSprite_create();
    sfSprite_setTexture(menu->sp_menubg, menu->tex_menubg, sfTrue);
}

void set_play_btn(menu_t *menu)
{
    menu->tex_play =  \
    sfTexture_createFromFile("assets/map/menu/button_play.png", NULL);
    menu->sp_play = sfSprite_create();
    sfSprite_setTexture(menu->sp_play, menu->tex_play, sfTrue);
    menu->play_pos.x = 360;
    menu->play_pos.y = 150;
}

void set_htp_btn(menu_t *menu)
{
    menu->tex_htp = \
    sfTexture_createFromFile("assets/map/menu/button_htp.png", NULL);
    menu->sp_htp = sfSprite_create();
    sfSprite_setTexture(menu->sp_htp, menu->tex_htp, sfTrue);
    menu->htp_pos.x = 360;
    menu->htp_pos.y = 300;
}

void set_quit_btn(menu_t *menu)
{
    menu->tex_quit = \
    sfTexture_createFromFile("assets/map/menu/button_quit.png", NULL);
    menu->sp_quit = sfSprite_create();
    sfSprite_setTexture(menu->sp_quit, menu->tex_quit, sfTrue);
    menu->quit_pos.x = 360;
    menu->quit_pos.y = 450;

}
