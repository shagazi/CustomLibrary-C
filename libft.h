/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 00:51:18 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/06 00:15:06 by shagazi          ###   ########.fr       */
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


#endif
