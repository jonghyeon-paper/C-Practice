/*
 * Pointer.c
 *
 *  Created on: 2018. 12. 3.
 */
int main()
{
	int a = 1;
	int *b = &a;

	printf("0x%p\n", a);
	printf("0x%p\n", &a);
	printf("0x%p\n", *b);
	printf("0x%p\n", b);
	printf("0x%p\n", &b);

}
