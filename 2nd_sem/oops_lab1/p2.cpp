#include<iostream>

int main(){
	int temp;
	
	std::cout << "Enter the temperature in Fahrenhiet: "<< std::endl;
	std::cin>> temp;
	
	int celc = (temp - 32)*5/9;
	
	std:: cout << "The temperatue in celcius is " << celc << std :: endl;
	
	return 0;
}
