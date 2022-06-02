/*
** EPITECH PROJECT, 2021
** black_heart.c
** File description:
** black_heart
*/

#include "../../include/my_hunter.h"

t_black_heart *init_black_heart(void)
{
    t_black_heart *black_heart = malloc(sizeof(t_black_heart));

    black_heart->texture = sfTexture_createFromFile("media/images/heart2.png",
    NULL);
    black_heart->sprite = sfSprite_create();
    black_heart->resize = (sfVector2f){0.2, 0.2};

    sfSprite_setTexture(black_heart->sprite, black_heart->texture, sfTrue);
    sfSprite_scale(black_heart->sprite, black_heart->resize);
    return (black_heart);
}