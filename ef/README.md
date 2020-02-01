# libef

![Intro Image](https://user-images.githubusercontent.com/30487160/73508822-28ba7b80-43ab-11ea-9cd4-acf37ccf8d83.jpg)

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
* [Disjoint-set Forests](#disjoint-set-forests)



## [Dynamic Arrays](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/darray)

A dynamic array is a random access, variable-size list data structure that allows elements to be added or removed. All the elements in the array must be of the same type. The dynamic array will be initialized with 16 spaces (the actually size of the array depends on the element size e.g. an int array is initialized with size 16 * 4 = 64 bytes). If the number of elements are equal to the capacity of the array when adding a new element, the capacity will be automatically doubled.

---

To create a dynamic array, use
```
ef_darray_alloc()
ef_darray_create()
```

To add a single element, use
```
ef_darray_append()
ef_darray_insert()
ef_darray_set()
```

To find an elements, use
```
ef_darray_get()
ef_darray_peek()
```

To remove an element, use
```
ef_darray_pop()
ef_darray_delete()
ef_darray_remove()
```

To remove all the elements or even destroy the array, use
```
ef_darray_clear()
ef_darray_free()
```

To call a function for each element in the array, use
```
ef_darray_traverse()
```

To get some information about the array, use
```
ef_darray_length()
ef_darray_elem_size()
ef_darray_index()
```

Some other useful functions
```
ef_darray_swap()
ef_darray_sort()
ef_darray_reverse()
ef_darray_copy()
ef_darray_partition()
```



## [Singly Linked Lists](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/slist)

Each element in a singly linked list contains a piece of data, together with a pointer which links to the next element in the list. Using this pointer it is possible to move through the list in one direction only (unlike the double-linked lists, which allow movement in both directions).

NULL is considered to be the empty list. That is, a *t_slist* which contains NULL is an empty list.

---

To create a *t_slist* node, use
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

To remove elements, use
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

NULL is considered to be the empty list. That is, a *t_dlist* which contains NULL is an empty list.

---

To create a *t_dlist* node, use
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

To remove elements, use
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

A double-ended queue is a queue (internally a doubly linked list), for which elements can be added to or removed from either the front (head) or back (tail). Also known as deque.

---

To create a deque, use
```
ef_deque_alloc()
ef_deque_create()
```

To push an element, use
```
ef_deque_push_head()
ef_deque_push_tail()
ef_deque_push_nth()
```

To peek an element, use
```
ef_deque_peek_head()
ef_deque_peek_tail()
ef_deque_peek_nth()
```

To pop an element, use
```
ef_deque_pop_head()
ef_deque_pop_tail()
ef_deque_pop_nth()
```

Example
```
char *alphabet[] = {"a", "b", "c", "d"};
t_deque *queue = ef_deque_create(NULL);

for (int i = 0; i < 4; i++)
    ef_deque_push_head(queue, alphabet[i]);
printf("%s\n", ef_deque_pop_head(queue));

// The output is "d".
```

To remove all the elements or even destroy the deque, use
```
ef_deque_clear()
ef_deque_free()
```

To call a function for each element in the deque, use
```
ef_deque_traverse()
```

To get some information about the deque, use
```
ef_deque_is_empty()
ef_deque_length()
```

Some other useful functions
```
ef_deque_sort()
ef_deque_reverse()
ef_deque_rotate()
ef_deque_copy()
```



## [N-ary Trees](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/ntree)

An n-ary tree is a rooted tree in which each node has no more than n children. A binary tree is the special case where n = 2, and a ternary tree is another case with n = 3 that limits its children to three.

---

To create a *t_ntree* node, use
```
ef_ntree_alloc()
ef_ntree_create()
```

To add a single element, use
```
ef_ntree_append_child()
ef_ntree_prepend_child()
ef_ntree_insert_child()
ef_ntree_insert_child_before()
ef_ntree_insert_child_after()
```

To find an elements, use
```
ef_ntree_root()
ef_ntree_first_child()
ef_ntree_last_child()
ef_ntree_nth_child()
ef_ntree_first_sibling()
ef_ntree_last_sibling()
ef_ntree_prev_sibling()
ef_ntree_next_sibling()
ef_ntree_find()
```

Example
```
/*
** int  cmp_int(void *n1, void *n2)
** {
**     if (*(int *)n1 > *(int *)n2)
**         return (1);
**     else if (*(int *)n1 < *(int *)n2)
**         return (-1);
**     else
**         return (0);
** }
*/

t_ntree *nodes[4];
int     arr[] = {0, 1, 2, 3};

for (int i = 0; i < 4; i++)
    nodes[i] = ef_ntree_create(&arr[i]);
ef_ntree_prepend_child(nodes[0], nodes[1]);
ef_ntree_append_child(nodes[0], nodes[3]);
ef_ntree_insert_child(nodes[0], nodes[2], 1);

int n = 2;
t_ntree *node = ef_ntree_find(nodes[0], &n, cmp_int, -1, POST_ORDER, WHOLE);
printf("%d", *(int *)(node->data));

// The output is "2".
```

To remove elements, use
```
ef_ntree_unlink()
ef_ntree_remove()
ef_ntree_free()
```

To call a function for each element in the tree, use
```
ef_ntree_traverse()
```

To get some information about the tree, use
```
ef_ntree_is_root()
ef_ntree_is_leaf()
ef_ntree_is_ancestor()
ef_ntree_is_descendant()
ef_ntree_depth()
ef_ntree_height()
ef_ntree_count_children()
ef_ntree_count_nodes()
ef_ntree_count_leaves()
ef_ntree_child_index()
```

Some other useful functions
```
ef_ntree_sort_children()
ef_ntree_reverse_children()
ef_ntree_rotate_children()
ef_ntree_copy()
```



## [AVL Trees](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/atree)

An AVL tree is a self-balancing binary search tree. It was the first such data structure to be invented. In an AVL tree, the heights of the two child subtrees of any node differ by at most one; if at any time they differ by more than one, rebalancing is done to restore this property.

AVL trees store **balance factors** or **heights** with each node, thus requires storage for an integer per node. (In the libef's implementation, heights are stored.)

Compare to red-black trees, AVL trees provides **faster lookups** than red-black trees because they are more strictly balanced.

In libef, each node of AVL trees is of type *t_anode*, which contains the data; and the root of the tree of *t_anode* nodes is stored in a *t_atree* struct, which is the external representation of AVL trees.

---

To create a *t_anode*, use
```
ef_anode_alloc()
ef_anode_create()
```

To create a *t_atree*, use
```
ef_atree_alloc()
ef_atree_create()
```

To add a single element or modify the value of a node, use
```
ef_atree_insert()
ef_atree_set()
```

To find an elements, use
```
ef_atree_root()
ef_anode_minimum()
ef_anode_maximum()
ef_atree_find()
ef_atree_get()
```

To remove an element, use
```
ef_anode_free()
ef_atree_delete()
ef_atree_remove()
```

To remove all the elements or even destroy the tree, use
```
ef_atree_clear()
ef_atree_free()
```

To call a function for each element in the tree, use
```
ef_atree_traverse()
```

To get some information about the tree, use
```
ef_atree_size()
ef_anode_height()
```

Some other useful functions
```
ef_anode_left_rotate()
ef_anode_right_rotate()
```



## [Red-Black Trees](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/rbtree)

A red-black tree is a balanced binary search tree with one extra bit of storage per node: its color, which can be either RED or BLACK. (The implementation of libef's red black tree actually use a byte (char, 8 bits) to store the color. This will be improved in the future.)

A red-black tree is a binary tree that satisfies the following **red-black properties**:

> 1. Every node is either red or black.
> 2. The root is black.
> 3. Every leaf (NIL) is black.
> 4. If a node is red, then both its children are black.
> 5. For each node, all simple paths from the node to descendant leaves contain the same number of black nodes.


By constraining the node colors on any simple path from the root to a leaf, read-black trees ensure that no such path is more than twice as long as any other, so that the tree is approximately balanced.

Compare to AVL trees, red-black trees provide faster insertion and removal operations than AVL trees as fewer rotations are done due to relatively relaxed balancing.

In libef, each node of red-black trees is of type *t_rbnode*, which contains the data; and the root of the tree of *t_rbnode* nodes is stored in a *t_rbtree* struct, which is the external representation of red-black trees.

---

To create a *t_rbnode*, use
```
ef_rbnode_alloc()
ef_rbnode_create()
```

To create a *t_rbtree*, use
```
ef_rbtree_alloc()
ef_rbtree_create()
```

To add a single element or modify the value of a node, use
```
ef_rbtree_insert()
ef_rbtree_set()
```

To find an elements, use
```
ef_rbtree_root()
ef_rbnode_minimum()
ef_rbnode_maximum()
ef_rbtree_find()
ef_rbtree_get()
```

To remove an element, use
```
ef_rbnode_free()
ef_rbtree_delete()
ef_rbtree_remove()
```

To remove all the elements or even destroy the tree, use
```
ef_rbtree_clear()
ef_rbtree_free()
```

To call a function for each element in the tree, use
```
ef_rbtree_traverse()
```

To get some information about the tree, use
```
ef_rbtree_size()
ef_rbnode_height()
```

Some other useful functions
```
ef_rbnode_left_rotate()
ef_rbnode_right_rotate()
```



## [Splay Trees](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/sptree)

The splay tree is a self-balancing binary search tree with the additional property that recently accessed elements are quick to access again. It performs basic operations such as insertion, look-up and removal in O(log(n)) amortized time.

***Can we do better than AVL or red-black trees in practical situations?***

Below is an answer from GeeksForGeeks:

> Like AVL and Red-Black Trees, Splay tree is also self-balancing BST. The main idea of splay tree is to bring the recently accessed item to root of the tree, this makes the recently searched item to be accessible in O(1) time if accessed again. The idea is to use locality of reference (In a typical application, 80% of the access are to 20% of the items). Imagine a situation where we have millions or billions of keys and only few of them are accessed frequently, which is very likely in many practical applications.


Splay trees have a special operation called "splay", which can move a node to the root. It is used in operation insert, search, and delete. The important thing to note is, the splay operation not only brings the searched node to root, but also balances the BST.

---

To create a *t_spnode*, use
```
ef_spnode_alloc()
ef_spnode_create()
```

To create a *t_sptree*, use
```
ef_sptree_alloc()
ef_sptree_create()
```

To add a single element or modify the value of a node, use
```
ef_sptree_insert()
ef_sptree_set()
```

To find an elements, use
```
ef_spnode_minimum()
ef_spnode_maximum()
ef_sptree_find()
ef_sptree_get()
```

To remove an element, use
```
ef_spnode_free()
ef_sptree_delete()
ef_sptree_remove()
```

To remove all the elements or even destroy the tree, use
```
ef_sptree_clear()
ef_sptree_free()
```

To call a function for each element in the tree, use
```
ef_sptree_traverse()
```

To get some information about the tree, use
```
ef_sptree_size()
```

Some other useful functions
```
ef_spnode_left_rotate()
ef_spnode_right_rotate()
ef_sptree_splay()
ef_sptree_join()
ef_sptree_split()
```



## [Treaps](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/treap)

The treap is a randomized binary search tree, and it's not guaranteed to have height as O(log(n)). A node in a treap is like a node in a binary search tree in that it has a data value, but it also contains a unique numerical priority that is assigned at random.

A treap is basically a combination of a binary search tree and a binary heap. As with any binary search tree, the inorder traversal order of the nodes is the same as the sorted order of the keys. The structure of the tree is determined by the requirement that it be heap-ordered: that is, the priority number for any non-leaf node must be greater than or equal to the priority of its children.

Since priorities are assigned at random, ***the shape of a treap has the same probability distribution as the shape of a random binary search tree***, a search tree formed by inserting the nodes without rebalancing in a randomly chosen insertion order. Because random binary search trees are known to have logarithmic height with high probability, the same is true for treaps.

Therefore, the expected time complexity of insert, search, and delete is O(log(n)).

---

To create a *t_trnode*, use
```
ef_trnode_alloc()
ef_trnode_create()
```

To create a *t_treap*, use
```
ef_treap_alloc()
ef_treap_create()
```

To add a single element or modify the value of a node, use
```
ef_treap_insert()
ef_treap_set()
```

To find an elements, use
```
ef_treap_find()
ef_treap_get()
```

To remove an element, use
```
ef_trnode_free()
ef_treap_delete()
ef_treap_remove()
```

To remove all the elements or even destroy the treap, use
```
ef_treap_clear()
ef_treap_free()
```

To call a function for each element in the treap, use
```
ef_treap_traverse()
```

To get some information about the treap, use
```
ef_treap_size()
```

Some other useful functions
```
ef_trnode_left_rotate()
ef_trnode_right_rotate()
```



## [Hash Tables](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/htable)

A hash table (hash map) is a data structure that implements an associative array abstract data type, a structure that can map keys to values. A hash table uses a hash function to compute an index, also called a hash code, into an array of buckets or slots, from which the desired value can be found.

---

To create a hash table, use
```
ef_htable_alloc()
ef_htable_create()
```

To add a single element or modify the value of a node, use
```
ef_htable_insert()
ef_htable_set()
```

To find an elements, use
```
ef_htable_find()
ef_htable_get()
```

To remove an element, use
```
ef_htable_pop()
ef_htable_delete()
ef_htable_remove()
```

To remove all the elements or even destroy the hash table, use
```
ef_htable_clear()
ef_htable_free()
```

To call a function for each element in the table, use
```
ef_htable_traverse()
```

To get some information about the table, use
```
ef_htable_size()
```

Some other useful functions
```
ef_htable_resize()
ef_htable_hash()
ef_hash_pointer()
ef_hash_string()
ef_hash_integer()
ef_htable_pairs()
```



## [Binary Heaps](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/bheap)

To create a t_slist node, use

To add a single element, use

To find an elements, use

To remove an element, use

To call a function for each element in the heap, use

To get some information about the heap, use

Some other useful functions

## [Binomial Heaps](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/bnheap)

To create a t_slist node, use

To add a single element, use

To find an elements, use

To remove an element, use

To call a function for each element in the heap, use

To get some information about the heap, use

Some other useful functions

## [Disjoint-set Forests](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ef/src/dset)

A disjoint-set data structure (also called a union–find data structure or merge–find set) is a data structure that tracks a set of elements partitioned into a number of disjoint (non-overlapping) subsets.

It supports the following operations:

> **find**(x), which returns the representative of the set containing node x, and

> **union**(x, y), which merges the sets containing x and y into a single set.

In order to support traversal and deletion of the set, an additional pointer *next* is added to the struct *t_dset*. Each node have a *next* pointer to the next node in the set it is in. The nodes in a set form a circular linked list.

When a singleton set is first created, the node's next pointer points to itself. When merging two sets (say their representitive is *X* and *Y* respectively), the circular linked-lists are merged, which is done by swapping *X.next* and *Y.next*. This only takes O(1) steps.

---

To make a disjoint-set, use
```
ef_dset_alloc()
ef_dset_create()
```

To union two disjoint-sets, use
```
ef_dset_union()
```

To find the representitive of a node, use
```
ef_dset_find()
```

To destroy one or all nodes in a set, use
```
ef_dset_free()
```

To call a function for each element in the set, use
```
ef_dset_traverse()
```

To get some information about the set, use
```
ef_dset_size()
```
