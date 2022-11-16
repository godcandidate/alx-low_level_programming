/**
 * print_name - prints name to output
 * @name: name of the person
 * @f: pointer that points to the function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
		f(name);
}
