/*
** EPITECH PROJECT, 2021
** draw_sprites
** File description:
** draw_sprites
*/

#include "../include/my_hunter.h"

void draw_sprites(sfRenderWindow *window, t_game *game)
{
    sfRenderWindow_drawSprite(window, game->background->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->heart->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->heart_two->sprite, NULL);
    sfRenderWindow_drawSprite(window, game->heart_three->sprite, NULL);
}