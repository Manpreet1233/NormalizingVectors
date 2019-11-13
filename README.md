# NormalizingVectors

Consider,X, a (mathematical) vector with n items, where each item is
of type double, and where n is in [1-9].
     X=[v1,v2, ... vn]
X's length, N, is defined as:
     N=sqrt(v1**2 + v2**2 + ... + vn**2), where "x**2" denotes x squared
X normalized is defined as:
     [v1/N, v2/N, ... vn/N]

Write a C program that reads various vectors from stdin,
normalizes them, and prints them on stdout, one at a time.
Your program terminates when user enters 0 or EOF (see below).

Correct user input is as follows:

  -A vector is entered by entering an integer indicating its number
   of items, followed by at least one space (and possibly more whitespace),
   followed by the actual items, followed by <enter>. Vector items are
   separated by whitespace (possibly including <enter>).

   e.g., the following 2 lines show how the user could input vectors

   [ 3.4, 24.8, 8.0, -6, 22 ] and [ 99, 107 ]:
   5 3.4 24.8 8.0 -6 22
   2 +99 107

  -Note that a vector may be split over multiple lines. e.g., a user might
   enter vector [33.4, -6, -2, 6] as follows:

   4 33.4
   -6
   -2 6

  -When the user enters a line starting with 0 (zero), the program
   terminates. The program also terminates when the end of input is
   reached (EOF, which is ctrl-d).

  -If the user enters more items on a line than the initial integer indicated,
   the program ignores the extra items on that line.

  -If the user enters too few items on a line than the initial integer
   indicated, the program finds the remaining items on subsequent line(s).

  -If the program is starting to read the next input vector, but finds something
   other than an integer as the first item on the line, or an integer not in
   [1-9], then the program:
     -prints "BAD INPUT" on stderr,
     -ignores the rest of this input line,
     -continues on to read the next line (assumed to be the start of the next
      input vector)

  -If the user enters invalid characters in the item list, such as commas, or
   or non-digit characters (with the exception of '.', '+', '-', as appropriate),
   then the program behaves as above, i.e.:
     -prints "BAD INPUT" on stderr,
     -ignores the rest of this input line,
     -continues on to read the next line (assumed to be the start of the next
      input vector).

Your program must:
  -Use a C array to hold a vector.
  -Use #define macros as appropriate, e.g., for maximum items, exit codes, etc.
  -Make good use of functions, e.g., for normalizing, printing vector, reading
   vector, etc.
  -NOT use global variables
  -Consist of files named assign2main.c, assign2funcs.c assign2funcs.h, with
   appropriate contents
  -For each vector, print "VECTOR: " followed by the input vector, followed
   by "NORMALIZED: " followed by that vector normalized, followed by newline
  -Print vectors enclosed in square brackets, with commas and spaces as
   follows: [ 1.200, 9.000 -3.214 ]
  -Exit with 0 if there was no bad input, and with 1 if any input was bad.

Below is an example of running the C program. Your output should look identical:
>assign2
3 1 2 3
VECTOR: [ 1.000, 2.000, 3.000 ] NORMALIZED: [ 0.267, 0.535, 0.802 ]
4 -9 2.2 -0.765 2222
VECTOR: [ -9.000, 2.200, -0.765, 2222.000 ] NORMALIZED: [ -0.004, 0.001, -0.000, 1.000 ]
3 1 2 3 4 5 6
VECTOR: [ 1.000, 2.000, 3.000 ] NORMALIZED: [ 0.267, 0.535, 0.802 ]
2 -9 +10
VECTOR: [ -9.000, 10.000 ] NORMALIZED: [ -0.669, 0.743 ]
4xyz 1 2 3 4
BAD INPUT
3 1
2 3
VECTOR: [ 1.000, 2.000, 3.000 ] NORMALIZED: [ 0.267, 0.535, 0.802 ]
3 1 xx 4
BAD INPUT
11 1 2 3 4 5 6 7 8 9 9 9
BAD INPUT
3 1 2 3
VECTOR: [ 1.000, 2.000, 3.000 ] NORMALIZED: [ 0.267, 0.535, 0.802 ]
0
>
echo $?
1
>assign2
3 1 2 3
VECTOR: [ 1.000, 2.000, 3.000 ] NORMALIZED: [ 0.267, 0.535, 0.802 ]
0
>
echo $?
0
>
