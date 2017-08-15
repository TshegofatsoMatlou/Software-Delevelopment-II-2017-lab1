// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
    //My initial is O
    Screen myScreen{6,6};
    myScreen.clear(' ');
    myScreen.move(1,1);
    myScreen.set('*');
    myScreen.move(2,1);
    myScreen.set('*');
    myScreen.move(3,1);
    myScreen.set('*');
    myScreen.move(4,1);
    myScreen.set('*');
    myScreen.move(5,1);
    myScreen.set('*');
    myScreen.move(6,1);
    myScreen.set('*');

    myScreen.move(6,2);
    myScreen.set('*');
    myScreen.move(6,3);
    myScreen.set('*');
    myScreen.move(6,4);
    myScreen.set('*');
    myScreen.move(6,5);
    myScreen.set('*');
    myScreen.move(6,6);
    myScreen.set('*');

    myScreen.move(5,6);
    myScreen.set('*');
    myScreen.move(4,6);
    myScreen.set('*');
    myScreen.move(3,6);
    myScreen.set('*');
    myScreen.move(2,6);
    myScreen.set('*');
    myScreen.move(1,6);
    myScreen.set('*');

    myScreen.move(1,2);
    myScreen.set('*');
    myScreen.move(1,3);
    myScreen.set('*');
    myScreen.move(1,4);
    myScreen.set('*');
    myScreen.move(1,5);
    myScreen.set('*');

    myScreen.display();
    myScreen.clear(' ');
    myScreen.emptySquare(2,2,12);

//	myScreen.forward();
//	myScreen.set('*');
//	myScreen.down();
//	myScreen.set('*');
//	myScreen.move(3,3);
//	myScreen.set("---");
//
//	myScreen.display();
//	cout << endl;
//
//	myScreen.reSize(16,16);
//	myScreen.display();
//	myScreen.clear(' ');
//
//	myScreen.move(7,7);
//	myScreen.set("BIG");
//	myScreen.move(8,5);
//	myScreen.set("SCREEN");


	return 0;
}

