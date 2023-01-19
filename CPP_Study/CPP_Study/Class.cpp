#include <iostream>
using namespace std;

// C++의 클래스는 3가지 속성
// 은닉성 = 캡슐화(Encapsulation)
// 상속성(inheritecne)
// 다형성(polymorphism)
// public, private, protected


class ABC
{
public:
	int _data = 10; // 멤버 변수, (field), 필드 변수
					// 안에서 초기화 가능!
private:
	int _privateData;
	
public:
	void HelloWorld() // 멤버 함수, (Method), 메소드
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
	// 핸들
	// 기어
	// 페달
private: // 우리가 몰라도 되는것 or 함부로 만지면 큰일나는 것 or 다른방식으로 접근하길 원하는 것
	// 엔진
	// 배선
	// 브레이크 등등?

};



int main()
{

	ABC a; // instance
	
	cin >> a._data;
	
	cout << a._data << endl;
	cout << "줄 바꿈" << endl;

	a.HelloWorld();
	a.Setter(150);
	cout << a.Getter() << endl;
	
}