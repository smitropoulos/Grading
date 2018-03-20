//
//  Grade.hpp
//  Grading
//
//  Created by Stefanos Mitropoulos on 20/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#ifndef Grade_hpp
#define Grade_hpp

#include <stdio.h>


class grade{
private:
	unsigned short int _gr;
public:
	grade(unsigned short int gr);
	grade();

	//methods
	//setter getter for grade
	unsigned short int getGrade();
	void setGrade (unsigned short int gr);



};
#endif /* Grade_hpp */

