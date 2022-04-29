#include "main.h"
/**
 * find_sqrt - finds the natural square root of a given number
 * @num: number to find find the sqaure root of
 * @root: roo tot be examine
 * Return: sqaure root if @num has a natural sqaure root,
 *         or -1 if @num does not have a nutural sqaure root
 */
int find_sqrt(int num, int root)
{
if ((root * root) == num)
return (root);

if ((root * root) > num)
return (-1);

return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - gives the natural sqaure root of a number
 * @n: number to return the square root of
 * Return: natural sqaure root if @n has a natural sqaure root,
 *         or -1 if n does not have a natural sqaure root
 */
int _sqrt_recursion(int n)
{
return (find_sqrt(n, 1));
}
