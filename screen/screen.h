#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include <iostream>

using namespace std;

// The unsigned integral type which is used to store the number of
// characters in a string is nested within the string class, so it
// is accessed using "string::size_type".
// The range of string::size_type is guaranteed to be large enough to store the maximum
// *size* of any string that can be held by the string class as well as any index into
// the string.
enum class Direction  {HOME, FORWARD, BACK, UP, DOWN, END};
class Screen {
public:
	// Screen's constructor
	Screen( string::size_type height = 8, string::size_type width = 40, char bkground = '#');

	// get the Screen's height
	string::size_type height() const { return _height; }//height function will not modify the data members of the class
	// get the Screen's width
	string::size_type width() const { return _width; }//width function will not modify the data members of the class

	// place the cursor at the top-left corner of the screen
	void home() { _cursor = 0;  return; }
	// place the cursor at the bottom-right corner of the screen
	void end() { _cursor = _width * _height - 1; return; }
	// move the cursor one position to the right
	void forward();
	// move the cursor one position to the left
	void back();
	// move the cursor up one row
	void up();
	// move the cursor down one row
	void down();
	// move the cursor to the specified row and column
	void move(string::size_type row, string::size_type col);
    void move(Direction dir);
	// get the character at the cursor's current position
	char get() const { return _screen[_cursor]; }//get function will not modify the data members of the class
	// get the character at the specified row and column
	char get(string::size_type row, string::size_type col);

	// write a character on the screen at the current cursor position
	void set( char ch );
	// write a string of characters on the screen starting at the current cursor position
	void set( const string& s );//this means that the memory address of string s cannot be changed
	// overwrite the entire screen with the specified character
	void clear( char bkground = '#');

	// resize the screen
	void reSize( string::size_type height, string::size_type width, char bkground = '#');
	// display the screen
	void display() const;//The const means that the display function will not modify members of its class
	// check whether the specified co-ordinates lie within the screen
	bool checkRange(string::size_type row, string::size_type col) const;////The const means that the checkRange function will not modify members of its class
    //draws empty square entered with specified coordinates and length
    void emptySquare(unsigned int row, unsigned int col,unsigned int length);

private:
	// private member functions
	string::size_type remainingSpace() const;//The const means that the remainingSpace() function will not modify members of its class
	string::size_type row() const;//The const means that the row() function will not modify members of its class

	// private data members
	// (preceding each name with an underscore is a naming convention - not a requirement)

	// number of Screen rows
	string::size_type _height;
	// number of Screen columns
	string::size_type _width;
	// position of the Screen's cursor
	string::size_type _cursor;
	// the Screen's data is stored as a string
	string _screen;
};


#endif

