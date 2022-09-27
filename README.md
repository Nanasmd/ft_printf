# 1. ft_printf

|  |  |
| :-: | - |
| Topic | Variadic Arguments, Parsing |
| Related | Computer Architecture |
| Stack | C |
| Evaluated | 2022-09-XX |
| English Subject | [en.subject](https://github.com/Nanasmd/ft_printf/blob/2f7f7eb05fea5ee4d41b2a770e23d710c5dca8f5/subject.pdf) |
| French Subject | [fr.subject](https://github.com/Nanasmd/ft_printf/blob/2f7f7eb05fea5ee4d41b2a770e23d710c5dca8f5/fr.subject.pdf) |

<br/>

# 2. Correction

TBC

<br/>

# 3. Summary

The ft_printf project is printfto directly implement the function. The prototype of the implemented function is as follows

```c
int ft_printf(const char *, ...);
```

<br/>

# 4. What I learned

Through this project, I learned about the principle and implementation of variable functions. I also mastered complex parsing. 
Detailed information and prior knowledge about this project are summarized below

1. Variable Argument

What is a variable factor?

            In the C language, there are functions with an unspecified number of parameters. 
            The printf function is also a function that uses variable arguments and can be used by receiving as many arguments as you want depending on the situation. A variable factor is a variable factor that can be handled by allocating a different number of parameters depending on the situation. You can enter nothing or multiple variables in the variable argument. 
           
2. Variable Function Format

            The prototype and calling method of a function with variable arguments are as follows.
            
```c
#include <stdarg.h>

void function(int args, ...)
{
	//function body
}

int main(void)
{
	function(42, /* nothing or multiple */);
	return (0);
}
```

    Arguments of functions including variable arguments consist of mandatory and optional elements. 
    In this case, the optional is a variable factor, and in order to receive the variable factor, the essential factor is required in advance. Since the number of arguments is not fixed for a variable argument, if an optional argument is received first, it is impossible to know which argument is received as a required argument in the prototype of the function.
           

    In the case of the printf function, the string part enclosed in "" (double quote) is a required factor, and from age1 to age2 is an optional factor.       In general, one of the arguments given as a required argument specifies how many optional elements are taken so that the stopping point of the optional elements can be found. Optional arguments are marked with ... , and for the above reasons, no other parameters can be placed after optional arguments.
           
3. C Variadic Macros

            To use a function (variable function) with variable arguments in C language, use the macro below. Unlike regular functions, macros only perform simple text replacement. Therefore, even if it is written similarly to the function call syntax, it does not actually call the function, so it can be said that it is more efficient than the function call syntax. However, since the type of the argument is not considered in the macro, an unintended error may occur, so be careful when using it.
            The macros 
               va_list, va_start, va_arg, va_end, and va_copy to process variable arguments are defined in stdarg.h. 
            Previously, varargs.h was used, but its use is deprecated. 
              stdarg.h is a header file added from the C89 standard. 
              In C++ , the cstdarg header file is used.
             

            An example of the process of processing variable factors using macros is as follows. 
            The sum function is a function that adds up all the integers entered as each argument and outputs the result.

```c
#include <stdio.h>
#include <stdarg.h>

void sum(int args, ...)
{
	int result;
	int tmp;

	// Part 1
	va_list ap;

	result = 0;

	// Part 2
	va_start(ap, args);

	for (int i = 0 ; i < args ; i++)
	{
		// Part 3
		tmp = va_arg(ap, int);

		result += tmp;
		printf("%d", tmp);
		if (i == args - 1)
			break;
		printf(" + ");
	}
	printf(" = %d\n", result);

	// Part 4
	va_end(ap);

}

int main(void)
{
	sumAll(1, 10);
	sumAll(2, 10, 20);
	sumAll(3, 10, 20, 30);
	sumAll(4, 10, 20, 30, 40);
	sumAll(5, 10, 20, 30, 40, 50);
	return (0);
}

// result
// 10 =10
// 10 + 20 = 30
// 10 + 20 + 30 = 60
// 10 + 20 + 30 + 40 = 100
// 10 + 20 + 30 + 40 + 50 = 100
```
Part 1 - va_list

`va_list` means a variable argument list, and ap is a pointer variable that can contain the address of the variable argument. By convention, the variable name is ap. The data type of va_list is internally defined as char * through typedef.
 
Part 2 - va_start(ap, last fixed argument)

 The `va_start` function is a macro that initializes ap of `va_list` type above. The address of the first variable argument is assigned to ap through    `va_start`. `va_start` automatically calculates the address of the variable argument and assigns it to ap simply by inputting the last required argument as a parameter. The principle makes it possible to obtain the starting address of a variable factor by measuring the size of v, the last essential factor among the given essential factors, and adding the size of v from the starting address of v. The macro does not return a value.
           
Part 3 - va_arg(ap, the type of the value to read as the second argument)

`va_arg` is a macro that allows ap to refer to (assign) the next variable argument in `va_list`. When making reference to the next variable argument, it is made to refer to the next value by sizeof(type). The above case can be thought of as making reference to the next value by sizeof(int).

When setting `var_type` , in the case of char , use int instead, and in case of float , write it as double instead and convert it. The reason for doing this is that when a specific value is written in memory, it is recorded in units of the address system. Through this, the Byte Padding effect occurs, and types below 4 bytes based on the 32-bit address system are treated as 4 bytes int, type converted to their own type, and the value is read. 
// Example : char ch = (char)va_arg(ap, int);
               
`va_copy` is used in situations where you need to save the current location. For example, when pointer operation is repeated in a loop, it is used when the location needs to be saved. 
We initialize dest with a copy of src as we did with the va_arg function. The macro does not return a value.
             
Part 4 - va_end(ap)

Allocates a `NULL` pointer to the `va_list` type pointer variable that refers to the variable argument list and is used to end the use of the variable argument. As a result, by using va_arg to allocate a `NULL` pointer to a pointer that refers to a specific memory space, there is no space to refer to. 
The macro does not return a value.
           

Even if the `va_end` macro is not actually used, the operation of the program is not affected. On Intel CPUs, va_end does nothing. However, they can play a significant role in compatibility with other platforms, so they are added routinely. It also contributes to stability by ensuring that nothing is referenced when attempting to use an already used `va_list`.

<br/>

# 5. Features

* `ft_printf` The usage of the implemented function is <stdio.h> the printf same as above, and the use of format qualifiers through variable arguments is supported. The available format modifiers are:

|  |  |
| - | - |
| Flag | `-` `0` `#` `+` ` ` |
| Width | `<numbers>` `*`  |
| Precision | `.<numbers>` `.*` |
| Type | `c` `s` `p` `d` `i` `u` `x` `X` `%` |

* `ft_printf` The function does not use dynamic memory allocation to print the given string. Therefore, the buffer management function is not supported.

<br/>

# 6. Flow chart

(TBC)

<br/>

# 7. How to compile the project

The output of this project includes creating a static library `Makefile`. `Makefile` supports common rules (`all`, `clean`, `fclean`, `re`) and `bonus` rule.
* For the Mandatory
> make all
* For the Bonus
> make bonus

<br/>

# 8. How to include the static library

In an external project, when you want to use the static library that is the result of this project, use the following command.

> gcc -Wall -Werror -Wextra -L \<directory-name> -l \<library-name>
