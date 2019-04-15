/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libds.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 10:18:54 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/13 21:16:46 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBDS_H
# define LIBDS_H

# include "libft.h"

/*
** ===================
** >                 <
** >>> LINKED LIST <<<
** >                 <
** ===================
*/

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstadd(t_list **alst, t_list *node);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_swapppairs(t_list *head);

/*
** ====================
** >                  <
** >>> GENERAL TREE <<<
** >                  <
** ====================
*/

typedef struct		s_tree
{
	void			*data;
	struct s_tree	*parent;
	struct s_tree	**children;
	int				child_nbr;
}					t_tree;

t_tree				*ft_gtnew(void *data);
int					ft_gtheight(t_tree *gt);
int					ft_gtleafno(t_tree *gt);
int					ft_gtnodeno(t_tree *gt);
int					ft_gtarity(t_tree *gt);

/*
** ===================
** >                 <
** >>> BINARY TREE <<<
** >                 <
** ===================
*/

typedef struct		s_btree
{
	void			*data;
	struct s_btree	*parent;
	struct s_btree	*right;
	struct s_btree	*left;
}					t_btree;

t_btree				*ft_btnew(void *data);
int					ft_btnodeno(t_btree *root);
void				ft_btview(t_btree *root, void (*print)(void));
void				ft_btdel(t_btree **node);

/*
** ==========================
** >                        <
** >>> BINARY SEARCH TREE <<<
** >                        <
** ==========================
*/

t_bool				ft_isbst(t_btree *root, int (*cmp)(void *, void *));
t_btree				*ft_bt_to_bst(t_btree *root, int (*cmp)(void *, void *));
void				ft_bstdelroot(t_btree **root);
void				ft_bstdel(t_btree **root, void *item,
								int (*cmp)(void *, void *));
void				*ft_bstpopmax(t_btree **root);
void				*ft_bstpopmin(t_btree **root);
t_btree				*ft_bstinsert(t_btree *bst, void *item,
									int (*cmp)(void *, void *));
void				*ft_bstsearch(t_btree *bst, void *data_ref,
									int (*cmp)(void *, void *));

/*
** ================
** >              <
** >>> AVL TREE <<<
** >              <
** ================
*/

t_bool				ft_isavlt(t_btree *root, int (*cmp)(void *, void *));

/*
** ======================
** >                    <
** >>> RED BLACK TREE <<<
** >                    <
** ======================
*/

enum				e_rbcolor
{
	RB_BLACK,
	RB_RED
};

typedef struct		s_rbtree
{
	void			*data;
	struct s_rbtree	*parent;
	struct s_rbtree	*left;
	struct s_rbtree	*right;
	enum e_rbcolor	color;
}					t_rbtree;

t_bool				ft_isrbt(t_rbtree *root);
void				ft_rbtinsert(t_rbtree **root, void *data,
									int (*cmp)(void *, void *));
t_rbtree			*ft_rbtsearch(t_rbtree *root, void *data,
									int (*cmp)(void *, void *));
void				ft_rbtremove(t_rbtree **root, void *data,
									int (*cmp)(void *, void *));



/*
** ================
** >              <
** >>> HASH MAP <<<
** >              <
** ================
*/

# define HASH_SPACE 512

typedef struct		s_pair
{
	char			*key;
	char			*val;
	struct s_pair	*next;
}					t_pair;

typedef struct		s_hmap
{
	int				count;
	t_pair			**pairs;
}					t_hmap;

unsigned int		ft_hashstr(const char *s, unsigned int hashsize);
t_hmap				*ft_hmapnew(void);
t_pair				*ft_hmapsearch(t_hmap *hmap, char *key);
void				ft_hmapset(t_hmap *hmap, char *key, char *value);
char				*ft_hmapget(t_hmap *hmap, char *key);
void				ft_hmapremove(t_hmap *hmap, char *key);
void				ft_hmapclear(t_hmap *hmap);
void				ft_hmapdel(t_hmap **hmap);

/*
** =============
** >           <
** >>> GRAPH <<<
** >           <
** =============
*/


#endif
