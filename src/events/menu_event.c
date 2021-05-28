/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** menu_event.c
*/

#include "my_defender.h"
#include "my_struct.h"

void menu_event(all_t *all, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed)
        analyse_mouse_event_menu(all, event);
}

void analyse_mouse_event_menu(all_t *all, sfEvent event)
{
    if (is_btn_clicked(event.mouseButton, all->menu->play_btn))
        all->scene = GAME;
    if (is_btn_clicked(event.mouseButton, all->menu->htp_btn))
        all->scene = HTP;
    if (is_btn_clicked(event.mouseButton, all->menu->quit_btn)) {
        sfRenderWindow_close(all->basics->window);
        all->scene = END;
    }
}
