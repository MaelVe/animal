#include "Oiseau.h"

//Le constructeur de Oiseau qui prend un age en paramètres
//et appele le constructeur de Animal, avec les paramètres adéquat :
Oiseau::Oiseau(int age):Animal("pioupiou",age,20)
{
	cout<<"L'Oiseau a ete cree"<<endl;
}

//Le constructeur de Oiseau qui prend un age en paramètres et un age max
//au cas où il y ai une sorte d'oiseau qui n'ai pas un age max de 20 ans...
//On appele le constructeur de Animal, avec les paramètres adéquat :
Oiseau::Oiseau(int age,int ageMax):Animal("pioupiou",age,ageMax)
{
	cout<<"L'Oiseau a ete cree"<<endl;
}

//on redéfinie la fonction seDeplace car l'oiseau vole pour se déplacer :
void Oiseau::seDeplace(int m)
{
	//on teste si on est encore vivant :
	//on peut faire ça parce que age et ageMaximum sont en protected...
	if(this->age>=this->ageMaximum){
		cout<<"l'oiseau est mort... il ne bouge donc plus..."<<endl;
	}else
		cout<<"Il vol de "<<m<<" metres."<<endl;
}