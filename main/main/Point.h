#include <iostream>
#include <cmath>
using namespace std;
#pragma once
class Point
{
private:
	double x;
	double y;
public:
	Point();
	~Point();
	Point(int coordinateX, int coordinateY) {
		x = coordinateX;
		y = coordinateY;
	};
	
	void getCoordinates() {
		cout << "Coordinate x = "<< this -> x << endl << "Coordinate y = " << this-> y << endl << endl;
	}

	void getQuarter() {
		if (this-> x == 0) {
			cout << "Point lies on the x-axis" << endl << endl;
		}
		else if (this-> y == 0) {
			cout << "Point lies on the y-axis" << endl << endl;
		}
		else {
				if (this->x > 0 && this->y > 0) {
					cout << "First quarter" << endl << endl;
				}
				else if (this->x > 0 && this->y < 0) {
					cout << "Second quarter" << endl << endl;
				}
				else if (this->x < 0 && this->y < 0) {
					cout << "Third quarter" << endl << endl;
				}
				else if (this->x < 0 && this->y > 0) {
					cout << "Fourth quarter" << endl << endl;
				}
			}
		
	}

	bool threePointsOnTheLine(Point p2, Point p3) {
		if ((p3.x - this->x) == 0 || (p3.y - this->y) == 0) {
			return ((p2.x - this->x) == (p3.x - this->x)) && ((p2.y - this->y) == (p3.y - this->y));
		}
		return ((p2.x - this ->x) / (p3.x - this->x)) == ((p2.y - this->y) / (p3.y - this->y));
	}

	Point& operator ++ (int value) {
		this -> x += 10;
		return *this;
	}

	Point& operator -- (int value) {
		this->x -= 10;
		return *this;
	}

	bool operator == (const Point& other) {
		return this->x == other.x && this->y == other.y;
	} 

	bool operator != (const Point& other) {
		return !(this->x == other.x && this->y == other.y);
	}

	int operator || (const Point& other) {
		int distance = sqrt(pow((this->x - other.x), 2) + (pow((this->y - other.y), 2)));
		return distance;
	}

	friend ostream& operator << (ostream& output, Point&point) {
		output << "X : " << point.x << " Y : " << point.y;
		return output;
	}

	friend istream& operator >> (istream& input, Point&point) {
		input >> point.x >> point.y;
		return input;
	}
	
};

