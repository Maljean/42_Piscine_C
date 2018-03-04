/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 05:19:58 by maljean           #+#    #+#             */
/*   Updated: 2017/11/16 05:28:03 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	if (argc == 3)
	{
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
				i++;
			if (argv[1][i + 1] == '\0')
			{
				write(1, "1\n", 2);
				return (0);
			}
			j++;
		}
		write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
