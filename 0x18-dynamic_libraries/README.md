# Project 0x18.C - Dynamic libraries

![Imagen](https://1.bp.blogspot.com/-536Uvf6Ddkc/Vv65-W3l75I/AAAAAAAAX8Y/qb5tjqodJwk8x-HVo4cTyotHYBwC38DkQ/s1600/DynLyn-figure2.gif)

## Resources

#### Read or wactch:

- [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)
- [create dynamic libraries on Linux](https://www.google.com/search?q=linux+create+dynamic+library&cad=h)
- [Technical Writing](https://students-support.hbtn.io/hc/en-us/restricted?return_to=https%3A%2F%2Fstudents-support.hbtn.io%2Fhc%2Fen-us%2Farticles%2F360023750254)

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/2012/04/feynman-technique/), **without the help of Google:**

### General

- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable ```$LD_LIBRARY_PATH``` and how to use it
- What are the differences between static and shared libraries
- Basic usage ```nm```, ```ldd```, ```ldconfig```

## Requirements

### C

- Allowed editors: ```vi```, ```vim```, ```emacs```
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with ```gcc 4.8.4``` using the flags ```-Wall -Werror -Wextra and -pedantic```
- All your files should end with a new line
- A ```README.md``` file, at the root of the folder of the project is mandatory
- Your code should use the ```Betty``` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- You don’t have to push ```_putchar.c```, we will use our file. If you do it won’t be taken into account
- In the following examples, the ```main.c``` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own ```main.c``` files at compilation. Our ```main.c``` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function ```_putchar``` should be included in your header file called ```holberton.h```
- Don’t forget to push your header file

### Bash

- Allowed editors: ```vi```, ```vim```, ```emacs```
- All your scripts will be tested on Ubuntu 14.04 LTS
- All your files should end with a new line [(why?)](https://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789)
- The first line of all your files should be exactly ```#!/bin/bash```
- A ```README.md``` file, at the root of the folder of the project, describing what each script is doing
- All your files must be executable

## More Info

### Manual QA Review

**It is your responsibility to request a review for your blog from a peer before the project’s deadline. If no peers have been reviewed, you should request a review from a TA or staff member.**