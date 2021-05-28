/*
** EPITECH PROJECT, 2020
** B-MUL-200-NAN-2-1-mydefender-simon.le-fourn
** File description:
** init_game.c
*/

#include "my_defender.h"
#include "my_struct.h"

game_t *init_game(void)
{
    game_t *game = malloc(sizeof(*game));

    if (!game)
        return (NULL);
    set_bg(game);
    set_tower_icone(game);
    set_enemy(game);
    set_tower(game);
    game->icone_state = 0;
    game->tower_state = 0;
    game->box_clicked = 12;
    game->status = 0;
    game->icone_pos.x = 0;
    game->icone_pos.y = 0;
    return (game);
}

void set_bg(game_t *game)
{
    game->tex_gamebg = sfTexture_createFromFile("assets/map/game/game_bg.png" \
    , NULL);
    game->sp_gamebg = sfSprite_create();
    game->boxes_pos = init_boxes_pos();
    sfSprite_setTexture(game->sp_gamebg, game->tex_gamebg, sfTrue);
}

void set_tower_icone(game_t *game)
{
    game->tex_icone = sfTexture_createFromFile("assets/map/game/icones.png"\
    , NULL);
    game->sp_icone = sfSprite_create();
    sfSprite_setTexture(game->sp_icone, game->tex_icone, sfTrue);
}

void set_tower(game_t *game)
{
    game->tex_twr = malloc(sizeof(sfTexture *) * 4);
    game->sp_twr = malloc(sizeof(sfSprite *) * 4);
    if (!game->tex_twr || !game->sp_twr)
        return ;
    for (int i = 0; i < 4; i++)
        game->sp_twr[i] = sfSprite_create();
    game->tex_twr[0] = sfTexture_createFromFile( \
    "assets/towers/fire_twr.png", NULL);
    game->tex_twr[1] = sfTexture_createFromFile( \
    "assets/towers/freeze_twr.png", NULL);
    game->tex_twr[2] = sfTexture_createFromFile( \
    "assets/towers/arcane_twr.png", NULL);
    game->tex_twr[3] = sfTexture_createFromFile( \
    "assets/towers/zap_twr.png", NULL);
    sfSprite_setTexture(game->sp_twr[0], game->tex_twr[0], sfTrue);
    sfSprite_setTexture(game->sp_twr[1], game->tex_twr[1], sfTrue);
    sfSprite_setTexture(game->sp_twr[2], game->tex_twr[2], sfTrue);
    sfSprite_setTexture(game->sp_twr[3], game->tex_twr[3], sfTrue);
}

void set_enemy(game_t *game)
{
    game->enemy_pos.x = 10;
    game->enemy_pos.y = 350;
    game->rect_enemy.width = 72;
    game->rect_enemy.height = 70;
    game->rect_enemy.left = 0;
    game->rect_enemy.top = 0;
    game->tex_enemy = sfTexture_createFromFile(\
    "assets/enemies/enemy.png", NULL);
    game->sp_enemy = sfSprite_create();
    sfSprite_setTexture(game->sp_enemy, game->tex_enemy, sfTrue);
}
