/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:15:03 by afenzl            #+#    #+#             */
/*   Updated: 2022/08/16 18:06:18 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	builtin_echo(char *str, int flag)
{
	ft_printf("%s", str);
	if (flag == 0)
		printf("\n");
	return (0);
}
