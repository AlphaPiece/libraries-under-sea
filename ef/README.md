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

## [Dynamic Arrays](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ef/srcs/darray)
A dynamic array is a random access, variable-size list data structure that allows elements to be added or removed.




## [Singly Linked Lists](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ef/srcs/slist)

Each element in the list contains a piece of data, together with a pointer which links to the next element in the list. Using this pointer it is possible to move through the list in one direction only (unlike the double-linked lists, which allow movement in both directions).

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

To traverse the whole list with a function, use
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


## [Doubly Linked Lists](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ef/srcs/dlist)

## [Double-ended Queues](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ef/srcs/deque)

## [N-ary Trees](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ef/srcs/ntree)

## [AVL Trees](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ef/srcs/atree)

## [Red-Black Trees](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ef/srcs/rbtree)

## [Splay Trees](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ef/srcs/sptree)

## [Treaps](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ef/srcs/treap)

## [Hash Tables](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ef/srcs/htable)

## [Binary Heaps](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ef/srcs/bheap)

## [Binomial Heaps](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ef/srcs/bnheap)
