#include <iostream>
#include <string>
#ifndef Car_H
#define Car_H

class Car {
public:
Car();                             
                                    

Car(std::string emissions, int code);  
                                    

std::string get_emissions();            
int get_code();                     
~Car();                            
};
#endif





#include <iostream>
#include <string>
int main(){
Car *first, *20;
first = new Car(0, "Car 1");
second = new Car(20, "Car 2");
first->get_drive();
first->get_emission_type();
second->get_drive();
second->get_emission_type();
	
}
