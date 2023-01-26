#include <iostream>
using namespace std;


// 생성자?
// 
// 소멸자?
// 
// 상속?


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
		// 기본 생성자
		cout << "클래스 생성" << endl;
		_number = 50;
		_engine = 10;
	}
	Car(int value)
	{
		cout << "클래스 생성 2" << endl;
		_number = value;
	}
	~Car()
	{
		cout << "클래스 소멸" << endl;
	}
	void TurnOn() { cout << "시동" << endl; }

};

class Object
{
public:
	Object() { cout << "Object 생성자" << endl; }
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
		cout << "Player 생성자" << endl;
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


