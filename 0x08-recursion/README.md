# RECURSION

## Tasks

### **0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget** <br />
Write a function that prints a string, followed by a new line.

* Prototype: `void _puts_recursion(char *s);`
- File: `0-puts_recursion.c`

### **1. Why is it so important to dream? Because, in my dreams we are together** <br />
Write a function that prints a string in reverse.

* Prototype: `void _print_rev_recursion(char *s);`
- File: `1-print_rev_recursion.c`

### **2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange** <br />
Write a function that returns the length of a string.

* Prototype: `int _strlen_recursion(char *s);`
- File: `2-strlen_recursion.c`

### **3. You mustn't be afraid to dream a little bigger, darling**<br />
Write a function that returns the factorial of a given number.

* Prototye: `int factorial(int n);`
- If `n` is lower than `0`, the function should return `-1` to indicate an error
* Factorial of `0` is `1`
- File: `3-factorial.c`

### **4. Once an idea has taken hold of the brain it's almost impossible to eradicate** <br />
Write a function that returns the value of `x` raised to the power of `y`.

* Prototye: `int _pow_recursion(int x, int y);`
- If `y` is lower than `0`, the function should return `-1`
* File: `4-pow_recursion.c`

### **5. Your subconscious is looking for the dreamer** <br />
Write a function that returns the natural square root of a number.

* Prototye: `int _sqrt_recursion(int n);`
- If `n` does not have a natural square root, the function should return `-1`
* File: `5-sqrt_recursion.c`

### **6. Inception. Is it possible?** <br />
Write a function that returns `1` if the input integer is a prime number, otherwise return `0`.

* Prototype: `int is_prime_number(int n);`
- File: `6-is_prime_number.c`

## _Advanced Tasks_

### **7. They say we only use a fraction of our brains true potential. Now that's when we're awake. When we're asleep we can do almost anything** <br />
Write a function that returns `1` if a string is a palindrome and `0` if not.

* Prototye: `int is_palindrome(char *s);`
- An empty string is a palindrome
* File: `100-is_palindrome.c`

### **8. Inception. Now, before you bother telling me it's impossible...** <br />
Write a function that compares two strings and returns `1` if the strings can be considered identical, otherwise return `0`.

* Prototype: `int wildcmp(char *s1, char *s2);`
- `s2` can contain the special character `*`.
* The special char `*` can replace any string (including an empty string)
- File: `101-wildcmp.c`