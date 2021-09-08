#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
	int age;
	int weight;
	string type;
public:
	Animal() {}
	Animal(int age, int weight, string type)
	{
		this->age = age;
		this->weight = weight;
		this->type = type;
	}
	void eat();
	void sleep();
	int getAge();
	void setAge(int age);
	int getWeight();
	void setWeight(int weight);
	string getType();
	void setType(string type);
	void showAnimal();
};

void Animal::eat() { cout << "Animal::eat()" << endl; }

void Animal::sleep() { cout << "Animal::sleep()" << endl; }

int Animal::getAge() { return age; }

void Animal::setAge(int age) { this->age = age; }

int Animal::getWeight() { return weight; }

void Animal::setWeight(int weight) { this->weight = weight; }

string Animal::getType() { return type; }

void Animal::setType(string type) { this->type = type; }

void Animal::showAnimal()
{
	cout << "Age = " << age << endl;
	cout << "Weight = " << weight << endl;
	cout << "Type = " << type << endl;
}


class Cat : public Animal
{
private:
	int tail_length;

public:
	Cat() {};
	Cat(int a, int w, string t);
	Cat(int a, int w, string t, int l);// �����ڸ� �� 3�� �����ε� �ϼ���.(������������/�����������1/�����������2)
	void Meow();
	int getTailLength();
	void setTailLength(int tail_length);
	void showCat();
};
//��� ���� Animal�� ����� �ִ��� �̿��ؼ� Cat�� ����Լ��� �����ϼ���.
Cat::Cat(int a, int w, string t) :Animal(a, w, t)
{
	tail_length = 0;
}
Cat::Cat(int a, int w, string t, int l) : Animal(a, w, t)
{
	tail_length = l;
}

void Cat::Meow() { cout << "Cat::Meow()" << endl; }

int Cat::getTailLength() { return tail_length; }

void Cat::setTailLength(int tail_length) { this->tail_length = tail_length; }

void Cat::showCat()
{
	cout << "Age = " << getAge() << endl;
	cout << "Weight = " << getWeight() << endl;
	cout << "Type = " << getType() << endl;
	if (tail_length > 0)
		cout << "Tail length = " << getTailLength() << endl;
}

int main()
{
	Cat frisky(3, 7, "Russian blue");
	frisky.showCat();
	cout << endl;

	Cat oreo(5, 10, "American shortcut", 23);
	oreo.showCat();
	return 0;
}