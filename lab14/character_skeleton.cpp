#include <iostream>
#include <string>

using namespace std;

class GameCharacter //�߻�Ŭ����
{
public:
	virtual ~GameCharacter() {};
	virtual void draw() = 0; //���� ���� �Լ�
};

class Hobbit : public GameCharacter
{
	void draw()
	{
		cout << "ȣ���� �׸��ϴ�." << endl;
	}
};

class Titan : public GameCharacter
{
	void draw()
	{
		cout << "Ÿ��ź�� �׸��ϴ�." << endl;
	}
};

class Magician : public GameCharacter
{
	void draw()
	{
		cout << "�ּ��縦 �׸��ϴ�." << endl;
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