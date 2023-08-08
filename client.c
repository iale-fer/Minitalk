/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iale-fer <iale-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:46:36 by iale-fer          #+#    #+#             */
/*   Updated: 2023/08/07 13:35:15 by iale-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "./libft/libft.h"
// #include "minitalk.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	obtenerYMostrarPID() {
// Obtener el PID del proceso actual
	pid_t pid = getpid();

	printf("El PID del servidor es: %d\n", pid);
}

int main() {
// Llamada a la función para obtener y mostrar el PID
	obtenerYMostrarPID();
	return 0;
}
