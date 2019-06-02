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

### ef_darray_create
```
Create a new darray.
```
**_Parameter List:_**

| Parameter | Description |
| --- | --- |
| size_t elem_size | The size (number of bytes) of each element in this new darray. |
| int length | The length of the new array. Input 0 is acceptable. |

**_Return Type:_**
t_darray


### ef_darray_append
```
Append a new element at the end of a darray.
```
**_Parameter List:_**

| Parameter | Description |
| --- | --- |
| t_darray array | The darray to be appended new element. |
| t_value value | The new element that is going to append to the darray. |

**_Return Type:_**
void


## [Singly Linked Lists](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ef/srcs/slist)

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
