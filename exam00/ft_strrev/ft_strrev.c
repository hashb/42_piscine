/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 19:00:25 by exam              #+#    #+#             */
/*   Updated: 2018/09/21 19:08:13 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int len;
	
	len = size(str)/size(char);

	return str;
}

int main(void)
{
	char str[4];

	str[4] = {'a', 'b', 'c', 'd'};

	char *str1 = ft_strrev(str);
	return (0);
}
