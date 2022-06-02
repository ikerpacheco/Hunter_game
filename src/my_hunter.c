/*
** EPITECH PROJECT, 2021
** mouse click
** File description:
** mouse_click
*/

#include "../include/my_hunter.h"

void manage_mouse_click(sfRenderWindow *window, sfSprite *duck_s)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(window);
    sfVector2f pos_duck = sfSprite_getPosition(duck_s);
    sfVector2f pos_explosion = {pos_duck.x - 75, pos_duck.y - 75};
    sfTexture *explosion_t = sfTexture_createFromFile(
    "media/images/explosion.png", NULL);
    sfSprite *explosion_s = sfSprite_create();
    sfVector2f resize = {0.5, 0.5};

    if ((pos.x >= (pos_duck.x - 110) && pos.x <= (pos_duck.x + 110)) &&
        (pos.y >= (pos_duck.y - 110) && pos.y <= (pos_duck.y + 110))) {
        sfSprite_setPosition(explosion_s, pos_explosion);
        sfSprite_setTexture(explosion_s, explosion_t, sfTrue);
        sfSprite_scale(explosion_s, resize);
        sfRenderWindow_drawSprite(window, explosion_s, NULL);
        pos_duck.x = -150;
        pos_duck.y = (rand() % (850 - 0 + 1) + 0);
        sfSprite_setPosition(duck_s, pos_duck);
    }
}

void analyse_events(sfRenderWindow *window, sfEvent event, sfSprite *duck_s,
                    sfSound *sound)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtMouseButtonPressed) {
            if (event.mouseButton.button == sfMouseLeft) {
                sfSound_play(sound);
                manage_mouse_click(window, duck_s);
            }
        }
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
}

int check_usage(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("USAGE\n");
        my_putstr("The objective of the game (MyHunter) ");
        my_putstr("is to shoot at the ducks that");
        my_putstr(" appear on the screen.\n");
        my_putstr("If the player hits a duck, the score increases by one.\n");
        my_putstr("If a duck goes to the end of the screen, ");
        my_putstr("the player loses a heart.\n");
        my_putstr("The game ends when:\n");
        my_putstr("    - The player reaches a score of 10.\n");
        my_putstr("    - The player runs out of hearts.\n");
        my_putstr("HAVE FUN!\n");
        return 84;
    } else if (ac == 2)
        return 84;
    if (ac > 2)
        return 84;
}

void my_hunter(void)
{
    sfVideoMode video_mode = {1920, 1080, 32};
    sfRenderWindow *window = sfRenderWindow_create(video_mode, "MyWindow",
    sfDefaultStyle, NULL);
    sfEvent event;
    int counter = 0;
    t_game *game = init_game();
    sfClock *clock = sfClock_create();
    sfTime time;
    float seconds = 0;
    sfVector2f movement = {10, 0};
    sfVector2f reset = {0, 100};

    while (sfRenderWindow_isOpen(window)) {
        reset = reset_position(game->duck->sprite, game, window);
        draw_sprites(window, game);
        ducks(game, reset, movement, window);
        analyse_events(window, event, game->duck->sprite, game->sound->sound);
        sfRenderWindow_display(window);
        loop_movement(clock, time, seconds, &game->duck->rect);
    }
}

int main (int ac, char **av)
{
    if (check_usage(ac, av) == 84)
        return 84;
    my_hunter();
    return 0;
}