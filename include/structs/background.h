/*
** EPITECH PROJECT, 2021
** background.h
** File description:
** background.h
*/

#ifndef __BACKGROUND_H__
    #define __BACKGROUND_H__

    #include "../my_hunter.h"

    typedef struct s_background {
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f resize;
    } t_background;

#endif /* !BACKGROUND_H_ */
