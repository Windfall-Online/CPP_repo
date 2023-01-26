#include <iostream>

#define MAX_BULLET 50
using namespace std;




class Player
{
public:
	int _hp;
	int _damage;
	int _armor;
	int _bullet;
public:
	void Attack()
	{
		if (_hp == 100)
		{
			IncreaseDamage();
		}
		cout << "����" << endl;
	}
	void Reload()
	{
		if (_bullet == 0)
		{
			FastReloading();
		}
		cout << "����" << endl;
	}

private:
	void FastReloading()
	{
		cout << "���� ����" << endl;
		_bullet = MAX_BULLET;
	}
	void IncreaseDamage()
	{
		cout << "���ݷ� ��ȭ" << endl;
	}
	void IncreaseArmor()
	{
		cout << "���� ��ȭ" << endl;
	}
};