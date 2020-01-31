# libft

![Intro Image](https://user-images.githubusercontent.com/30487160/73509017-b6966680-43ab-11ea-8955-68753e1cd165.jpg)

*A basic C library constructed in 42 Silicon Valley.*

## Index
* [Memory](#memory)
* [Numbers](#numbers)
* [ASCII Characters](#ascii-characters)
* [ASCII Character Strings](#ascii-character-strings)
* [File Input/Output](#file-inputoutput)

## [Memory](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ft/src/mem)

| Return Type | Function Name | Parameter List | Description |
| --- | --- | --- | --- |
| void * | **ft_memalloc** | (size_t size) | Allocates (with malloc(3)) and returns a "fresh" memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL. |
| void | **ft_memfree** | (void \*\*p) | Deallocates the memory allocation pointed to by the pointer that ptr points to, and set that pointer to point to NULL. |
| int | **ft_memcmp** | (void \*dst, const void \*src, size_t n) | Compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long. |
| void \* | **ft_memchr** | (const void \*s, int c, size_t n) | Locates the first occurrence of c (converted to an unsigned char) in string s. |
| void \* | **ft_memcpy** | (void \*dst, const void \*src, size_t n) | Copies n bytes from memory area src to memory area dst. If dst and src overlap, behavior is undefined. Applications in which dst and src might overlap should use ft_memmove instead. |
| void \* | **ft_memccpy** | (void \*dst, const void \*src, size_t n) | Copies bytes from string src to string dst. If the character c (as converted to an unsigned char) occurs in the string src, the copy stops and a pointer to the byte after the copy of c in the string dstis returned. Otherwise, n bytes are copied, and a NULL pointer is returned. |
| void \* | **ft_memmove** | (void \*dst, const void \*srcs, size_t len) | Copies len bytes from string src to string dst. The two strings may overlap; the copy is always done in a non-destructive manner. |
| void | **ft_swap** | void \*p1, void \*p2, size_t byte) | Swaps a number of bytes at two memory addresses. The acceptable inputs for the number of bytes are 1, 2, 4, and 8. |
| void | **ft_bzero** | (void \*s, size_t n) | Writes n zeroed bytes to the string s. If n is zero, it does nothing. |
| void \* | **ft_memset** | (void \*b, int c, size_t len) | Writes len bytes of value c (converted to an unsigned char) to the string b. |
| unsigned int | **ft_getbits** | (unsigned int x, int p, int n) |Returns the (right-adjusted) n-bit field of x from position p. Bit position 0 is at the right end. |
| unsigned int | **ft_setbits** | (unsigned int x, int p, int n, unsigned int y) | Returns with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged. Bit position 0 is at the right end. |
| unsigned int | **ft_invertbits** | (unsigned int x, int p, int n) | Inverts the n bits that begin at position p. Bit position 0 is at the right end. |
| void | **ft_putbits** | (void \*x, size_t n) | Prints n bits from the address that x points to. |
| uint32_t | **ft_ptrhash** | (void \*p) | Returns a 32-bit long hash integer by hashing the pointer (virtual address) p. |

## [Numbers](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ft/src/num)

| Return Type | Function Name | Parameter List | Description |
| --- | --- | --- | --- |
| int | **ft_numlen** | (intmax_t n) | Counts the number of digits of a signed integer. |
| int | **ft_unumlen** | (uintmax_t un) | Counts the number of digits of an unsigned integer. |
| char \* | **ft_itoa** | (int n) | Converts an integer with type int to an ascii character string. |
| char \* | **ft_ltoa** | (long n) | Converts an integer with type long to an ascii character string. |
| char \* | **ft_ntoa** | (intmax_t n) | Converts a signed integer with type intmax_t (which should be the largest signed integer type on the current using computer) defined in stddef.h to an ascii character string. |
| char \* | **ft_untoa** | (uintmax_t un) | Converts an unsigned integer with type uintmax_t (which should be the largest unsigned integer type on the current using computer) defined in stddef.h to an ascii character string. |
| char \* | **ft_ntoa_base** | (intmax_t n, int base, char hex_case_a) | Performs the same as ft_ntoa, but the string is in the given base (2 ~ 16). The acceptable inputs for the third parameter is 'a' and 'A' (which decides the case of the letters in the string). |
| char \* | **ft_untoa_base** | (uintmax_t un, int base, char hex_case_a) | Performs the same as ft_untoa, but the string is in the given base (2 ~ 16). The acceptable inputs for the third parameter is 'a' and 'A' (which decides the case of the letters in the string). |
| char \* | **ft_ftoa** | (double n) | Converts double floating point number to an ascii character string. |
| void | **ft_swap** | (int \*a, int \*b) | Swaps the integers on address a and b. |
| int | **ft_max** | (int total_no, ...) | Gets the maximum number among input numbers. The first parameter expects the number of input numbers. |
| int | **ft_min** | (int total_no, ...) | Gets the minimum number among input numbers. The first parameter expects the number of input numbers. |
| int | **ft_sum** | (int total_no, ...) | Gets the sum of input numbers. The first parameter expects the number of input numbers. |
| int | **ft_max_intarr** | (int arr\[\], int len) | Gets the maximum number in a integer array. |
| int | **ft_min_intarr** | (int arr\[\], int len) | Gets the minimum number in a integer array. |
| int | **ft_sum_intarr** | (int arr\[\], int len) | Gets the sum of all integers in a integer array. |
| double | **ft_rand** | (void) | Returns a random floating point number between 0 and 1. |
| int | **ft_randint** | (int lower, int upper) | Returns a random integer between lower and upper. |
| int | **ft_randintarr** | (int lower, int upper, int len) | Returns an array of random integers (between lower and upper) of length len. |
| uint32_t | **ft_inthash** | (int n) | Returns a 32-bit hash integer by hashing the integer n. |

## [ASCII Characters](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ft/src/chr)

| Return Type | Function Name | Parameter List | Description |
| --- | --- | --- | --- |
| t_bool | **ft_islower** | (int c) | Checks if a character is an lowercase alphabet character. |
| t_bool | **ft_isupper** | (int c) | Checks if a character is an uppercase alphabet character. |
| t_bool | **ft_isalpha** | (int c) | Checks if a character is an alphabet character. |
| t_bool | **ft_isdigit** | (int c) | Checks if a character is a digit character. |
| t_bool | **ft_isalnum** | (int c) | Checks if a character either an alphabet character or a digit character. |
| t_bool | **ft_isspace** | (int c) | Checks if a character is a white-space character. |
| t_bool | **ft_isprint** | (int c) | Checks if a character is a printable character. |
| t_bool | **ft_isascii** | (int c) | Checks if a character is in ascii table. |
| int | **ft_tolower** | (int c) | Converts a uppercase alphabet character to a lowercase alphabet character. |
| int | **ft_toupper** | (int c) | Converts a lowercase alphabet character to a uppercase alphabet character. |

## [ASCII Character Strings](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ft/src/str)

| Return Type | Function Name | Parameter List | Description |
| --- | --- | --- | --- |
| char \* | **ft_strnew** | (size_t size) | Allocates (with malloc(3)) and returns a "fresh" string end- ing with '\0'. Each character of the string is initialized at '\0'. If the allocation fails the function returns NULL.
| void | **ft_strclr** | (char \*s) | Sets every character of the string to the value '\0'. |
| void | **ft_strdel** | (char \*\*p) | Takes as a parameter the address of a string that need to be freed with free(3), then sets its pointer to NULL.
| int | **ft_atoi** | (const char \*s ) | Converts the initial portion of the string pointed to by str to int representation. |
| long | **ft_atol** | (const char \*s) | Converts the initial portion of the string pointed to by str to long integer representation. |
| int | **ft_atoi_base** | (const char \*s, int base) | Converts the initial portion of the string pointed to by str to int represention based on the given base (2 ~ 16). |
| long | **ft_atol_base** | (const char \*s, int base) | Converts the initial portion of the string pointed to by str to long represention based on the given base (2 ~ 16). |
| double | **ft_atof** | (const char \*s) | Converts the initial portion of the string pointed to by str to double representation. |
| t_bool | **ft_isnumeric** | (char \*s) | Checks if a string is an integer. |
| t_bool | **ft_strstart** | (const char \*s, const char \*subs) | Determines whether a string begins with the characters of a specified string, returning true or false as appropriate. |
| t_bool | **ft_strend** | (const char \*s, const char \*subs) | Determines whether a string ends with the characters of a specified string, returning true or false as appropriate. |
| int | **ft_strcmp** | (const char \*s1, const char \*s2) | Compares lexicographically the null-terminated strings s1 and s2. |
| int | **ft_strncmp** | (const char \*s1, const char \*s2, size_t n) | Performs the same as ft_strcmp, except it compares not more than n characters. Because ft_strncmp is designed for comparing strings rather than binary data, characters that appear after a '\0' character are not compared. |
| t_bool | **ft_strequ** | (const char \*s1, const char \*s2) | Compares lexicographically s1 and s2. If the two strings are identical the function return true, or false otherwise. |
| t_bool | **ft_strnequ** | (const char \*s1, const char \*s2, size_t n) | Compares lexicographically s1 and s2 up to n characters or until a '\0' is reached. If the two strings are identical, the function returns true, or false otherwise. |
| char \* | **ft_strchr** | (const char \*s, int c) | Locates the first occurrence of c (converted to a char) in the string pointed to by s. The terminating null character is considered to be part of the string; therefore if c is '\0', the functions locate the terminating '\0'. |
| char \* | **ft_strrchr** | (const char \*s, int c) | Performs the same as ft_strchr, except it locates the last occurrence of c. |
| char \* | **ft_strstr** | (const char \*haystack, const char \* needle) | Locates the first occurrence of the null-terminated string needle in the null-terminated string haystack. |
| char \* | **ft_strnstr** | (const char \*haystack, const char \* needle, size_t len) | Locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched. Characters that appear after a '\0' character are not searched. | 
| size_t | **ft_strlen** | (const char \*s) | Computes the length of the string s. |
| size_t | **ft_strclen** | (const char \*s, char \*delim) | Counts the number of characters before any of the characters in delim is met in the string s. |
| char \* | **ft_strcat** | (char \*dst, const char \*src) | Appends a copy of the null-terminated string s2 to the end of the null-terminated string s1, then add a terminating '\0'. The string s1 must have sufficient space to hold the result. The source and destination strings should not overlap, as the behavior is undefined.|
| char \* | **ft_strncat** | (char \*s1, const char \*s2, size_t n) | Appends not more than n characters from s2, and then adds a terminating '\0'. |
| size_t | **ft_strlcat** | (char \*dst, cosnt char \*src, size_t dstsize) | Appends string src to the end of dst. It will append at most dstsize - strlen(dst) - 1 characters. It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as it means that either dstsize is incorrect or that dst is not a proper string). |
| char \* | **ft_strcpy** | (char \*dst, const char \*src) | Copies the string src to dst (including the terminating '\0' character.) |
| char \* | **ft_strncpy** | (char \*dst, const char \*srcs, size_t len) | Copies at most len characters from src into dst. If src is less than len characters long, the remainder of dst is filled with '\0' characters. Otherwise, dst is not terminated. |
| char \* | **ft_strdup** | (const char \*s) | Allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it. |
| void | **ft_striter** | (char \*s, void (\*f)(char \*)) | Applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary. |
| void | **ft_striteri** | (char \*s, void (\*f)(unsigned int, char \*)) | Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary. |
| void | **ft_strmap** | (const char \*s, char (\*f)(char)) | Applies the function f to each character of the string given as argument to create a "fresh" new string (with malloc(3)) resulting from the successive applications of f. |
| char \* | **ft_strmapi** | (const char \*s, char (\*f)(unsigned int, char)) | Applies the function f to each character of the string passed as argument by giving its index as first argument to create a "fresh" new string (with malloc(3)) resulting from the successive applications of f. |
| char \* | **ft_strtrim** | (const char \*s) | Allocates (with malloc(3)) and returns a copy of the string given as argument without white-spaces at the beginning or at the end of the string. If s has no white-spaces at the beginning or at the end, the function returns a copy of s. If the allocation fails the function returns NULL. |
| void | **ft_strcap** | (char s\[\]) | Converts every capital letter to uppercase, and others to lowercase. |
| void | **ft_strsqz** | (char s\[\], char c) | Removes all occurrences of c in s. |
| int | **ft_strsepn** | (const char \*s, char \*delim) | Counts the number of substrings that are seperated by any character in delim. |
| int | **ft_strsubn** | (const char \*s, consrt char \*subs) | Counts the number of substrings in s that are identical to subs. |
| char \* | **ft_strjoin** | (consrt char \*s1, char consrt \*s2) | Allocates (with malloc(3)) and returns a "fresh" string ending with '\0', result of the concatenation of s1 and s2. If the allocation fails the function returns NULL. |
| char \* | **ft_strcompose** | (int str_num, ...) | Allocates (with malloc(3)) and returns a "fresh" string ending with '\0', result of the concatenation of all strings that are passed in as arguments after str_num. If the allocation fails the function returns NULL. |
| char \* | **ft_strsub** | (const char \*s, unsigned int start, size_t len) | Allocates (with malloc(3)) and returns a "fresh" substring from the string given as argument. The substring begins at indexstart and is of size len. If start and len aren’t refering to a valid substring, the behavior is undefined. If the allocation fails, the function returns NULL. |
| char \*\* | **ft_strsplit** | (const char \*s, char \*delim) | Splits s to an array of substrings that are seperated by any character in delim. The array and the substrings in the array are allocated (with malloc(3)). If the allocation fails, the function returns NULL. |
| size_t | **ft_strarrlen** | (consrt char \*arr\[\]) | Counts the number of elements in an array. |
| char \*\* | **ft_strarrdup** | (char \*dst\[\], consrt char \*src\[\]) | Copies an array of strings (with malloc(3)). |
| void | **ft_strarrsort** | char \*arr[], int len, int (\*cmp)(const char \*, const char \*)) | Sorts a string array by using the comparing function passed in as argument. |
| void | **ft_strarrdel** | (char \*arr\[\]) | Frees an array and the strings in the array (with free(3)). |
| uint32_t | **ft_strhash** | (char \*s) | Returns a 32-bit hash integer by hashing the string s. |

## [File Input/Output](https://github.com/AlphaPiece/libraries-under-sea/tree/master/ft/src/fio)

| Return Type | Function Name | Parameter List | Description |
| --- | --- | --- | --- |
| void | **ft_putchar** | (char c) | Outputs the character c to the standard output. |
| void | **ft_dputchar** | (const int fd, char c) | Outputs the char c to the file descriptor fd. |
| void | **ft_putnchar** | (char c, int n) | Outputs the character c to the standard output n times. |
| void | **ft_putncharln** | (char c, int n) | Outputs the character c to the standard output n times with a newline character at the end. |
| void | **ft_dputnchar** | (const int fd, char c, int n) | Outpus the character c to the file descriptor n times. |
| void | **ft_putstr** | (const char \*s) | Outputs the string s to the standard output. |
| void | **ft_dputstr** | (const int fd, const char \*s) | Outputs the string s to the file descriptor fd. |
| void | **ft_putlstr** | (const char \*s, unsigned int start, size_t len) | Outputs a portion of a string to the standard output. |
| void | **ft_dputlstr** | (const int fd, const char \*s, unsigned int start, size_t len) | Outputs a portion of a string to a file descriptor. |
| void | **ft_putnbr** | (int n) | Outputs the integer n to the standard output. |
| void | **ft_dputnbr** | (const int fd, int n) | Outputs the integer n to the file descriptor fd. |
| int | **ft_printf** | (const char \*fmt, ...) | Writes output to stdout, the standard output stream, under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of stdarg(3)) are converted for output. |
| int | **ft_dprintf** | (const int fd, const char \*fmt, ...) | Performs the same as ft_printf, except it writes output to the given file descriptor. |
| int | **ft_vdprintf** | (const int fd, const char \*fmt, va_list args) | Performs the same as ft_dprintf, except it expects a va_list argument instead of variable-length argument after the string format. |
| int | **ft_getchar** | (void) | Obtains the next input character from the standard input. |
| int | **ft_getonechar** | (void) | Gets only the first character in a line of standard input. |
| int | **ft_nextline** | (const int fd, char \*\*line) | Obtains and saves a line in the argument pointer line without '\n'. A line is a succession of characters that end with '\n' (ascii code 0x0a) or with End Of File (EOF). The return value can be 1, 0 or -1 depending on whether a line has been read, when the reading has been completed, or if an error has happened respectively. |
