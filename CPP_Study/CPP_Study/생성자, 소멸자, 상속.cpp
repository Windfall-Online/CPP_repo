#include <iostream>
using namespace std;


// ������?
// 
// �Ҹ���?
// 
// ���?


class Car
{
public:
	int _number;
private:
	int _engine;
	//const int max;

public:
	Car() // : _number(5), _engine(10), max(10)
	{
		// �⺻ ������
		cout << "Ŭ���� ����" << endl;
		_number = 50;
		_engine = 10;
	}
	Car(int value)
	{
		cout << "Ŭ���� ���� 2" << endl;
		_number = value;
	}
	~Car()
	{
		cout << "Ŭ���� �Ҹ�" << endl;
	}
	void TurnOn() { cout << "�õ�" << endl; }

};

class Object
{
public:
	Object() { cout << "Object ������" << endl; }
protected:
	int _hp = 10;
	int _armor = 10;
	int _damage = 10;
	int _aaaaaaa = 10;
	void Attack() {}
};

class Player : public Object
{
public:
	Player()
	{
		cout << "Player ������" << endl;
	}
	int _uId;
	char* _nickname;
public:
	void FireGun() {}
	
};

int main()
{
	/*Car mainCar(5);
	cout << mainCar._number << endl;*/
	
	Player player;
	
}


