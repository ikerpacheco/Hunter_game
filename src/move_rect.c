/*
** EPITECH PROJECT, 2021
** move_rect
** File description:
** move_rect
*/

#include "../include/my_hunter.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    if (rect->left != max_value)
        rect->left += offset;
    else
        rect->left = 0;
}