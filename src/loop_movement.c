/*
** EPITECH PROJECT, 2021
** loop_movement
** File description:
** loop_movement
*/

#include "../include/my_hunter.h"

void loop_movement(sfClock *clock, sfTime time, float seconds, sfIntRect *rect)
{
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds >= 0.14) {
        move_rect (rect, 110, 220);
        sfClock_restart(clock);
    }
}