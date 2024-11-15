# Exercises - Chapter 2

1. Implement the classical version of Euclid's algorithm as described in the
   text.

2. Check what values your C system computes for `u % v` when `u` and `v` are not
   necessarily positive.

3. Implement a procedure to reduce a given fraction to lowest terms, using a
   `struct`

```c
struct fraction {
    int numerator;
    int denominator;
};
```

4. Write a function:

```c
int convert();
```

that reads a decimal number one character (digit) at a time, terminated by a
blank, and returns the value of that number.

5. Write a function:

```c
void binary(int x);
```

that prints out the binary equivalent of a number.

6. Give all the values that `u` and `v` take on when `gcd` is invoked with the
   initial call `gcd(12345, 56789)`.

7. Exactly how many C statements are executed for the call in the previous
   exercise?

8. Write a program to compute the greatest common divisor of <em>three</em>
   integers, `u`, `v`, and `w`.

9. Find the largest pair of numbers representable as integers in your C system
   whose greatest common divisor is 1.

10. Implement Euclid's algoirthm in FORTRAN or BASIC.
