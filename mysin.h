#ifndef MYSIN_H 
#define MYSIN_H 
#include <string>/** Biblioteka c++*/
#include <iostream>/** Biblioteka C++*/

class MySin{/** KLASA MY SIN*/
public: /** Metody publiczne*/
/** Metoda 1*/
    MySin();
	/** Metoda 2*/
    MySin(double x);
	/** Metoda 3*/
	MySin(const MySin &obj);
	/** Metoda 4*/
    ~MySin();
	/** Metoda 5*/
	double value();
	/** Metoda 6*/
    void setX(double);
	/** Metoda 7*/
	double getX();
	/**Metoda prywatna*/
private:double mX();/** Metoda prywatna double mX()*/

};
#endif // MYSIN_H