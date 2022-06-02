/*
** EPITECH PROJECT, 2021
** black_heart.h
** File description:
** black_heart.h
*/

#ifndef __BLACK_HEART_H__
    #define __BLACK_HEART_H__

    #include "../my_hunter.h"

    typedef struct s_black_heart {
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f resize;
    } t_black_heart;

#endif /* !BLACK_HEART_H */
