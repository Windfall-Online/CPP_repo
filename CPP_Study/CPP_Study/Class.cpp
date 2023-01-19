#include <iostream>
using namespace std;

// C++�� Ŭ������ 3���� �Ӽ�
// ���м� = ĸ��ȭ(Encapsulation)
// ��Ӽ�(inheritecne)
// ������(polymorphism)
// public, private, protected


class ABC
{
public:
	int _data = 10; // ��� ����, (field), �ʵ� ����
					// �ȿ��� �ʱ�ȭ ����!
private:
	int _privateData;
	
public:
	void HelloWorld() // ��� �Լ�, (Method), �޼ҵ�
	{
		cout << "Hello World" << endl;
		cout << _data << endl;
	}
	int Getter()
	{
		return _privateData;
	}
	void Setter(int value)
	{
		_privateData = value;
	}
	
};

class Car
{
public:
	// �ڵ�
	// ���
	// ���
private: // �츮�� ���� �Ǵ°� or �Ժη� ������ ū�ϳ��� �� or �ٸ�������� �����ϱ� ���ϴ� ��
	// ����
	// �輱
	// �극��ũ ���?

};



int main()
{

	ABC a; // instance
	
	cin >> a._data;
	
	cout << a._data << endl;
	cout << "�� �ٲ�" << endl;

	a.HelloWorld();
	a.Setter(150);
	cout << a.Getter() << endl;
	
}