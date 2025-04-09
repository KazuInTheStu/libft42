/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 21:27:47 by ilaamari          #+#    #+#             */
/*   Updated: 2025/04/09 23:34:27 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_isalpha(int c);
int				ft_isdigit(int n);
int				ft_isalnum(int c);
int				ft_isascii(int n);
int				ft_isprint(int n);

unsigned long	ft_strlen(const char *c);
void			ft_bzero(void *s, unsigned long len);
void			*ft_memset(void *ptr, int value, unsigned long num);
void			*ft_memcpy(void *dest, const void *src, unsigned long num);
void			*ft_memmove(void *destination, const void *source,
					unsigned long size);
void			*ft_memchr(const void *s, int c, unsigned long n);
int				ft_memcmp(const void *s1, const void *s2, unsigned long n);

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long size);
unsigned long	ft_strlcat(char *dst, const char *src, unsigned long size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *haystack, const char *needle,
					unsigned long len);
int				ft_strncmp(const char *s1, const char *s2, unsigned long n);

int				ft_toupper(int c);
int				ft_tolower(int c);

int				ft_atoi(const char *str);
void			*ft_calloc(unsigned long nmemb, unsigned long size);
char			*ft_strdup(const char *s);

#endif
