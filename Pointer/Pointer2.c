/*
 * Pointer.c
 *
 *  Created on: 2018. 12. 3.
 */
int main()
{
	int a[3] = {2, 1, 3};
	int *b = a;

	printf("0x%p\n", a);
	printf("0x%p\n", &a);
	printf("0x%p\n", a[0]);
	printf("0x%p\n", &a[0]);
	printf("0x%p\n", *b);
	printf("0x%p\n", b);
	//printf("0x%p\n", &b);

	printf("%d\n", a);
	printf("%d\n", &a);
}
