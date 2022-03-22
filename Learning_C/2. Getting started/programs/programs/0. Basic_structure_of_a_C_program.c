// Basic Structure of a C program
// This is a comment

/*This is a 
Multi-line comment.
comments are never executed, they mostly act as documentations to code*/

#include <stdio.h> 
/* #include 'includes' another file into your program. H
ere we are including the standard input/output library functions' header file that is necessary since important functions like printf is part of it */

/* main() is basically a function that is NECESSARY for a C program to work in ideal cases since it is from main() where the execution begins (excluding preprocessor lines) .
int is the return data type of the function... We'll get to those concepts at a later point in time
*/

int main()
{
  // printf, part of the standard input output library, prints its parameters on the screen. 
  printf("This line would be printed on screen upon executing! ");
  // 'return' returns some data upon exiting the function. Here the main() function returns the integer 0
  // We will get more into functions in a later stage. 
  return 0;
}

// Curly braces are used to denote constructs such as blocks of code
// Semicolons are used for intendation in most of the compiled languages including C. 
// This simply means that spaces between tokens, e.g., doesn't even matter here unlike in languages like python. 
