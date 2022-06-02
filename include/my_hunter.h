/*
** EPITECH PROJECT, 2021
** my_hunter.c
** File description:
** my_hunter.c
*/

#ifndef __MY_HUNTER_H__
    #define __MY_HUNTER_H__

    #include <SFML/Graphics/Sprite.h>
    #include <SFML/Graphics/Texture.h>
    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/System.h>
    #include <SFML/Audio.h>
    #include <SFML/Window.h>
    #include <SFML/Graphics/Export.h>
    #include <SFML/Graphics/Color.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/Graphics/Types.h>
    #include <SFML/Graphics/Transform.h>
    #include <SFML/System/Vector2.h>
    #include <stddef.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>

    #include "structs/background.h"
    #include "structs/duck.h"
    #include "structs/heart.h"
    #include "structs/black_heart.h"
    #include "structs/sound.h"
    #include "structs/game.h"

    void my_putchar(char c);

    void my_putstr(char const *str);

    void loop_movement(sfClock *clock, sfTime time, float seconds,
                        sfIntRect *rect);

    int analyse_duck_pos(sfRenderWindow *window, sfSprite *duck_s, t_game *game);

    void draw_sprites(sfRenderWindow *window, t_game *game);

    void ducks(t_game *game, sfVector2f reset, sfVector2f movement,
                sfRenderWindow *window);

    void move_rect(sfIntRect *rect, int offset, int max_value);

    sfVector2f reset_position(sfSprite *duck_s, t_game *game,
                sfRenderWindow *window);

    t_black_heart *init_black_heart(void);
    t_background *init_background(void);
    t_duck *init_duck(void);
    t_heart *init_heart(sfVector2f pos);
    t_sound *init_sound(void);
    t_game *init_game(void);

#endif /* !MY_HUNTER_H_ */
