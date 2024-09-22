#include <iostream>

int main() {
    unsigned int Y;
    std::cout << "Enter a year: ";
    std::cin >> Y;
    //If the year is a century year, it is a leap year and divided by 400 
      
        if (Y % 400 == 0){
          std::cout << Y << " is a leap year." << std::endl;
            return true;
    }
    else{
	return false;
    }
    	//If the year is not a century year, it is a leap year and divided by 4
        if (Y % 4 == 0){
        	std::cout << Y << " is not a leap year." << std::endl;
        	return true;
        }
        
        else{
        	return false;
        }
    	
    
        
    return 0;
}

