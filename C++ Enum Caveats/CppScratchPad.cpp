// ------------------------------- C++ Enum Caveats -------------------------------
// ref link:https://www.youtube.com/watch?v=NeI6G_4Rkkw&list=PLRwVmtr-pp056ahRbFrYbeAnIu2qvXPFe&index=9

#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;

// case: track a certain animal

//const int SHEEP = 0;
//const int COW = 1;
//const int DONKEY = 2;
//const int FISH = 3;

struct AnimalsEnum		// optional scoping issue: not suggested
{
	enum Animals
	{
		SHEEP,
		COW,
		DONKEY,
		FISH,
		//MAX
		MAX_ANIMALS		// explicit
	};
};

enum Animals
{
	SHEEP,
	COW,
	DONKEY,
	FISH,
	//MAX
	MAX_ANIMALS		// explicit
};

enum CarManufacturers
{
	FORD,
	HONDA,
	TOYOTA,
	//MAX
	MAX_CAR_MANUFACTURERS		// explicit
};

void main()
{
	int i = Animals::SHEEP;
	//for (int i = 0; i < Animals::MAX; i++)
	//for (int i = 0; i < MAX; i++)
	for(int i = 0; i < AnimalsEnum::Animals::MAX_ANIMALS; i++)
	{

	}

	//Animals a = Animals::FISH;
	//cout << COW << endl;
	//cout << a << endl;
	//int i = a;
	//cout << i << endl;
	//Animals b = static_cast<Animals>(i);
	//cout << b << endl;
	//
	//int myAnimal = DONKEY;
	//// ...
	//if (myAnimal == FISH)
	//{
	//
	//}
	//else if (myAnimal == DONKEY)
	//{
	//
	//}
	//else
	//{
	//
	//}
}