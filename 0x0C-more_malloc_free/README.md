# MORE MALLOC, FREE

### 0. _Trust no one_

- [x] **Write a function that allocates memory using `malloc`.**

- Prototype: `void *malloc_checked(unsigned int b);`
- Returns a pointer to the allocated memory
- if `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of `98`

- :file_folder: : `0-malloc_checked.c`


### 1. _string_\__nconcat_

- [ ] **Write a function that concatenates two strings.**

- Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
- The returned pointer shall point to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null terminated
- if the function fails, it should return `NULL`
- if `n` is greater or equal to the length of `s2` then use the entire string `s2`
- if `NULL` is passed, treat it as an empty string

- :file_folder: : `1-string_nconcat.c`


### 2. \__calloc_

- [ ] **Write a function that allocates memory for an array, using `malloc`.**

- Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`
- The `_calloc` function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory.
- The memory is set to zero
- if `nmemb` or `size` is `0`, then `_calloc` returns `NULL`
- if `malloc` fails, then `_calloc` returns `NULL`

- :file_folder: : `2-calloc.c`


### 3. _array_\__range_

- [x] **Write a function that creates an array of integers.**

- Prototype: `int *array_range(int min, int max);`
- The array created should contain all the values from `min` (included) to `max` (included), ordered from `min` to `max`
- if `min` > `max`, return `NULL`
- if `malloc` fails, return `NULL`

- :file_folder: : `3-array_range.c`


### 4. \__realloc_

> [!NOTE]
> <sup>ADVANCED</sup>

- [ ] **Write a function that reallocates a memory block using `malloc` and `free`**

- Prototype: `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`
- where `ptr` is a pointer to the memory previously allocated with a call to `malloc` : `malloc(old_size)`
- `old_size` is the size, in bytes, of the allocated space for `ptr`
- and `new_size` is the new size, in bytes of the new memory block
- The contents will be copied to the newly allocated space, in the range from the start of `ptr` up to the minimum of the old and new sizes
- if `new_size` > `old_size`, the "added" memory should not be initialized
- if `new_size` == `old_size` do not do anything and return `ptr`
- if `ptr` is `NULL`, then the call is equivalent to `malloc(new_size)`, for all values of `old_size` and `new_size`
- if `new_size` is equal to zero, and `ptr` is not `NULL`, then the call is equivalent to `free(ptr)`. Return `NULL`
- Don't forget to free `ptr` when it makes sense

- :file_folder: : `100-realloc`


### 5. _We must accept finite disappointment, but never lose infinite hope_

> [!NOTE]
> <sup>ADVANCED</sup>

- [ ] **Write a program that multiplies two positive numbers.**

- Usage: `mul num1 num2`
- `num1` and `num2` will be passed in base 10
- Print the result, followed by a new line
- If the number of arguments is incorrect, print `Error`, followed by a new line, and exit with a status of `98`
- `num1` and `num2` should only be composed of digits, if not, print `Error`, followed by a new line, and exit with a status of `98`
- You are allowed to use more than functions in your file

- :file_folder: : `101-mul.c`