#include "Point.h";
#include <iostream>;

using namespace std;

int main()
{
    cout << "Class Point\n"; 

	Point point1 = Point(2, 3);
	point1.getCoordinates();

	cout << "Increment (x = x - 10)" << endl;
	point1++;
	point1.getCoordinates();

	cout << "Decrement (x = x - 10)" << endl;
	point1--;
	point1--;
	point1.getCoordinates();

	Point point2 = Point(2, 3);
	Point point10 = Point(2, 3);

	cout << "Operator overload (==, !=)" << endl;
	if ((point1 == point10) && !(point1 != point10)) {
		cout << "Points equal" << endl << endl;
	}
	else {
		cout << "Points NOT equal" << endl << endl;
	}

	cout << "Operator overload (||) - distance beetween points" << endl;
	Point point3 = Point(45, -17);
	int distance = point2 || point3;
	cout << distance << endl << endl;

	cout << "Operator overload (<<, >>)" << endl;
	Point point4;
	cout << "Input x and y: ";
	cin >> point4;
	cout << "Point coordinates: " << point4 << endl;

	cout << "Method for getting quarter" << endl;
	point4.getQuarter();
	point1--;
	point1.getQuarter();


	cout << "Method that determines if three points lie on the same line" << endl;
	Point point100 = Point(1, 2);
	Point point101 = Point(-1, -2);
	Point point102 = Point(2, 4);

	cout << point100.threePointsOnTheLine(point101, point102);
	

}

