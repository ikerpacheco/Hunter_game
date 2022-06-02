/*
** EPITECH PROJECT, 2021
** duck.h
** File description:
** duck
*/

#ifndef __DUCK_H__
    #define __DUCK_H__

    #include "../my_hunter.h"

    typedef struct s_duck {
        sfTexture *texture;
        sfSprite *sprite;
        sfIntRect rect;
        int counter;
    } t_duck;

#endif
