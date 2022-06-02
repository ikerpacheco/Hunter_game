/*
** EPITECH PROJECT, 2021
** reset position
** File description:
** reset_position
*/

#include "../include/my_hunter.h"

sfVector2f reset_position(sfSprite *duck_s, t_game *game,
                            sfRenderWindow *window)
{
    sfVector2f position = sfSprite_getPosition(duck_s);

    if (position.x >= 2000) {
        position.x = -150;
        position.y = (rand() % (900 - 0 + 1) + 0);
        game->duck->counter = analyse_duck_pos(window,
        game->duck->sprite, game);
    }
    return position;
}