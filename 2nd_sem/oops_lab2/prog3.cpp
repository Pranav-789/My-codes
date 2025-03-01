#include<iostream>
using namespace std;

void calc(int choice){
		switch(choice){
				case 1:
				float d1, d2;
				cout << "Enter the length of diagonal d1 and d2: ";
				cin >> d1 >> d2;
				cout << "The Area of rhombus is: " << 0.5 * d1 * d2 << " units" << endl; 
				break;
				
				case 2: 
				float coner, conel;
				cout << "Enter the Slant length of cone: ";
				cin >> conel;
				cout << "Enter the radius of cone: ";
				cin >> coner;
				cout << "The Area of cone is: " << 3.14 * coner * (coner+conel) << " units" << endl;
				break;
				
				case 3:
				int ta, tb, th;
				cout << "Enter the length of parallel sides: ";
				cin >> ta >> tb;
				cout << "Enter the height of trapezoid: ";
				cin >> th;
				
				cout << "The Area of Trapezoid is: " << 0.5*(ta + tb)*th << " units" << endl;
				break;
				
				case 4:
				float cr;
				cout << "Enter Radius: ";
				cin >> cr;
				cout << "The Area of circle is: " << 3.14* cr * cr << " units" << endl;
				break;
				
				case 5:
				int oa;
				cout << "Enter the length of side of octagon: ";
				cin >> oa;
				cout << "The Area of Octagon is: " << 2*(1 + 1.414)*oa*oa << " units" << endl;
				break;
				
				case 6: 
				int a;
				cout << "Enter the length of side of pentagon: ";
				cin >> a;
				
				cout << "The Area of Pentagon is: " << 1.73 * a * a * 3 * 0.5 << " units" << endl;
				break;
				
				case 7:
				int b, h;
				cout << "Enter the base of parallelogram: ";
				cin >> b;
				cout << "Enter the height of parallelogram: ";
				cin >> h;
				cout << "The Area of Parallelogram is: " << b * h << " units" << endl;
				break;
				
				case 8:
				int r, l;
				cout << "Enter the radius of cylinder: ";
				cin >> r;
				
				cout << "Enter the length of cylinder: ";
				cin >> l;
				cout << "The Area of Cylinder is: " << 2 * 3.14 * r * l << " units" << endl;
				break;
				
				case  9:
				float s;
				cout << "Enter the length of sides: ";
				cin >> s;
				cout << "The Area of cube is: " << s * 6 << " units" << endl;
				break; 
				
				default:
				cout << "Invalid Input!" << endl;
		}
}

int main(){

	char ch;
	
	do{
		int choice;
		cout << "Entr the construct whose area is to be calculated: "<< endl;
		cout << "1. Rhombus, 2. Cone, 3. Trapezoid, 4. Circle, 5. Octagon, 6. Pentagon, 7. Parallelogram, 8. Cylinder, 9. Cube" << endl;
		cin >> choice;
		
		calc(choice);
		
		cout << "If you want to continue press Y, or press any key to exit" << endl;
		
		cin >> ch; 
		
	}while(ch == 'y' || ch == 'Y');
	
	cout << "Thank you!"<< endl;
	
	return 0;
	
}
