# libft

*A C library constructed in 42 Silicon Valley.*

## Index
* [Memory](#memory)
* [Numbers](#numbers)
* [ASCII Characters](#ascii-characters)
* [ASCII Character Strings](#ascii-character-strings)
* [File Input/Output](#file-inputoutput)

## [Memory](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ft/srcs/mem)

| No. | Function | Description |
| --- | --- | --- |
| 1 | **ft_memalloc** | Allocates (with malloc(3)) and returns a "fresh" memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL. |
| 2 | **ft_memfree** | Deallocates the memory allocation pointed to by the pointer that ptr points to, and set that pointer to point to NULL. |
| 3 | **ft_memrealloc** | Frees (with free(3)) and allocates (with malloc(3)) and returns a "fresh" memory area with the new size. The data in the previous memory location will be copied to the new one. The rest of the memory allocated is initialized to 0. If the allocation fails, the function returns NULL. |
| 4 | **ft_memset** | Writes len bytes of value c (converted to an unsigned char) to the string b. |
| 5 | **ft_bzero** | Writes n zeroed bytes to the string s. If n is zero, it does nothing. |
| 6 | **ft_memcpy** | Copies n bytes from memory area src to memory area dst. If dst and src overlap, behavior is undefined. Applications in which dst and src might overlap should use ft_memmove instead.
| 7 | **ft_memccpy** | Copies bytes from string src to string dst. If the character c (as converted to an unsigned char) occurs in the string src, the copy stops and a pointer to the byte after the copy of c in the string dstis returned. Otherwise, n bytes are copied, and a NULL pointer is returned. |
| 8 | **ft_memmove** | Copies len bytes from string src to string dst. The two strings may overlap; the copy is always done in a non-destructive manner. |
| 9 | **ft_memchr** | Locates the first occurrence of c (converted to an unsigned char) in string s. |
| 10 | **ft_memcmp** | Compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long. |
| 11 | **ft_memdel** | Takes as a parameter the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL. |
| 12 | **ft_getbits** | Returns the (right-adjusted) n-bit field of x from position p. Bit position 0 is at the right end. |
| 13 | **ft_setbits** | Returns with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged. Bit position 0 is at the right end. |
| 14 | **ft_invertbits** | Inverts the n bits that begin at position p. Bit position 0 is at the right end. |
| 15 | **ft_putbits** | Puts an amount of bits from the address that x points to. |
| 16 | **ft_swap** | Swaps an amount of bits at two memory addresses. The acceptable inputs for the amount of bits are 1, 2, 4, and 8. |

## [Numbers](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ft/srcs/num)

| No. | Function | Description |
| --- | --- | --- |
| 1 | **ft_itoa** | Converts an integer with type int to an ascii character string. |
| 2 | **ft_ltoa** | Converts an integer with type long to an ascii character string. |
| 3 | **ft_ntoa** | Converts a signed integer with type intmax_t (which should be the largest signed integer type on the current using computer) defined in stddef.h to an ascii character string. |
| 4 | **ft_untoa** | Converts an unsigned integer with type uintmax_t (which should be the largest unsigned integer type on the current using computer) defined in stddef.h to an ascii character string. |
| 5 | **ft_numlen** | Counts the number of digits of a signed integer. |
| 6 | **ft_unumlen** | Counts the number of digits of an unsigned integer. |
| 7 | **ft_ntoa_base** | Performs the same as ft_ntoa, but the string is in the given base (2 ~ 16). The acceptable inputs for the third parameter is 'a' and 'A' (which decides the case of the letters in the string). |
| 8 | **ft_untoa_base** | Performs the same as ft_untoa, but the string is in the given base (2 ~ 16). The acceptable inputs for the third parameter is 'a' and 'A' (which decides the case of the letters in the string). |
| 9 | **ft_sqrt** | Gets the square root of a floating point number. |
| 10 | **ft_pow** | Gets the power of a floating point number. |
| 11 | **ft_ceil** | Gets the ceiling of a floating point number. |
| 12 | **ft_floor** | Gets the floor of a floating point number. |
| 13 | **ft_max** | Gets the maximum number among input numbers. The first parameter expects the number of input numbers. |
| 14 | **ft_min** | Gets the minimum number among input numbers. The first parameter expects the number of input numbers. |
| 15 | **ft_sum** | Gets the sum of input numbers. The first parameter expects the number of input numbers. |
| 16 | **ft_max_intarr** | Gets the maximum number in a integer array. |
| 17 | **ft_min_intarr** | Gets the minimum number in a integer array. |
| 18 | **ft_sum_intarr** | Gets the sum of all integers in a integer array. |
| 19 | **ft_iselem** | Checks if a integer is an element of an array. The acceptable inputs for byte is 1, 2, 4, and 8. |
| 20 | **ft_numarrcpy** | Copies all integers from src to dst. |
| 21 | **ft_prime_factors** | Gets a prime factors representation of a natual number. |
| 22 | **ft_analyze_float** | Analyzes the inner representation of a floating number in IEEE 754 standard. |
| 23 | **ft_ftoa** | Converts double floating point number to an ascii character string. |
| 24 | **ft_randintarr** | Gets an array of random integers. |

## [ASCII Characters](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ft/srcs/chr)

| No. | Function | Description |
| --- | --- | --- |
| 1 | **ft_isalpha** | Checks if a character is an alphabet character. |
| 2 | **ft_isdigit** | Checks if a character is a digit character. |
| 3 | **ft_isalnum** | Checks if a character either an alphabet character or a digit character. |
| 4 | **ft_isascii** | Checks if a character is in ascii table. |
| 5 | **ft_isspace** | Checks if a character is a white-space character. |
| 6 | **ft_isprint** | Checks if a character is a printable character. |
| 7 | **ft_islower** | Checks if a character is an lowercase alphabet character. |
| 8 | **ft_isupper** | Checks if a character is an uppercase alphabet character. |
| 9 | **ft_tolower** | Converts a uppercase alphabet character to a lowercase alphabet character. |
| 10 | **ft_toupper** | Converts a lowercase alphabet character to a uppercase alphabet character. |

## [ASCII Character Strings](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ft/srcs/str)

| No. | Function | Description |
| --- | --- | --- |
| 1 | **ft_atoi** | Converts the initial portion of the string pointed to by str to int representation. |
| 2 | **ft_atol** | Converts the initial portion of the string pointed to by str to long integer representation. |
| 3 | **ft_atof** | Converts the initial portion of the string pointed to by str to double representation. |
| 4 | **ft_atoi_base** | Converts the initial portion of the string pointed to by str to int represention based on the given base (2 ~ 16). |
| 5 | **ft_atol_base** | Converts the initial portion of the string pointed to by str to long represention based on the given base (2 ~ 16). |
| 6 | **ft_isnumeric** | Checks if a string is an integer. |
| 7 | **ft_strnew** | Allocates (with malloc(3)) and returns a "fresh" string end- ing with '\0'. Each character of the string is initialized at '\0'. If the allocation fails the function returns NULL.
| 8 | **ft_strcapitalize** | Capitalizes the first letter of each word and transforms all other letters to lowercase. |
| 9 | **ft_strsqueeze** | Delete all the occurrences of character c in the string s. |
| 10 | **ft_strcat** | Appends a copy of the null-terminated string s2 to the end of the null-terminated string s1, then add a terminating '\0'. The string s1 must have sufficient space to hold the result. The source and destination strings should not overlap, as the behavior is undefined.|
| 11 | **ft_strlcat** | Appends string src to the end of dst. It will append at most dstsize - strlen(dst) - 1 characters. It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as it means that either dstsize is incorrect or that dst is not a proper string). |
| 12 | **ft_strncat** | Appends not more than n characters from s2, and then adds a terminating '\0'. |
| 13 | **ft_strchr** | Locates the first occurrence of c (converted to a char) in the string pointed to by s. The terminating null character is considered to be part of the string; therefore if c is '\0', the functions locate the terminating '\0'. |
| 14 | **ft_strrchr** | Performs the same as ft_strchr, except it locates the last occurrence of c. |
| 15 | **ft_strstr** | Locates the first occurrence of the null-terminated string needle in the null-terminated string haystack. |
| 16 | **ft_strnstr** | Locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched. Characters that appear after a '\0' character are not searched. | 
| 17 | **ft_strdel** | Takes as a parameter the address of a string that need to be freed with free(3), then sets its pointer to NULL.
| 18 | **ft_strclr** | Sets every character of the string to the value '\0'. |
| 19 | **ft_strlen** | Computes the length of the string s. |
| 20 | **ft_strclen** | Counts the number of characters before the first character c in the string s. |
| 21 | **ft_strcmp** | Compares lexicographically the null-terminated strings s1 and s2. |
| 22 | **ft_strncmp** | Performs the same as ft_strcmp, except it compares not more than n characters. Because ft_strncmp is designed for comparing strings rather than binary data, characters that appear after a '\0' character are not compared. |
| 23 | **ft_strequ** | Compares lexicographically s1 and s2. If the two strings are identical the function return true (1), or false (0) otherwise. |
| 24 | **ft_strnequ** | Compares lexicographically s1 and s2 up to n characters or until a '\0' is reached. If the two strings are identical, the function returns true (1), or false (0) otherwise. |
| 25 | **ft_strcpy** | Copies the string src to dst (including the terminating '\0' character.) |
| 26 | **ft_strncpy** | Copies at most len characters from src into dst. If src is less than len characters long, the remainder of dst is filled with '\0' characters. Otherwise, dst is not terminated. |
| 27 | **ft_strdup** | Allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it. |
| 28 | **ft_strstart** | Determines whether a string begins with the characters of a specified string, returning true or false as appropriate. |
| 29 | **ft_strend** | Determines whether a string ends with the characters of a specified string, returning true or false as appropriate. |
| 30 | **ft_striter** | Applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary. |
| 31 | **ft_striteri** | Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary. |
| 32 | **ft_strmap** | Applies the function f to each character of the string given as argument to create a "fresh" new string (with malloc(3)) resulting from the successive applications of f. |
| 33 | **ft_strmapi** | Applies the function f to each character of the string passed as argument by giving its index as first argument to create a "fresh" new string (with malloc(3)) resulting from the successive applications of f. |
| 34 | **ft_strtrim** | Allocates (with malloc(3)) and returns a copy of the string given as argument without white-spaces at the beginning or at the end of the string. If s has no white-spaces at the beginning or at the end, the function returns a copy of s. If the allocation fails the function returns NULL. |
| 35 | **ft_strjoin** | Allocates (with malloc(3)) and returns a "fresh" string ending with '\0', result of the concatenation of s1 and s2. If the allocation fails the function returns NULL. |
| 36 | **ft_strcompose** | Allocates (with malloc(3)) and returns a "fresh" string ending with '\0', result of the concatenation of all strings that are passed in as arguments after str_num. If the allocation fails the function returns NULL. |
| 37 | **ft_strsub** | Allocates (with malloc(3)) and returns a "fresh" substring from the string given as argument. The substring begins at indexstart and is of size len. If start and len aren’t refering to a valid substring, the behavior is undefined. If the allocation fails, the function returns NULL. |
| 38 | **ft_strsepnum** | Counts the number of substrings that are seperated by any character in the string delim. |
| 39 | **ft_strsplit** | Splits a string to an array of substrings that are seperated by any character in the string delim. The array and the substrings in the array are allocated (with malloc(3)). If the allocation fails, the function returns NULL. |
| 40 | **ft_strarrlen** | Counts the number of elements in an array. |
| 41 | **ft_strarrdup** | Copies an array of strings (with malloc(3)). |
| 42 | **ft_strarrsort** | Sorts a string array by using the comparing function passed in as argument. |
| 43 | **ft_strarrdel** | Frees an array and the strings in the array (with free(3)). |
| 44 | **ft_check_brackets** | Checks if the brackets in a string match correctly. |
| 45 | **ft_count_subs** | Counts the number of substrings in the string s that are identical to subs. |

## [File Input/Output](https://github.com/AlphaPiece/LibrariesUnderSea/tree/master/ft/srcs/fio)

| No. | Function | Description |
| --- | --- | --- |
| 1 | **ft_putchar** | Outputs the character c to the standard output. |
| 2 | **ft_putchar_fd** | Outputs the char c to the file descriptor fd. |
| 3 | **ft_putnchar** | Outputs the character c to the standard output n times. |
| 4 | **ft_putnchar_fd** | Outpus the character c to the file descriptor n times. |
| 5 | **ft_putncharln** | Outputs the character c to the standard output n times with a newline character at the end. |
| 6 | **ft_putstr** | Outputs the string s to the standard output. |
| 7 | **ft_putstr_fd** | Outputs the string s to the file descriptor fd. |
| 8 | **ft_putlstr** | Outputs a portion of a string to the standard output. |
| 9 | **ft_putlstr_fd** | Outputs a portion of a string to a file descriptor. |
| 10 | **ft_putendl** | Outputs the string s to the standard output followed by a '\n'. |
| 11 | **ft_putendl_fd** | Outputs the string s to the file descriptor fd followed by a '\n'. |
| 12 | **ft_putnbr** | Outputs the integer n to the standard output. |
| 13 | **ft_putnbr_fd** | Outputs the integer n to the file descriptor fd. |
| 14 | **ft_printf** | Writes output to stdout, the standard output stream, under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of stdarg(3)) are converted for output. |
| 15 | **ft_dprintf** | Performs the same as ft_printf, except it writes output to the given file descriptor. |
| 16 | **ft_vdprintf** | Performs the same as ft_dprintf, except it expects a va_list argument instead of variable-length argument after the string format. |
| 17 | **ft_getchar** | Obtains the next input character from the standard input. |
| 18 | **ft_nextchar** | Gets the next character from the stack buffer. If the stack buffer is empty, gets the next character from the stdin, the standard input stream. |
| 19 | **ft_savechar** | Saves a character in the stack buffer which is shared between ft_nextchar and ft_savechar. |
| 20 | **ft_nextword** | Obtains and saves a word in the argument buffer word. A word is either a string of letters and digits beginning with a letter, or a single non-white-space character. The function returns the first character of the word, or EOF, or character ifself if it is not alpbetical. |
| 21 | **ft_nextline** | Obtains and saves a line in the argument pointer line without '\n'. A line is a succession of characters that end with '\n' (ascii code 0x0a) or with End Of File (EOF). The return value can be 1, 0 or -1 depending on whether a line has been read, when the reading has been completed, or if an error has happened respectively. |
| 22 | **ft_getonechar** | Gets only the first character in a line of standard input. |

