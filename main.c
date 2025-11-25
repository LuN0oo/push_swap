/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:04:14 by analaphi          #+#    #+#             */
/*   Updated: 2025/11/21 13:49:51 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(void)
{
    int tab[3] = {1, 2, 3};
    t_stack a = {tab, 3, 3};

    printf("Avant swap: \n%d\n%d\n%d\n", a.values[0], a.values[1], a.values[2]);

    swap(&a);

    printf("Après swap: \n%d\n%d\n%d", a.values[0], a.values[1], a.values[2]);

    return 0;
}
