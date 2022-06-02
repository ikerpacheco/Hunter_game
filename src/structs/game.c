/*
** EPITECH PROJECT, 2021
** game.c
** File description:
** game.c
*/

#include "../../include/my_hunter.h"

t_game *init_game(void)
{
    t_game *game = malloc(sizeof(t_game));

    game->background = init_background();
    game->duck = init_duck();
    game->heart = init_heart((sfVector2f){850, 0});
    game->heart_two = init_heart((sfVector2f){910, 0});
    game->heart_three = init_heart((sfVector2f){970, 0});
    game->sound = init_sound();
    return game;
}