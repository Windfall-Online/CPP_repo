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
		cout << "공격" << endl;
	}
	void Reload()
	{
		if (_bullet == 0)
		{
			FastReloading();
		}
		cout << "장전" << endl;
	}

private:
	void FastReloading()
	{
		cout << "빠른 장전" << endl;
		_bullet = MAX_BULLET;
	}
	void IncreaseDamage()
	{
		cout << "공격력 강화" << endl;
	}
	void IncreaseArmor()
	{
		cout << "방어력 강화" << endl;
	}
};