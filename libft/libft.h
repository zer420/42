/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhutt <lhutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:19:16 by lhutt             #+#    #+#             */
/*   Updated: 2022/12/20 07:00:00 by lhutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

# include "includes/ft_printf.h"
# include "includes/get_next_line.h"
# include "includes/vector3.h"
# include "includes/euler.h"
# include "includes/ternary.h"

# define WRITE_ERROR -1

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_list2
{
	struct s_list2	*previous;
	void			*content;
	struct s_list2	*next;
}	t_list2;

// ctype
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_isnumber(char *s);
int			ft_isint(long n);
int			ft_ishex(int c);

// string
size_t		ft_strlen(const char *s);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strdup(const char *s1);

// stdlib
long		ft_atoi(const char *str);
uint64_t	ft_atoi_hex(const char *str);
void		*ft_calloc(size_t count, size_t size);

// ft
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
int			ft_is_base_valid(char *base);
int			ft_free_split(char **s);
int			ft_striter_if(char *s, int (*f)(int));

// put
int			ft_putchar_fd(char c, int fd);
int			ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
int			ft_putlong_fd(long n, int fd);
int			ft_putlong_base_fd(long long n, char *base, int fd);
int			ft_putpointer_base_fd(long long n, char *base, int fd);
int			ft_write_protect(int ft_put_result, int *c);

// list
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// list2
t_list2		*ft_lstnew2(void *content);
void		ft_lstadd_front2(t_list2 **lst, t_list2 *new);
int			ft_lstsize2(t_list2 *lst);
t_list2		*ft_lstlast2(t_list2 *lst);
void		ft_lstadd_back2(t_list2 **lst, t_list2 *new);
void		ft_lstdelone2(t_list2 *lst, void (*del)(void*));
void		ft_lstclear2(t_list2 **lst, void (*del)(void*));
void		ft_lstiter2(t_list2 *lst, void (*f)(void *));
t_list2		*ft_lstmap2(t_list2 *lst, void *(*f)(void *), void (*del)(void *));
void		ft_lstprint2(t_list2 *lst);
t_list2		*ft_lstat2(t_list2 *lst, int at);

#endif
