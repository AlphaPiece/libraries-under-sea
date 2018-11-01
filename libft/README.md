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
* ft_itoa
* ft_ltoa
* ft_ntoa
* ft_untoa
* ft_numlen
* ft_unumlen
* ft_ntoa_base
* ft_untoa_base
* ft_sqrt
* ft_pow
* ft_ceil
* ft_floor
* ft_max
* ft_min
* ft_sum
* ft_max_intarr
* ft_min_intarr
* ft_sum_intarr
* ft_iselem
* ft_numarrcpy
* ft_factor_prime
* ft_analyze_float

### ASCII Character
* ft_isalpha
* ft_isdigit
* ft_isalnum
* ft_isascii
* ft_isspace
* ft_isprint
* ft_islower
* ft_isupper
* ft_tolower
* ft_toupper

### ASCII Character String
* ft_atoi
* ft_atol
* ft_atof
* ft_atoi_base
* ft_atol_base
* ft_isnumeric
* ft_strcat
* ft_strchr
* ft_strclr
