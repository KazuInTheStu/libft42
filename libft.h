/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 01:23:58 by ilaamari          #+#    #+#             */
/*   Updated: 2025/04/12 01:23:58 by ilaamari         ###   ########.fr       */
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


char			*ft_substr(char const *s, unsigned int start,
					unsigned long len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);


typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
