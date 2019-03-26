/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pduhard- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 20:09:56 by pduhard-     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 16:32:10 by pduhard-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	len;
	int		end;
	size_t	st;
	char	*str;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	st = 0;
	len = ft_strlen((char*)s);
	end = len - 1;
	while (end >= 0 && (s[end] == '\t' || s[end] == '\n' || s[end] == ' '))
		end--;
	while (st < len && (s[st] == '\t' || s[st] == '\n' || s[st] == ' '))
		st++;
	if (end <= 0)
		return (ft_emptystr());
	if (!(str = malloc(end - st + 2)))
		return (NULL);
	while ((int)st <= end)
		str[i++] = s[st++];
	str[i] = '\0';
	return (str);
}
