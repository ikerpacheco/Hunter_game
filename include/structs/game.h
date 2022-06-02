/*
** EPITECH PROJECT, 2021
** game.h
** File description:
** game.h
*/

#ifndef __GAME_H__
    #define __GAME_H__

    #include "../my_hunter.h"

    typedef struct s_game {
        t_background *background;
        t_duck *duck;
        t_heart *heart;
        t_heart *heart_two;
        t_heart *heart_three;
        t_sound *sound;
    } t_game;

#endif /* !GAME_H_ */
