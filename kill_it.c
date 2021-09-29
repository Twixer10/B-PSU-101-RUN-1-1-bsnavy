/*
** EPITECH PROJECT, 2020
** KILL IT
** File description:
** NO DESCRIPTION FOUND
*/

#include <sys/types.h>
#include <signal.h>
#include "./include/my.h"

int main(int ac, char **av)
{
    int t;

    if (ac < 2)
        return (84);
    t = kill(my_getnbr(av[1]), SIGQUIT);
    if (t < 0)
        my_printf("An error as occured ...");
}