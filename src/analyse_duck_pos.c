/*
** EPITECH PROJECT, 2021
** analyse duck pos
** File description:
** analyse_duck_pos
*/

#include "../include/my_hunter.h"

int analyse_duck_pos(sfRenderWindow *window, sfSprite *duck_s, t_game *game)
{
    sfVector2f pos_duck = sfSprite_getPosition(duck_s);
    sfTexture *empty_heart = sfTexture_createFromFile("media/images/heart2.png",
    NULL);

    if (pos_duck.x > 1920 && game->duck->counter == 2) {
        sfSprite_setTexture(game->heart->sprite, empty_heart, sfTrue);
        sfRenderWindow_drawSprite(window, game->heart->sprite, NULL);
        sfRenderWindow_close(window);
    }
    if (pos_duck.x > 1920 && game->duck->counter == 1) {
        sfSprite_setTexture(game->heart_two->sprite, empty_heart, sfTrue);
        sfRenderWindow_drawSprite(window, game->heart_two->sprite, NULL);
        game->duck->counter = 2;
    }
    if (pos_duck.x > 1920 && game->duck->counter == 0) {
        sfSprite_setTexture(game->heart_three->sprite, empty_heart, sfTrue);
        sfRenderWindow_drawSprite(window, game->heart_three->sprite, NULL);
        game->duck->counter = 1;
    }
    return game->duck->counter;
}