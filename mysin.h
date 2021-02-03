#ifndef Zaliczenie // Nagłówek
#define Zaliczenie 
#include <string>
#include <iostream>
class MySin{// klasa  MySin
public: // Metody publiczne 
    MySin();
    MySin(double x);
	MySin(const MySin &obj);
    ~MySin();
	double value();
    void setX(double);
	double getX();
private:double mX(); // metoda prywatna 
};
#endif