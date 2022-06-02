/*
** EPITECH PROJECT, 2021
** sound.h
** File description:
** sound
*/

#ifndef __SOUND_H__
    #define __SOUND_H__

    #include "../my_hunter.h"

    typedef struct s_sound {
        sfSoundBuffer *buff;
        sfSound *sound;
    } t_sound;

#endif /* !SOUND_H */
