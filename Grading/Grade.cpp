//
//  Grade.cpp
//  Grading
//
//  Created by Stefanos Mitropoulos on 20/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#include "Grade.hpp"

grade::grade(unsigned short int gr){
	_gr=gr;
}

unsigned short int grade::getGrade(){
	return _gr;
}
void grade::setGrade (unsigned short int gr){
	_gr=gr;
}

grade::grade(){
	
}
