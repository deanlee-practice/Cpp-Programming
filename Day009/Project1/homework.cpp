// https://computer-science-student.tistory.com/119
/*  ���� ī�� �ܾ�
<ó������>
1. ���� ī���� �ʱ� �ܾ� 20000
2. ������ ���� ����� �ƴ� �Ÿ� ��Ģ�� ���� ���� �� ����
3. �⺻ ����� 40km�� 720��, �߰������ 41km���� 8km�� 80��
4. �̵��Ÿ��� �Է��Ͽ� ī���� ���� �ܾ��� ����Ѵ�.
5. �ּ� �̵� �Ÿ��� 4km, �ִ� �̵� �Ÿ��� 178km
6. �Է°��� ������ ����� ���� �ܾ��� ����ϰ� ���α׷� ����
7. �Է°��� -1�̸� ���α׷� ����
*/

#include <iostream>
using namespace std;

int main() {
	int ib = 20000;				// �ʱ� �ܾ�
	// a=�⺻���, b=�߰����, fare=�⺻���+�߰����
	int a, b, fare;
	a = 720, b = 80;
	int dis = 0;				// �̵��Ÿ�

	cout << "�ʱ� �ܾ� : " << ib << endl << endl;

	while(true) {					// while (1)
		cout << "�̵� �Ÿ� = ";
		cin >> dis;
		cout << "_______________________________________\n";

		if (dis == -1)
			break;

		else if (dis < 4 || dis>178) {
			//�ּҰŸ��� �ִ�Ÿ� ������ ����� ���
			cout << "���� �ܾ� : " << ib << endl;
			cout << "_______________________________________\n";
			break;
		}

		else if (dis <= 40) 
			//�⺻���
			fare = a;

		else { 
			//�⺻���+�߰����
			if (dis <= 48)
				fare = a + b;
			else if ((dis - 40) % 8 == 0)
				fare = a + ((dis - 40) / 8) * b;
			else
				fare = a + ((dis - 40) / 8 + 1) * b;
		}

		if (ib > 0) {
			ib -= fare;
			if (ib < 0) {
				cout << "���� �ܾ� : " << ib + fare << endl;
				cout << "_______________________________________\n";
				break;
			}
			cout << "��� : " << fare << endl;
			cout << "���� �ܾ� : " << ib << endl;
		}
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}