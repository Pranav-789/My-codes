#include<iostream>
using namespace std;

class Solution{
	public:
		void Solve(int choice){
				switch(choice){
						case 1:
						int bt, ht;
						cout << "Enter the base of triangle: ";
						cin>> bt;
						cout << "Enter the heigth of triangle: ";
						cin>> ht;
						
						cout << "The area of triangle: " << 0.5 * bt * ht << endl;
						break;
						
						case 2:
						int side;
						cout << "Enter the side of square: ";
						cin >> side;
						cout << "The area of square: " << side*side << endl;
						break;
						
						case 3:
						int r1, r2;
						cout << "Enter the side1 of rectangle: ";
						cin>> r1;
						cout << "Enter the side2 of rectangle: ";
						cin>> r2;
						
						cout << "The area of rectangle: " << r1 * r2 << endl;
						break;
						
						case 4:
						int pb, ph;
						cout << "Enter the base of parallelogram: ";
						cin>> pb;
						cout << "Enter the heigth of parallelogram: ";
						cin>> ph;
						
						cout << "The area of parallelogram: " << pb * ph << endl;
						break;
						
						case 5:
						int d1, d2;
						cout << "Enter length of both diagonals: ";
						cin >> d1 >> d2;
						cout << "The area of rhombus: " << d1 * d2 << endl;
						break;
						
						case 6:
						int coner, conel;
						cout << "Enter the radius of cone: ";
						cin >> coner;
						cout << "Enter the slant length of cone: ";
						cin >> conel;
						cout << "The area of cone: " << 3.14*coner*(coner+conel) << endl;
						break;
						
						case 7:
						int cylr, cyll;
						cout << "Enter the radius of cylinder: ";
						cin >> cylr;
						cout << "Enter the slant length of cone: ";
						cin >> cyll;
						cout << "The area of cylinder: " << 2*3.14*cylr*cylr + 2*3.14*cylr*cyll << endl;
						break;
						
						case 8:
						int cus;
						cout << "Enter the side of cube: ";
						cin >> cus;
						cout << "The area of cube: " << cus * cus * cus << endl;
						break;
						
						case 9:
						int ta, tb, th;
						cout << "Enter both parallel sides of trapezoid: ";
						cin >> ta >> tb;
						cout << "Heigth: ";
						cin >> th;
						cout << "Area of trapezoid is " << (ta + tb) * th * 0.5 << endl;
						break;
						
						case 10:
						int circ;
						cout << "Enter radius of circle: ";
						cin >> circ;
						cout << "Area of circle is "<< 3.14 * circ * circ << endl;
						break;
						
						case 11:
						int oa;
						cout << "Enter side of octagon: ";
						cin >> oa;
						cout << "Area of octagon is "<< 2 * (1 + 1.414) * oa * oa << endl;
						break;
						
						case 12:
						int pa;
						cout << "Enter side of pentagon: ";
						cin >> pa;
						
						int hp;
						cout << "Enter height of unit triangle/apothem: ";
						cin >> hp;
						cout << "Area of pentagon is "<< 5 * (hp) *pa * 0.5 << endl;
						break;
						
						default:
						cout << "Invalid input!" << endl;
				}
		}
};

int main(){
	int n;
	
	cout << "Enter the following number to find area: " << endl;
	cout << "1. Triangle\n2.Square\n3.rectangle\n4.parallelogram\n5.rhombus\n6.cone\n7.cylinder\n8.cube\n9.trapezoid\n10.circle\n11.octagon\n12.pentagon"<<endl;
	cin >> n;
	
	Solution obj;
	obj.Solve(n);
	return 0;
}
