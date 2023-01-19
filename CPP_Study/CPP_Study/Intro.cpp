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

	// 기본적인 입출력
	{
		int a;

		cout << "Hello World!\n";

		cin >> a;

		cout << a;
		// +, -, *, ::(scope operator)

		// namespace 
		// 이름공간?
		// 뭐냐?
		// 이름은 같은데 뜻이 다르다
		// int INT
		// double INT

		// INT a = 3; = A
		// INT b = 3.1; = B

		INT c;
		B::INT b = 3.1;
	}



}

