/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 00:51:18 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/11 01:00:25 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h> //remove//

int ft_strlen(char *str);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_memcmp(const void *s1, const void *s2, size_t n);

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *str1, char *str2, size_t n);

char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);

char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, size_t n);
size_t ft_strlcat(char *dest, const char *src, size_t size);

char *ft_strchr(char *str, int c); 
char *ft_strrchr(char *str, int c);

char *ft_strstr(char *haystack, char *needle);
char *ft_strnstr(char *haystack, char *needle, size_t len);

char *ft_strdup(const char *s1);

void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *s1, const void *s2, size_t n);
void *ft_memccpy(void *s1, const void *s2, int c, size_t n);
void *ft_memmove(void *s1, const void *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);

/******PART 2******/
int ft_putchar(char c);
int ft_strequ(char const *s1, char const *s2);
int ft_strnequ(char const *s1, char const *s2, size_t n);

char *ft_strnew(size_t size);
char *ft_strmap(char const *s, char (*f)(char));
char *ft_strmapi(char const *s, char(*f)(unsigned int, char));
char *ft_strsub(char const *s, unsigned int start, size_t len);
char *ft_strtrim(char const *s);
char **ft_strsplit(char const *s, char c);
char *ft_itoa(int n);

void ft_putstr(char const *s);
void ft_putendl(char const *s);
void ft_putendl_fd(const char *s, int fd);
void ft_putnbr(int n);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char const *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_strclr(char *s);
void ft_memdel(void **ap);
void *ft_memalloc(size_t size);
void ft_strdel(char **as);
void ft_striter(char *s, void (*f)(char *));
void *ft_striteri(char *s, void (*f)(unsigned int, char *));


ssize_t write(int fd, const void *buf, size_t count);

/***************Extra Functions**********************/
char *ft_rmwhitespace(char *s);
char *ft_word(char *s);
void *ft_bytecopy(void *s1, const void *s2, int i, int j);
char *ft_nochar(char *s, char c);
int ft_strcount(char *s, char c);



#endif
