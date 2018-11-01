# libft

### Memory
| Function | Description |
| --- | --- |
| **ft_memalloc** | Allocates (with malloc(3)) and returns a “fresh” memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL. |
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

### Number
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

### ASCII Character
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

### ASCII Character String
| Function | Description |
| --- | --- |
| **ft_atoi** | Converts the initial portion of the string pointed to by str to int representation. |
| **ft_atol** | Converts the initial portion of the string pointed to by str to long integer representation. |
| **ft_atof** | Converts the initial portion of the string pointed to by str to double representation. |
| **ft_atoi_base** | Converts the initial portion of the string pointed to by str to int represention based on the given base (2 ~ 16). |
| **ft_atol_base** | Converts the initial portion of the string pointed to by str to long represention based on the given base (2 ~ 16). |
| **ft_isnumeric** | Checks if a string is an integer. |
| **ft_strnew** | Allocates (with malloc(3)) and returns a “fresh” string end- ing with '\0'. Each character of the string is initialized at '\0'. If the allocation fails the function returns NULL.
| **ft_strcapitalize** | Capitalizes the first letter of each word and transforms all other letters to lowercase. |
| **ft_strsqueeze** | 
| **ft_strcat** | Appends a copy of the null-terminated string s2 to the end of the null-terminated string s1, then add a terminating '\0'. The string s1 must have sufficient space to hold the result. The source and destination strings should not overlap, as the behavior is undefined.|
| **ft_strlcat** |
| **ft_strncat** |
| **ft_strchr** | Locates the first occurrence of c (converted to a char) in the string pointed to by s. The terminating null character is considered to be part of the string; therefore if c is '\0', the functions locate the terminating '\0'. |
| **ft_strrchr** |
| **ft_strstr** |
| **ft_strnstr** |
| **ft_strdel** |
| **ft_strclr** | Sets every character of the string to the value '\0'. |
| **ft_strlen** | Computes the length of the string s. |
| **ft_strclen** | Counts the number of characters before the first character c in the string s. |
| **ft_strcmp** | Compares lexicographically the null-terminated strings s1 and s2. |
| **ft_strncmp** |
| **ft_strequ** |
| **ft_strnequ** |
| **ft_strcpy** | Copies the string src to dst (including the terminating '\0' character.) |
| **ft_strncpy** |
| **ft_strdup** |
| **ft_strstart** |
| **ft_strend** |
| **ft_striter** |
| **ft_striteri** |
| **ft_strmap** |
| **ft_strmapi** |
| **ft_strtrim** |
| **ft_strjoin** |
| **ft_strcompose** | 
| **ft_strsub** |
| **ft_strsepnum** |
| **ft_strsplit** |
| **ft_strarrlen** |
| **ft_strarrsort** |
| **ft_strarrdel** |
| **ft_check_brackets** |
| **ft_count_subs** |
