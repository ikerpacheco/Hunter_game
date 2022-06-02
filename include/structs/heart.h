/*
** EPITECH PROJECT, 2021
** heart.h
** File description:
** heart.h
*/

#ifndef __HEART_H__
    #define __HEART_H__

    #include "../my_hunter.h"

    typedef struct s_heart {
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f resize;
    } t_heart;

#endif /* !HEART_H */
