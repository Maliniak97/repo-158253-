#ifndef Zaliczenie /** Nagłówek*/
#define Zaliczenie 
#include <string>/** Biblioteka c++*/
#include <iostream>/** Biblioteka C++*/

class MySin{/** KLASA MY SIN*/
public: /** Metody publiczne*/
    MySin();
    MySin(double x);
	MySin(const MySin &obj);
    ~MySin();
	double value();
    void setX(double);
	double getX();
private:double mX();/** Metoda prywatna double mX()*/

};
#endif