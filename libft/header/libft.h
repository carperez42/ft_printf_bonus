/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carperez <carperez@student.45madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:58:08 by carperez          #+#    #+#             */
/*   Updated: 2023/02/26 15:12:07 by carperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

//<ctype.h>
int				ft_isalpha(int nChar);
int				ft_isdigit(int nChar);
int				ft_isalnum(int nChar);
int				ft_isascii(int nChar);
int				ft_isprint(int nChar);
int				ft_toupper(int nChar);
int				ft_tolower(int nChar);

//<string.h>
void			*ft_memset(void *sOri, int nChar, size_t nChg);
void			ft_bzero(void *sOri, size_t nChg);
void			*ft_memcpy(void *sDest, const void *sOri, size_t nChg);
void			*ft_memmove(void *sDest, const void *sOri, size_t nChg);
void			*ft_memchr(const void *sOri, int nChar, size_t nCmp);
int				ft_memcmp(const void *s1, const void *s2, size_t nCmp);
int				ft_strncmp(const char *s1, const char *s2, size_t nCpy);
size_t			ft_strlen(const char *sOri);
size_t			ft_strlcpy(char *sDest, const char *sOri, size_t nCpy);
size_t			ft_strlcat(char *sDest, const char *sOri, size_t nCpy);
char			*ft_strchr(const char *sOri, int nChar);
char			*ft_strrchr(const char *sOri, int nChar);
char			*ft_strnstr(const char *sMain, const char *sSub, size_t nCmp);
char			*ft_strdup(const char *sCpy);

//<stdlib.h>
int				ft_atoi(const char *sNum);
void			*ft_calloc(size_t nDimension, size_t tData);

//ADITIONAL FUNCTIONS
char			*ft_substr(char const *sOri, unsigned int start, size_t len);
char			*ft_strjoin(char const *sFront, char const *sBack);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *sMain, char cCmp);
char			*ft_itoa(int nStr);
char			*ft_strmapi(char const *sOri, char (*f)(unsigned int, char));
void			ft_striteri(char *sChg, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char cPrint, int fDscp);
void			ft_putstr_fd(char *sPrint, int fDscp);
void			ft_putendl_fd(char *sPrint, int fDscp);
void			ft_putnbr_fd(int nPrint, int fDscp);

//BONUS
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *pStart);
int				ft_lstsize(t_list *pStart);
void			ft_lstadd_front(t_list **pStart, t_list *pNew);
void			ft_lstadd_back(t_list **pStart, t_list *pNew);
void			ft_lstdelone(t_list *pNodo, void (*del)(void*));
void			ft_lstclear(t_list **pNodo, void (*del)(void*));
void			ft_lstiter(t_list *pStart, void (*f)(void *));
t_list			*ft_lstmap(t_list *pNodo, void *(*f)(void *),
					void (*del)(void *));
#endif
