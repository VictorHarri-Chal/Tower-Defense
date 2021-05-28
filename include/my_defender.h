/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** my_defender.h
*/

#ifndef _MY_DEFENDER_H_
#define _MY_DEFENDER_H_

#include "my_struct.h"
#include <SFML/Window.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>


            //INIT

//init_all_struct
all_t *init_all_struct(void);

//init_basics
sfRenderWindow *init_window(basics_t *basics);
basics_t *init_basics(void);

//init_button
button_t *init_button(int x, int y, int width, int height);

//init_game
game_t *init_game(void);
void set_bg(game_t *game);
void set_enemy(game_t *game);
void set_boxes(game_t *game);
void set_tower_icone(game_t *game);
void set_tower(game_t *game);
//init_boxes_pos
int **init_2d_tab(void);
int **init_boxes_pos(void);
int **init_boxes_pos_2(int **pos);

//init_menu
menu_t *init_menu(void);
void set_menu_bg(menu_t *menu);
void set_play_btn(menu_t *menu);
void set_quit_btn(menu_t *menu);
void set_htp_btn(menu_t *menu);

//init_resume_menu
res_menu_t *init_resume_menu(void);
void set_res_menu_bg(res_menu_t *res_menu);
void set_resume_btn(res_menu_t *res_menu);
void set_menu_btn(res_menu_t *res_menu);
void set_quit_btn2(res_menu_t *res_menu);

//init_resume_menu2
void set_soundon_btn(res_menu_t *res_menu);
void set_soundoff_btn(res_menu_t *res_menu);

//init_how_to_play
htp_t *init_how_to_play(void);
void set_htpbg(htp_t *htp);
void set_htp_quit_btn(htp_t *htp);

//init_tower_pos
twr_pos_t *init_twr_pos(void);
void init_twr_pos2(twr_pos_t *twr_pos);

            //EVENTS

//analyse_event
bool is_btn_clicked(sfMouseButtonEvent event, button_t *button);
void analyse_event(all_t *all);

//game_event
void game_event(all_t *all, sfEvent event);

//is_clicked
bool are_boxes_clicked(all_t *all, sfEvent event);
bool is_boxes_clicked(all_t *all, sfEvent event, int x, int y);
bool is_map_clicked(sfEvent event);
int which_box_is_clicked(all_t *all);

//is_icone_clicked
int is_icone_clicked(all_t *all, sfEvent event);
int is_icone_clicked2(all_t *all, sfEvent event);

//menu_event
void menu_event(all_t *all, sfEvent event);
void analyse_mouse_event_menu(all_t *all, sfEvent event);

// resume_menu_event
void resume_menu_event(all_t *all, sfEvent event);
void analyse_mouse_event_resume_menu(all_t *all, sfEvent event);
void music_btn_event(all_t *all, sfEvent event);
void reset(all_t *all);

//htp_event
void htp_event(all_t *all, sfEvent event);
void analyse_mouse_event_htp(all_t *all, sfEvent event);

            //DRAW

//draw_game
void draw_game(all_t *all);

//menu
void draw_menu(all_t *all);

//draw_resume_menu
void draw_resume_menu(all_t *all);

//draw_htp
void draw_htp(all_t *all);

//draw_tower
void draw_tower(all_t *all);
void draw_tower2(all_t *all);
void draw_tower3(all_t *all);
void draw_tower4(all_t *all);

//update_ennemies
void update_ennemies(all_t *all);
int ennemy_road(all_t *all);
int ennemy_road2(all_t *all);
int ennemy_road3(all_t *all);
int ennemy_road4(all_t *all);

            //OTHER

//destroy
void destroy_all(all_t *all);
void destroy_menu(menu_t *menu);
void destroy_resume_menu(res_menu_t *res_menu);
void destroy_game(game_t *game);
void destroy_basics(basics_t *basics);

//destroy2
void destroy_htp(htp_t *htp);

//loop
void loop(all_t *all);

//my_defender
int my_defender();

//tools
sfVector2f init_vector(float width, float height);
void move_rect(sfIntRect *rect, int offset, int max_value);

#endif
