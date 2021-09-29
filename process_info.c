/*
** EPITECH PROJECT, 2020
** PROCESS INFO
** File description:
** HELLO
*/

#include "./include/my.h"
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	pid_t process_id;
	pid_t p_process_id;
	pid_t g_process_id;

	process_id = getpid();
	p_process_id = getppid();
	g_process_id = getpgrp();
	my_printf("PID: %d\n",process_id);
	my_printf("PPID: %d\n",p_process_id);
	my_printf("PGID: %d\n",g_process_id);

	return (0);
}