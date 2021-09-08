#include <iostream>
#include <string>

using namespace std;

class GameCharacter //추상클래스
{
public:
	virtual ~GameCharacter() {};
	virtual void draw() = 0; //순수 가상 함수
};

class Hobbit : public GameCharacter
{
	void draw()
	{
		cout << "호빗을 그립니다." << endl;
	}
};

class Titan : public GameCharacter
{
	void draw()
	{
		cout << "타아탄을 그립니다." << endl;
	}
};

class Magician : public GameCharacter
{
	void draw()
	{
		cout << "주술사를 그립니다." << endl;
	}
};

int main(void)
{
	GameCharacter* charType[3];
	charType[0] = new Hobbit();
	charType[1] = new Titan();
	charType[2] = new Magician();

	for (int i = 0; i < 3; i++) {
		cout << "======================" << endl;
		charType[i]->draw();
		cout << "======================" << endl;
	}

	return 0;
}