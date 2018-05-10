/*
 * Zelle.h
 *
 *  Created on: 18.04.2018
 *      Author: oliver
 */
#include <string>

using namespace std;

#ifndef ZELLE_H_
#define ZELLE_H_

class Zelle {
public:

	Zelle();
	Zelle(int posx, int posy,string zeichen);
	virtual ~Zelle();

	inline string getZeichen() {return zeichen;}
	inline void changeZelleZeichen(string change) {zeichen=change;}
	inline int getPosX() { return posx; }
	inline int getPosY() { return posy; }
	inline void setneuesZeichen(string neu) { neues_zeichen = neu; }
	inline string getneuesZeichen() { return neues_zeichen; }


private:
	string zeichen;//im konstruktor initalizieren
	string neues_zeichen;
	int posx;
	int posy;
};

#endif /* ZELLE_H_ */
