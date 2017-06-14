#include "Chien.h"

//pour créer un chien, on a besoin de savoir son age et son nom :
//on appelle le constructeur de Animal avec les paramètres adéquat :
Chien::Chien(int age,string nom):Animal("ouafouaf",age,15)
{
	this->nom=nom;
	cout<<"Le chien a ete cree"<<endl;
}

//un chien ne se déplace pas de la même façon que tout les animaux...
//on doit redéfinir cette fonction :
void Chien::seDeplace(int c)
{
	//on teste si on est encore vivant :
	//on peut faire ça parce que age et ageMaximum sont en protected...
	if(this->age>=this->ageMaximum){
		cout<<"l'oiseau est mort... il ne bouge donc plus..."<<endl;
	}else
		cout<<"Le chien marche de "<<c<<" metres"<<endl;
}