/*
  ���� �޸� �Ҵ� �� ��ȯ
  ���� �޸� �Ҵ� : ���α׷��� �ۼ��ϴ� �ܰ迡�� �޸𸮸� Ȯ���ϴ� ���� �ƴ϶�
					 ���α׷��� �����ϴ� �������� �ʿ��� ������ Ȯ��
  - C��� : malloc() => �Ҵ�, free() => ��ȯ
  - C++   : new() => �Ҵ�, delete() => ��ȯ
  - JAVA  : new() => �Ҵ�, JVM���� �ڵ����� �Ҹ�(��ȯ)

  C++ �����޸� �Ҵ� : new������, delete������
  ������Ÿ�� *�����ͺ��� = new ������Ÿ��;
  delete �����ͺ���;
*/

// ������ �޾Ƽ� �迭�� ������ �� ���� ū ���� ����ϴ� ���α׷�
// �� ��, �Է¹��� ������ �迭�� ���, �Էµ� ���� 0�̸� ����

#include <iostream>
using namespace std;

int main() {
	int* p;

	p = new int;			// int�� �ϳ��� ������ ������ �����Ҵ�
	if (!p) {
		cout << "���� �޸� �Ҵ��� ���� �ʾҽ��ϴ�." << endl;
		return 0;
	}

	*p = 5;
	int n = *p;
	
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p;			// n ���� �ȵ�. �������� �Ҵ�� ����(p)�� ��ȯ�ؾ���

	return 0;
}

/*#define MAX 100

int main() {
	//int num[MAX];
	int num[3];
	int su, i=0;

	while (true) {
		cout << "�� = ";
		cin >> su;
		if (su == 0) break;
		if (i > 2) {
			int num[5];				// �迭 �籸�� - ū ĭ�� ����� ������ �Ű������..
		}
		num[i] = su;
		i++;
	}

	for (int j = 0; j < i; j++)
		cout << num[j] << endl;

	return 0;
}
*/