Sign

mandatory

Write a function that prints the sign of a number.



Prototype: int print_sign(int n);

Returns 1 and prints + if n is greater than zero

Returns 0 and prints 0 if n is zero

Returns -1 and prints - if n is less than zero

julien@ubuntu:~/0x02$ cat 5-main.c

#include "main.h"



/**
 *
 *  * main - check the code.
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    int r;



	        r = print_sign(98);

		    _putchar(',');

		        _putchar(' ');

			    _putchar(r + '0');

			        _putchar('\n');

				    r = print_sign(0);

				        _putchar(',');

					    _putchar(' ');

					        _putchar(r + '0');

						    _putchar('\n');

						        r = print_sign(0xff);

							    _putchar(',');

							        _putchar(' ');

								    _putchar(r + '0');

								        _putchar('\n');

									    r = print_sign(-1);

									        _putchar(',');

										    _putchar(' ');

										        _putchar(r + '0');

											    _putchar('\n');

											        return (0);

}
