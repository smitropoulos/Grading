	//
	//  main.cpp
	//  Grading
	//
	//  Created by Stefanos Mitropoulos on 20/03/2018.
	//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
	//

#include <iostream>
#include <exception>
#include "Grade.hpp"

int main(int argc, const char * argv[]) {

	grade gr1;
	unsigned short gr;
	bool checkValid= false;


	while (!checkValid){	//validation check for input
		std::cout << "Please enter your grade: ";
		std::cin >> gr;
		checkValid=true;
		if (std::cin.fail()){	//cin.fail() checks to see if the value in the cin
								//stream is the correct type, if not it returns true,
								//false otherwise

			std::cin.clear(); //This corrects the stream.
			std::cin.ignore(); //This skips the left over stream data.
			std::cout << "Please enter an unsigned integer only." << std::endl;
			checkValid = false; //The cin was not an integer so try again.
		}

		if (gr>100 || gr<=0){
			std::cout << "Please enter number between 0 and 100 only." << std::endl;
			checkValid = false; //The cin was out of boundaries so try again.

		}
	}


	gr1.setGrade(gr);
	std::cout<<std::flush;

	switch(gr1.getGrade()){
		case 0 ... 59:
			std::cout<<"Try harder mate. This is an F"<<std::endl;
			break;
		case 60 ... 69:
			std::cout<<"Not that bad. This is a D"<<std::endl;
			break;
		case 70 ... 79:
			std::cout<<"Well done. This is a C"<<std::endl;
			break;
		case 80 ... 89:
			std::cout<<"Great success. This is a B"<<std::endl;
			break;
		case 90 ... 100:
			std::cout<<"Woah. This is an A"<<std::endl;
			break;
	}

	return 0;
}
