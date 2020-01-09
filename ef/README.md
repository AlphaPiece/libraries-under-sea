# libef

*A data structure library written in C.*

## Contents
* [Dynamic Arrays](#dynamic-arrays)
* [Singly Linked Lists](#singly-linked-lists)
* [Doubly Linked Lists](#doubly-linked-lists)
* [Double-ended Queues](#double-ended-queues)
* [N-ary Trees](#n-ary-trees)
* [AVL Trees](#avl-trees)
* [Red-Black Trees](#red-black-trees)
* [Splay Trees](#splay-trees)
* [Treaps](#treaps)
* [Hash Tables](#hash-tables)
* [Binary Heaps](#binary-heaps)
* [Binomial Heaps](#binomial-heaps)

## [Dynamic Arrays](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/darray)
A dynamic array is a random access, variable-size list data structure that allows elements to be added or removed.




## [Singly Linked Lists](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/slist)

Each element in a singly linked list contains a piece of data, together with a pointer which links to the next element in the list. Using this pointer it is possible to move through the list in one direction only (unlike the double-linked lists, which allow movement in both directions).

NULL is considered to be the empty list. That is, a t_slist which contains NULL is an empty list.

To create a t_slist node, use
```
ef_slist_alloc()
ef_slist_create()
```

To add a single element, use
```
ef_slist_append()
ef_slist_prepend()
ef_slist_insert()
ef_slist_insert_before()
ef_slist_insert_after()
ef_slist_insert_sorted()
```

Example
```
t_slist *list = NULL;
char *alphabet[] = {"a", "b", "c", "d"};

for (int i = 0; i < 4; i++)
    list = ef_slist_append(list, alphabet[i]);

for (t_slist *node = list; node; node = node->next)
    printf("%s", node->data);

// The output is "abcd".
```

To add a list of elements, use
```
ef_slist_append_list()
ef_slist_prepend_list()
ef_slist_insert_list()
ef_slist_insert_list_before()
ef_slist_insert_list_after()
```

To find an elements, use
```
ef_slist_find()
ef_slist_last_node()
ef_slist_nth_node()
ef_slist_nth_data()
```

To remove an element, use
```
ef_slist_unlink()
ef_slist_delete()
ef_slist_free()
```

To call a function for each element in the list, use
```
ef_slist_traverse()
```

To get some information about the list, use
```
ef_slist_length()
ef_slist_node_index()
ef_slist_data_index()
```

Some other useful functions
```
ef_slist_sort()
ef_slist_reverse()
ef_slist_rotate()
ef_slist_copy()
```



## [Doubly Linked Lists](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/dlist)

Each element in a doubly linked list contains a piece of data, together with pointers which link to the previous and next elements in the list. Using these pointers it is possible to move through the list in both directions (unlike the singly-linked GSList, which only allows movement through the list in the forward direction).

NULL is considered to be the empty list. That is, a t_dlist which contains NULL is an empty list.

To create a t_dlist node, use
```
ef_dlist_alloc()
ef_dlist_create()
```

To add a single element, use
```
ef_dlist_append()
ef_dlist_prepend()
ef_dlist_insert()
ef_dlist_insert_before()
ef_dlist_insert_after()
ef_dlist_insert_sorted()
```

To add a list of elements, use
```
ef_dlist_append_list()
ef_dlist_prepend_list()
ef_dlist_insert_list()
ef_dlist_insert_list_before()
ef_dlist_insert_list_after()
```

To find an elements, use
```
ef_dlist_find()
ef_dlist_last_node()
ef_dlist_nth_node()
ef_dlist_nth_data()
```

To remove an element, use
```
ef_dlist_unlink()
ef_dlist_delete()
ef_dlist_free()
```

To call a function for each element in the list, use
```
ef_dlist_traverse()
```

Example
```
/*
** void *print(void *data)
** {
**     printf("%s", (char *)data);
**     return (data);
** }
*/

t_dlist *list = NULL;
char *alphabet[] = {"a", "b", "c", "d"};

for (int i = 0; i < 4; i++)
    list = ef_dlist_append(list, alphabet[i]);

// Now the list is a->b->c->d->|.

ef_dlist_traverse(list, print, ef_dlist_length(list), FORWARD);

// The output is "abcd".

ef_dlist_traverse(list, print, ef_dlist_length(list), BACKWARD);

// The output is "dcba".
```

To get some information about the list, use
```
ef_dlist_length()
ef_dlist_node_index()
ef_dlist_data_index()
```

Some other useful functions
```
ef_dlist_sort()
ef_dlist_reverse()
ef_dlist_rotate()
ef_dlist_copy()
```


## [Double-ended Queues](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/deque)



## [N-ary Trees](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/ntree)

## [AVL Trees](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/atree)

## [Red-Black Trees](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/rbtree)

## [Splay Trees](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/sptree)

## [Treaps](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/treap)

## [Hash Tables](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/htable)

## [Binary Heaps](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/bheap)

## [Binomial Heaps](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/bnheap)
