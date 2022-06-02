/*
** EPITECH PROJECT, 2021
** background.c
** File description:
** background.c
*/

#include "../../include/my_hunter.h"

t_duck *init_duck(void)
{
    t_duck *duck = malloc(sizeof(t_duck));

    duck->texture = sfTexture_createFromFile("media/images/Duck.png", NULL);
    duck->sprite = sfSprite_create();
    duck->rect = (sfIntRect){0, 0, 110, 110};
    duck->counter = 0;

    sfSprite_setTexture(duck->sprite, duck->texture, sfTrue);
    return (duck);
}