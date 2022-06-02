/*
** EPITECH PROJECT, 2021
** duck
** File description:
** duck
*/

#include "../include/my_hunter.h"

void ducks(t_game *game, sfVector2f reset, sfVector2f movement,
            sfRenderWindow *window)
{
    sfSprite_setTextureRect(game->duck->sprite, game->duck->rect);
    sfSprite_setPosition(game->duck->sprite, reset);
    sfRenderWindow_drawSprite(window, game->duck->sprite, NULL);
    sfSprite_move(game->duck->sprite, movement);
}