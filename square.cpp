// This program declares the Square class and uses member functions to find
// the perimeter and area of the square

// Kameron Burden

#include <iostream>
using namespace std;

// FILL IN THE CODE TO DECLARE A CLASS CALLED Square. TO DO THIS SEE
// THE IMPLEMENTATION SECTION.
class square 
{
private:
	float side;

public:
	void setSide(float length);
	float findArea();
	float findPerimeter();
	square(); //default
	square(float a);
	~square();

};

int main()
{
	square box;	// box is defined as an object of the Square class
	float size;	// size contains the length of a side of the square
	square box1(9);
	
	
	// FILL IN THE CLIENT CODE THAT WILL ASK THE USER FOR THE LENGTH OF THE
	// SIDE OF THE SQUARE. (This is stored in size)
	cout << "What is the length of the side of the square? " << endl;
	cin >> size;

	// FILL IN THE CODE THAT CALLS SetSide. size is the length floated in setSide
	box.setSide(size);

	// FILL IN THE CODE THAT WILL RETURN THE AREA FROM A CALL TO A FUNCTION
	// AND PRINT OUT THE AREA TO THE SCREEN.
	cout << "The area of the square is " << box.findArea() << endl;

	// FILL IN THE CODE THAT WILL RETURN THE PERIMETER FROM A CALL TO A
	// FUNCTION AND PRINT OUT THAT VALUE TO THE SCREEN.
	cout << "The perimeter is " << box.findPerimeter() << endl;

	cout << "The area of box1 is " << box1.findArea() << endl;

	cout << "The perimeter of box1 is " << box1.findPerimeter() << endl;

	

	return 0;
}

// _______________________________________________________
//
// Implementation section	Member function implementation

//**************************************************
//  setSide
//
//  task:	 This procedure takes the length of a side and
//	         places it in the appropriate member data
//  data in: length of a side
//***************************************************

void square::setSide(float length)
{
	side = length;
}

//**************************************************
//	findArea
//
//  task:	       This finds the area of a square
//  data in:       none (uses value of data member side)
//  data returned: area of square
//***************************************************

float square::findArea()
{
	return side * side;
}

//**************************************************
//	findPerimeter
//
//  task:	       This finds the perimeter of a square
//  data in:       none (uses value of data member side)
//  data returned: perimeter of square
//***************************************************

float square::findPerimeter()
{
	return 4 * side;
}

square::square() {
	side = 1.0;
}
square::square(float a) {
	
	side = a;
}
square::~square() {

}
