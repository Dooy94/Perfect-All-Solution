//�� ���� ��ȯ�� �پ��� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	int num;
	int dump;

	printf("��ȯ�� �� ������ �Է��ϼ���. >> ");
	scanf("%d %d", &x, &y);

	printf("�Է��� �� ��: x = %d and y = %d\n\n", x, y);

	printf(" �ӽ� ���� ��� \t�̿���[1]\n");
	printf(" ������ �������� \t��ȯ ���[2]\n");
	printf(" ������ ���������� \t��ȯ ���[3]\n");
	printf(" XOR ������^ \t\t�̿� ���[4]\n\n");

	printf("�� ��ȯ ��� �� �� ��ȣ�� �����ϼ���. >> ");
	scanf("%d", &num);

	switch (num) {
	case 1:
		dump = x;
		x = y;
		y = dump;
		break;

	case 2:
		x = x + y;
		y = x - y;//[ (x + y) - y]
		y = x - y;//[ (x + y) - x]
		break;

	case 3:
		x = x * y;
		x = x * y;//[ (x * y) / y]
		y = x / y;//[ (x * y) / x]
		break;

	case 4:
		x = x ^ y;
		y = x ^ y;//[ (x ^ y) ^ y] == [x ^ (y ^ y)] == [x ^ 0] == [x]
		x = x ^ y;//[ (x ^ y) ^ x] == [(y ^ x) ^ x] == [y ^ (x ^ y)] == [y ^ 0] == [y]
		break;
	}

	printf("\n��ȯ�� �� ��: x = %d and y = %d\n", x, y);

}
