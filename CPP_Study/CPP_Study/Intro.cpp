#include <iostream>

using namespace std;
using namespace A;

namespace A
{
	typedef int INT;

}

namespace B
{
	typedef double INT;
}

int main()
{

	// �⺻���� �����
	{
		int a;

		cout << "Hello World!\n";

		cin >> a;

		cout << a;
		// +, -, *, ::(scope operator)

		// namespace 
		// �̸�����?
		// ����?
		// �̸��� ������ ���� �ٸ���
		// int INT
		// double INT

		// INT a = 3; = A
		// INT b = 3.1; = B

		INT c;
		B::INT b = 3.1;
	}



}

