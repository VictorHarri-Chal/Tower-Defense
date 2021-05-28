/*
** EPITECH PROJECT, 2021
** resume_menu_event
** File description:
** resume_menu_event
*/

#include "my_defender.h"
#include "my_struct.h"

void resume_menu_event(all_t *all, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed)
        analyse_mouse_event_resume_menu(all, event);
}

void analyse_mouse_event_resume_menu(all_t *all, sfEvent event)
{
    if (is_btn_clicked(event.mouseButton, all->res_menu->res_btn))
        all->scene = GAME;
    if (is_btn_clicked(event.mouseButton, all->res_menu->start_btn)) {
        reset(all);
        all->scene = MENU;
    }
    if (is_btn_clicked(event.mouseButton, all->res_menu->quit_btn)) {
        sfRenderWindow_close(all->basics->window);
        all->scene = END;
    }
    music_btn_event(all, event);
}

void music_btn_event(all_t *all, sfEvent event)
{
    if (is_btn_clicked(event.mouseButton, all->res_menu->sound_btn)) {
        switch (all->res_menu->music_state) {
        case (1) :
            sfMusic_pause(all->basics->music);
            all->res_menu->music_state = 0;
            break;
        case (0):
            sfMusic_play(all->basics->music);
            sfMusic_setLoop(all->basics->music, sfTrue);
            all->res_menu->music_state = 1;
            break;
        }
    }
}

void reset(all_t *all)
{
    all->game->icone_state = 0;
}
