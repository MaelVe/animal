#include<iostream>
#include<string>
#include <fstream>
using namespace std;

//puisqu'on utilie les classes qu'on a cr��, il faut inclure les fichiers d�finis :
#include "Animaux.h"
#include "Aigle.h"
#include "Oiseau.h"
#include "Chien.h"

void main()
{
	//on cr�� un chien :
	Chien c(10,"medor");
	c.seDeplace(2);
	c.mange();
	c.vieillie(18);

	Aigle a(3);
	a.seDeplace(2);
	a.mange();
	a.vieillie(18);

	c.affiche();
	a.affiche();

}