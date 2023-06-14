#include <stdio.h>

void print_bytes(int a) {

	int tmp = 0;

	for (int i = 0; i < 4; i++) {
		tmp = a << (24 - i * 8);
		tmp = tmp >> 24;

		printf("%x\n", tmp);
	}
}

void change_byte(int a) {

	int b = 0x0000C400;
	int c = 0xffff00ff;

	a &= c;
	a |= b;

	printf("%x\n", a);
}

int main() {

	int a = 0x5A0C5911;

	printf("%x\n", a);
	print_bytes(a);
	change_byte(a);

	return 0;
}