/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** my_struct.h
*/

#ifndef _MY_STRUCT_H_
#define _MY_STRUCT_H_

#include "my_defender.h"
#include <SFML/Window.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>


typedef enum scene
{
    MENU,
    RESUME_MENU,
    GAME,
    END,
    HTP,
} scene_t;

typedef struct button
{
    sfRectangleShape *rect;
    sfVector2f *position;
    sfVector2f *size;
} button_t;

typedef struct basics
{
    sfRenderWindow *window;
    sfMusic *music;
    sfMusic *btn_msc;
    sfClock *clock;

} basics_t;

typedef struct menu
{
    sfTexture *tex_menubg;
    sfSprite *sp_menubg;
    sfVector2f play_pos;
    sfTexture *tex_play;
    sfSprite *sp_play;
    sfVector2f htp_pos;
    sfTexture *tex_htp;
    sfSprite *sp_htp;
    sfVector2f quit_pos;
    sfTexture *tex_quit;
    sfSprite *sp_quit;
    button_t *play_btn;
    button_t *htp_btn;
    button_t *quit_btn;
} menu_t;

typedef struct htp
{
    sfTexture *tex_htpbg;
    sfSprite *sp_htpbg;
    sfTexture *tex_quit;
    sfSprite *sp_quit;
    sfVector2f quit_pos;
    button_t *quit_btn;
} htp_t;

typedef struct twr_pos
{
    sfVector2f twr0_pos;
    sfVector2f twr1_pos;
    sfVector2f twr2_pos;
    sfVector2f twr3_pos;
    sfVector2f twr4_pos;
    sfVector2f twr5_pos;
    sfVector2f twr6_pos;
    sfVector2f twr7_pos;
    sfVector2f twr8_pos;
    sfVector2f twr9_pos;
} twr_pos_t;

typedef struct game
{
    sfTexture *tex_gamebg;
    sfSprite *sp_gamebg;
    sfTexture *tex_enemy;
    sfSprite *sp_enemy;
    sfIntRect rect_enemy;
    sfVector2f enemy_pos;
    sfTexture *tex_icone;
    sfSprite *sp_icone;
    sfVector2f icone_pos;
    sfTexture **tex_twr;
    sfSprite **sp_twr;
    int **boxes_pos;
    int icone_state;
    int tower_state;
    sfVector2f box_pos;
    int box_clicked;
    int tower_clicked;
    int status;
} game_t;

typedef struct res_menu
{
    sfTexture *tex_resbg;
    sfSprite *sp_resbg;
    sfTexture *tex_res;
    sfSprite *sp_res;
    sfVector2f res_pos;
    sfTexture *tex_menu;
    sfSprite *sp_menu;
    sfVector2f menu_pos;
    sfTexture *tex_quit;
    sfSprite *sp_quit;
    sfVector2f quit_pos;
    sfTexture *tex_soundon;
    sfSprite *sp_soundon;
    sfTexture *tex_soundoff;
    sfSprite *sp_soundoff;
    sfVector2f sound_pos;
    int music_state;
    button_t *res_btn;
    button_t *start_btn;
    button_t *quit_btn;
    button_t *sound_btn;
} res_menu_t;

typedef struct all
{
    scene_t scene;
    basics_t *basics;
    menu_t *menu;
    res_menu_t *res_menu;
    game_t *game;
    twr_pos_t *twr_pos;
    htp_t *htp;
} all_t ;

#endif
