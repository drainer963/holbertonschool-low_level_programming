 tarts here
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0.
 */
 int main(int argc, char *argv[])
 {
	 int n1, n2, sum;

	 if (argc != 3)
	 {
		 printf("%s\n", "Error");
		 exit(98);
	 }
	 n1 = atoi(argv[1]);
	 n2 = atoi(argv[2]);
	 sum = n1 * n2;
	 printf("%d\n", sum);
	 return (0);
 }
