/*
** EPITECH PROJECT, 2021
** heart.c
** File description:
** heart.c
*/

#include "../../include/my_hunter.h"

t_heart *init_heart(sfVector2f pos)
{
    t_heart *heart = malloc(sizeof(t_heart));

    heart->texture = sfTexture_createFromFile("media/images/heart1.png", NULL);
    heart->sprite = sfSprite_create();
    heart->resize = (sfVector2f){0.2, 0.2};

    sfSprite_setTexture(heart->sprite, heart->texture, sfTrue);
    sfSprite_scale(heart->sprite, heart->resize);
    sfSprite_setPosition(heart->sprite, pos);
    return (heart);
}