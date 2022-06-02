/*
** EPITECH PROJECT, 2021
** background.c
** File description:
** background.c
*/

#include "../../include/my_hunter.h"

t_background *init_background(void)
{
    t_background *background = malloc(sizeof(t_background));

    background->texture = sfTexture_createFromFile(
    "media/images/background.png", NULL);
    background->sprite = sfSprite_create();
    background->resize = (sfVector2f){1.4, 1.4};

    sfSprite_setTexture(background->sprite, background->texture, sfTrue);
    sfSprite_scale(background->sprite, background->resize);
    return (background);
}