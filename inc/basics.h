/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 18:29:39 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 19:37:52 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASICS_H
# define BASICS_H

# include "struct.h"
# include <string.h>

/*
********************************************************************************
**                                                                            **
**   char                                                                     **
**                                                                            **
********************************************************************************
*/

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

/*
********************************************************************************
**                                                                            **
**   list                                                                     **
**                                                                            **
********************************************************************************
*/

void				ft_listpushback(t_list **back, t_list *new);
void				ft_listadd(t_list **alst, t_list *new);
void				ft_listdel(t_list **alst, void (*del)(void *, size_t));
void				ft_listdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_listiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_listmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_listnew(void const *content, size_t content_size);
void				ft_listremoveone(t_list **alst, size_t content_size);

/*
********************************************************************************
**                                                                            **
**   lst                                                                      **
**                                                                            **
********************************************************************************
*/

void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdelone(t_lst *lst, size_t to_free);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_lst				*ft_lstnew(void *first, void *second, void *third, int nb);
void				ft_lstpushback(t_lst **begin_list, t_lst *new);
void				ft_lstremoveone(t_list **alst, size_t content_size);

/*
********************************************************************************
**                                                                            **
**   memory                                                                   **
**                                                                            **
********************************************************************************
*/

void				ft_bzero(void *s, size_t n);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memjoin(void *s1, void *s2, size_t s_s1, size_t s_s2);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				ft_memrev(void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				ft_print_memory(const void *addr, size_t size);

/*
********************************************************************************
**                                                                            **
**   num                                                                      **
**                                                                            **
********************************************************************************
*/

unsigned int		ft_abs(int value);
int					ft_atoi(const char *str);
int					ft_biggest(int a, int b);
t_bool				ft_getnbr(char *str, int *value);
int					ft_int_tab_cmp(int *tab1, int *tab2, size_t size1,\
					size_t size2);
size_t				ft_iterative_power(int nb, int power);
char				*ft_itoa(int n);
char				*ft_lltoa_base(long long value, int base, t_bool maj);
size_t				ft_nbrlen(int n);
int					ft_smallest(int a, int b);
size_t				ft_sqrt(int nb);
char				*ft_uitoa_base(unsigned int value, int base, t_bool maj);
char				*ft_ulltoa_base(unsigned long long val, int base,\
					t_bool maj);

/*
********************************************************************************
**                                                                            **
**   print                                                                    **
**                                                                            **
********************************************************************************
*/

void				ft_putchar_fd(char c, int fd);
void				ft_putchar(int c);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
void				ft_putnbrendl(int n);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putstr(char const *s);

/*
********************************************************************************
**                                                                            **
**   str                                                                      **
**                                                                            **
********************************************************************************
*/

size_t				ft_nbr_words_charset(char *str, char *charset);
char				**ft_split_charset(char *str, char *charset);
char				*ft_stpcpy(char *dest, const char *src);
char				*ft_stpncpy(char *dest, const char *src, size_t len);
char				*ft_strcat(char *dst, const char *src);
char				*ft_strchr(const char *s, int c);
char				*ft_strchrs(const char *s, const char *cs);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
void				ft_strdel(char **as);
char				*ft_strdup(const char *s1);
char				*ft_strendstr(const char *str, const char *to_find);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strisall(char *str, int	(*f)(int c));
t_bool				ft_strisint(char *str, size_t len);
t_bool				ft_strisuint(char *str, size_t len);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *s);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strmjoin(char *s1, char *s2, int tofree);
t_bool				ft_strnbrlen(char *str, size_t *len);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strnchr(const char *s, int c, size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strndup(const char *src, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnewset(char c, size_t size);
int					ft_strnis(char *str, int (*f)(int c), size_t len);
char				*ft_strnstr
					(const char *haystack, const char *needle, size_t len);
int					ft_strposchr(char *str, char c);
int					ft_strposchrs(char *str, char *charset);
void				ft_strrev(char *str);
char				*ft_strrchr(const char *s, int c);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(const char *haystack, const char *needle);
int					ft_strstrtochar(char *str, char *to_find, char c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);

#endif
