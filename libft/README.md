# libft

## Index
* [Memory](#Memory)
* [Number](#Number)
* [ASCII Character](#ASCII32Character)
* [ASCII Character String](#ASCII Character String)
* [File Input/Output](#File Input/Output)

## Memory

| Function | Description |
| --- | --- |
| **ft_memalloc** | Allocates (with malloc(3)) and returns a "fresh" memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL. |
| **ft_memrealloc** | Frees (with free(3)) and allocates (with malloc(3)) and returns a "fresh" memory area with the new size. The data in the previous memory location will be copied to the new one. The rest of the memory allocated is initialized to 0. If the allocation fails, the function returns NULL. |
| **ft_memset** | Writes len bytes of value c (converted to an unsigned char) to the string b. |
| **ft_bzero** | Writes n zeroed bytes to the string s. If n is zero, bzero() does nothing. |
| **ft_memcpy** | Copies n bytes from memory area src to memory area dst. If dst and src overlap, behavior is undefined. Applications in which dst and src might overlap should use ft_memmove instead.
| **ft_memccpy** | Copies bytes from string src to string dst. If the character c (as converted to an unsigned char) occurs in the string src, the copy stops and a pointer to the byte after the copy of c in the string dstis returned. Otherwise, n bytes are copied, and a NULL pointer is returned. |
| **ft_memmove** | Copies len bytes from string src to string dst. The two strings may overlap; the copy is always done in a non-destructive manner. |
| **ft_memchr** | Locates the first occurrence of c (converted to an unsigned char) in string s. |
| **ft_memcmp** | Compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long. |
| **ft_memdel** | Takes as a parameter the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL. |
| **ft_getbits** | Returns the (right-adjusted) n-bit field of x from position p. Bit position 0 is at the right end. |
| **ft_setbits** | Returns with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged. Bit position 0 is at the right end. |
| **ft_invertbits** | Inverts the n bits that begin at position p. Bit position 0 is at the right end. |
| **ft_putbits** | Puts an amount of bits from the address that x points to. |
| **ft_swap** | Swaps an amount of bits at two memory addresses. The acceptable inputs for the amount of bits are 1, 2, 4, and 8. |

## Number

| Function | Description |
| --- | --- |
| **ft_itoa** | Converts an integer with type int to an ascii character string. |
| **ft_ltoa** | Converts an integer with type long to an ascii character string. |
| **ft_ntoa** | Converts a signed integer with type intmax_t (which should be the largest signed integer type on the current using computer) defined in stddef.h to an ascii character string. |
| **ft_untoa** | Converts an unsigned integer with type uintmax_t (which should be the largest unsigned integer type on the current using computer) defined in stddef.h to an ascii character string. |
| **ft_numlen** | Counts the number of digits of a signed integer. |
| **ft_unumlen** | Counts the number of digits of an unsigned integer. |
| **ft_ntoa_base** | Performs the same as ft_ntoa, but the string is in the given base (2 ~ 16). The acceptable inputs for the third parameter is 'a' and 'A' (which decides the case of the letters in the string). |
| **ft_untoa_base** | Performs the same as ft_untoa, but the string is in the given base (2 ~ 16). The acceptable inputs for the third parameter is 'a' and 'A' (which decides the case of the letters in the string). |
| **ft_sqrt** | Gets the square root of a floating point number. |
| **ft_pow** | Gets the power of a floating point number. |
| **ft_ceil** | Gets the ceiling of a floating point number. |
| **ft_floor** | Gets the floor of a floating point number. |
| **ft_max** | Gets the maximum number among input numbers. The first parameter expects the number of input numbers. |
| **ft_min** | Gets the minimum number among input numbers. The first parameter expects the number of input numbers. |
| **ft_sum** | Gets the sum of input numbers. The first parameter expects the number of input numbers. |
| **ft_max_intarr** | Gets the maximum number in a integer array. |
| **ft_min_intarr** | Gets the minimum number in a integer array. |
| **ft_sum_intarr** | Gets the sum of all integers in a integer array. |
| **ft_iselem** | Checks if a integer is an element of an array. The acceptable inputs for byte is 1, 2, 4, and 8. |
| **ft_numarrcpy** | Copies all integers from src to dst. |
| **ft_factor_prime** | Facters a prime number. |
| **ft_analyze_float** | Analyze the inner representation of a floating number in IEEE 754 standard. |

## ASCII Character

| Function | Description |
| --- | --- |
| **ft_isalpha** | Checks if a character is an alphabet character. |
| **ft_isdigit** | Checks if a character is a digit character. |
| **ft_isalnum** | Checks if a character either an alphabet character or a digit character. |
| **ft_isascii** | Checks if a character is in ascii table. |
| **ft_isspace** | Checks if a character is a white-space character. |
| **ft_isprint** | Checks if a character is a printable character. |
| **ft_islower** | Checks if a character is an lowercase alphabet character. |
| **ft_isupper** | Checks if a character is an uppercase alphabet character. |
| **ft_tolower** | Converts a uppercase alphabet character to a lowercase alphabet character. |
| **ft_toupper** | Converts a lowercase alphabet character to a uppercase alphabet character. |

## ASCII Character String

| Function | Description |
| --- | --- |
| **ft_atoi** | Converts the initial portion of the string pointed to by str to int representation. |
| **ft_atol** | Converts the initial portion of the string pointed to by str to long integer representation. |
| **ft_atof** | Converts the initial portion of the string pointed to by str to double representation. |
| **ft_atoi_base** | Converts the initial portion of the string pointed to by str to int represention based on the given base (2 ~ 16). |
| **ft_atol_base** | Converts the initial portion of the string pointed to by str to long represention based on the given base (2 ~ 16). |
| **ft_isnumeric** | Checks if a string is an integer. |
| **ft_strnew** | Allocates (with malloc(3)) and returns a "fresh" string end- ing with '\0'. Each character of the string is initialized at '\0'. If the allocation fails the function returns NULL.
| **ft_strcapitalize** | Capitalizes the first letter of each word and transforms all other letters to lowercase. |
| **ft_strsqueeze** | Delete all the occurrences of character c in the string s. |
| **ft_strcat** | Appends a copy of the null-terminated string s2 to the end of the null-terminated string s1, then add a terminating '\0'. The string s1 must have sufficient space to hold the result. The source and destination strings should not overlap, as the behavior is undefined.|
| **ft_strlcat** | Appends string src to the end of dst. It will append at most dstsize - strlen(dst) - 1 characters. It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as it means that either dstsize is incorrect or that dst is not a proper string). |
| **ft_strncat** | Appends not more than n characters from s2, and then adds a terminating '\0'. |
| **ft_strchr** | Locates the first occurrence of c (converted to a char) in the string pointed to by s. The terminating null character is considered to be part of the string; therefore if c is '\0', the functions locate the terminating '\0'. |
| **ft_strrchr** | Performs the same as ft_strchr, except it locates the last occurrence of c. |
| **ft_strstr** | Locates the first occurrence of the null-terminated string needle in the null-terminated string haystack. |
| **ft_strnstr** | Locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched. Characters that appear after a '\0' character are not searched. | 
| **ft_strdel** | Takes as a parameter the address of a string that need to be freed with free(3), then sets its pointer to NULL.
| **ft_strclr** | Sets every character of the string to the value '\0'. |
| **ft_strlen** | Computes the length of the string s. |
| **ft_strclen** | Counts the number of characters before the first character c in the string s. |
| **ft_strcmp** | Compares lexicographically the null-terminated strings s1 and s2. |
| **ft_strncmp** | Performs the same as ft_strcmp, except it compares not more than n characters. Because ft_strncmp is designed for comparing strings rather than binary data, characters that appear after a '\0' character are not compared. |
| **ft_strequ** | Compares lexicographically s1 and s2. If the two strings are identical the function return true (1), or false (0) otherwise. |
| **ft_strnequ** | Compares lexicographically s1 and s2 up to n characters or until a '\0' is reached. If the two strings are identical, the function returns true (1), or false (0) otherwise. |
| **ft_strcpy** | Copies the string src to dst (including the terminating '\0' character.) |
| **ft_strncpy** | Copies at most len characters from src into dst. If src is less than len characters long, the remainder of dst is filled with '\0' characters. Otherwise, dst is not terminated. |
| **ft_strdup** | Allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it. |
| **ft_strstart** | Determines whether a string begins with the characters of a specified string, returning true or false as appropriate. |
| **ft_strend** | Determines whether a string ends with the characters of a specified string, returning true or false as appropriate. |
| **ft_striter** | Applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary. |
| **ft_striteri** | Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary. |
| **ft_strmap** | Applies the function f to each character of the string given as argument to create a "fresh" new string (with malloc(3)) resulting from the successive applications of f. |
| **ft_strmapi** | Applies the function f to each character of the string passed as argument by giving its index as first argument to create a "fresh" new string (with malloc(3)) resulting from the successive applications of f. |
| **ft_strtrim** | Allocates (with malloc(3)) and returns a copy of the string given as argument without white-spaces at the beginning or at the end of the string. If s has no white-spaces at the beginning or at the end, the function returns a copy of s. If the allocation fails the function returns NULL. |
| **ft_strjoin** | Allocates (with malloc(3)) and returns a "fresh" string ending with '\0', result of the concatenation of s1 and s2. If the allocation fails the function returns NULL. |
| **ft_strcompose** | Allocates (with malloc(3)) and returns a "fresh" string ending with '\0', result of the concatenation of all strings that are passed in as arguments after str_num. If the allocation fails the function returns NULL. |
| **ft_strsub** | Allocates (with malloc(3)) and returns a "fresh" substring from the string given as argument. The substring begins at indexstart and is of size len. If start and len aren’t refering to a valid substring, the behavior is undefined. If the allocation fails, the function returns NULL. |
| **ft_strsepnum** | Counts the number of substrings that are seperated by any character in the string delim. |
| **ft_strsplit** | Splits a string to an array of substrings that are seperated by any character in the string delim. The array and the substrings in the array are allocated (with malloc(3)). If the allocation fails, the function returns NULL. |
| **ft_strarrlen** | Counts the number of elements in an array. |
| **ft_strarrsort** | Sorts a string array by using the comparing function passed in as argument. |
| **ft_strarrdel** | Frees an array and the strings in the array (with free(3)). |
| **ft_check_brackets** | Checks if the brackets in a string match correctly. |
| **ft_count_subs** | Counts the number of substrings in the string s that are identical to subs. |

## File Input/Output

| Function | Description |
| --- | --- |
| **ft_putchar** | Outputs the character c to the standard output. |
| **ft_putchar_fd** | Outputs the char c to the file descriptor fd. |
| **ft_putnchar** | Outputs the character c to the standard output n times. |
| **ft_putnchar_fd** | Outpus the character c to the file descriptor n times. |
| **ft_putstr** | Outputs the string s to the standard output. |
| **ft_putstr_fd** | Outputs the string s to the file descriptor fd. |
| **ft_putlstr** | Outputs a portion of a string to the standard output. |
| **ft_putlstr_fd** | Outputs a portion of a string to a file descriptor. |
| **ft_putendl** | Outputs the string s to the standard output followed by a '\n'. |
| **ft_putendl_fd** | Outputs the string s to the file descriptor fd followed by a '\n'. |
| **ft_putnbr** | Outputs the integer n to the standard output. |
| **ft_putnbr_fd** | Outputs the integer n to the file descriptor fd. |
| **ft_printf** | Writes output to stdout, the standard output stream, under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of stdarg(3)) are converted for output. |
| **ft_dprintf** | Performs the same as ft_printf, except it writes output to the given file descriptor. |
| **ft_vdprintf** | Performs the same as ft_dprintf, except it expects a va_list argument instead of variable-length argument after the string format. |
| **ft_getchar** | Obtains the next input character from the standard input. |
| **ft_nextchar** | Gets the next character from the stack buffer. If the stack buffer is empty, gets the next character from the stdin, the standard input stream. |
| **ft_savechar** | Saves a character in the stack buffer which is shared between ft_nextchar and ft_savechar. |
| **ft_nextword** | Obtains and saves a word in the argument buffer word. A word is either a string of letters and digits beginning with a letter, or a single non-white-space character. The function returns the first character of the word, or EOF, or character ifself if it is not alpbetical. |
| **ft_nextline** | Obtains and saves a line in the argument pointer line without '\n'. A line is a succession of characters that end with '\n' (ascii code 0x0a) or with End Of File (EOF). The return value can be 1, 0 or -1 depending on whether a line has been read, when the reading has been completed, or if an error has happened respectively. |
| **ft_readline** | Performs the same as ft_nextline, except it saves the result with a '\n'. |
| **ft_read** | Obtains all the contents in a file and save them in a string. The file being read must contains less than 2^32 characters; otherwise an error happens. |
| **ft_readlines** | Obtains all the contents in a file and save each line as an element of a string array. |

## Tree: Linked List

| Function | Description |
| --- | --- |
| **ft_lstnew** | Allocates (with malloc(3)) and returns a "fresh" link. The variables content and content_size of the new link are initialized by copy of the parameters of the function. If the parameter content is null, the variable content is initialized to NULL and the variable content_size is initialized to 0 even if the parameter content_size isn’t. The variable next is initialized to NULL. If the allocation fails, the function returns NULL. |
| **ft_lstdelone** | Takes as a parameter a link’s pointer address and frees the memory of the link’s content using the function del given as a parameter, then frees the link’s memory using free(3). The memory of next must not be freed under any circumstance. Finally, the pointer to the link that was just freed must be set to NULL (quite similar to the function ft_memdel in the mandatory part). |
| **ft_lstdel** | Takes as a parameter the adress of a pointer to a link and frees the memory of this link and every successors of that link using the functions del and free(3). Finally the pointer to the link that was just freed must be set to NULL (quite similar to the function ft_memdel from the mandatory part). |
| **ft_lstadd** | Adds the element new at the beginning of the list. |
| **ft_lstiter** | Iterates the list lst and applies the function f to each link. |
| **ft_lstmap** | Iterates a list lst and applies the function f to each link to create a "fresh" list (using malloc(3)) resulting from the successive applications of f. If the allocation fails, the function returns NULL. |

##  Tree: General Tree

| Function | Description |
| --- | --- |
| **ft_gntnew** | Allocates (with malloc(3)) and sets everything to zero or NULL except for data (the data is set as the argument passed in). |
| **ft_gntheight** | Gets the height of a tree structure. |
| **ft_gntleafcount** | Counts the leaves that a tree has. |
| **ft_gntnodecount** | Counts the total nodes that a tree has. |
| **ft_gntarity** | Gets the arity of a tree (which is the maximum arity of the tree's nodes). |

## Tree: Binary Tree

| Function | Description |
| --- | --- |
| **ft_bntnew** | Allocates (with malloc(3)) and set everything to zero or NULL except for data (the data is set as the argument passed in). |
| **ft_bntview** | Prints out the view of a binary tree. |
| **ft_bntiter_in** | Iterates and applies function f to all nodes (does not modify the values of nodes) in a binary tree in inorder-traversal. |
| **ft_bntiter_pre** | Iterates and applies function f to all nodes (does not modify the values of nodes) in a binary tree in preorder-traversal. |
| **ft_bntiter_post** | Iterates and applies function f to all nodes (does not modify the values of nodes) in a binary tree in postorder-traversal. |
| **ft_bntalter_in** | Iterates and applies function f to all nodes (does modify the values of nodes) in a binary tree in inorder-traversal. |
| **ft_bntalter_pre** | Iterates and applies function f to all nodes (does modify the values of nodes) in a binary tree in preorder-traversal. |
| **ft_bntalter_post** | Iterates and applies function f to all nodes (does modify the values of nodes) in a binary tree in postorder-traversal. |

## Tree: Binary Tree : Binary Search Tree

| Function | Description |
| --- | --- |
| **ft_isbst** | Determines whether a binary tree is a binary search tree. |
| **ft_bnt_to_bst** | Transforms a binary tree to a binary search tree. |
| **ft_bstinsert** | Inserts a node into a binary search tree. The binary tree will still be a binary search tree after the insertion. |
| **ft_bstsearch** | Searches a node that has the identical data as data_ref in a binary search tree. |

## Hash-Based Structure: Hash Table

| Function | Description |
| --- | --- |
| **ft_hash_str** | Hashes a character string and returns a hash value. |
| **ft_pairnew** | Allocates (with malloc(3)) a new element for a dictionary (hash table).  The element of a dictionary contains a key and a value. |
| **ft_dictnew** | Allocates (with malloc(3)) a new dictionary (hash table) and sets every member in it as 0 or NULL. |
| **ft_dictadd** | Allocates (with ft_pairnew) a new pair (element) and adds it into the dictionary dict. |
| **ft_dictget** | Gets the corresponding value of the key given as an argument in the dictionary dict. |
| **ft_dictremove** | Removes a pair in the dictionary dict (frees with free(3)).
| **ft_dictclear** | Clears (frees with free(3)) all pairs in the dicionary dict and sets every member in dict as 0 or NULL. |
| **ft_dictdel** | Clears all pairs (with ft_dictclear) in the dictionary and frees dict (with free(3)). |
