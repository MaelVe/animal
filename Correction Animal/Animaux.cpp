#include "Animaux.h"

//Le constructeur de Animal qui prend un cri, un age et un age Max en param�tres
Animal::Animal(string cri,int age,int ageMax)
{
	//on met � jour les variables de la classes grace aux param�tres :
	this->cri=cri;
	this->age=age;
	this->ageMaximum=ageMax;
}

//le destructeur de Animal :
Animal::~Animal()
{
	cout<<"L'animal a ete saigne"<<endl;
}

//La fonction qui affiche le cri de l'animal :
void Animal::crie()
{
	cout<<this->cri<<endl;
}

//La fonction qui affiche le d�placement de l'animal :
void Animal::seDeplace(int nbM)
{
	//on teste si on est encore vivant :
	if(this->age>=this->ageMaximum){
		cout<<"l'animal est mort... il ne bouge donc plus..."<<endl;
	}else
		cout<<"L'animal se deplace de "<<nbM<<" metres"<<endl;

}

//La fonction qui vieillit d'un an l'animal :
void Animal::vieillie()
{
	cout<<"je vieilli d'un an..."<<endl;
	this->age=this->age+1;
	//on teste si on a d�pass� l'age max :
	if(this->age>=this->ageMaximum){
		cout<<"Et je meurt..."<<endl;
	}
}

//La fonction qui vieillit de plusieurs ann�es l'animal :
void Animal::vieillie(int a)
{
	cout<<"je vieilli de "<<a<<" ans..."<<endl;
	this->age=this->age+a;
	//on teste si on a d�pass� l'age max :
	if(this->age>=this->ageMaximum){
		cout<<"Et je meurt..."<<endl;
	}
}

//La fonction qui permet � l'animal de manger :
void Animal::mange()
{
	//on teste si on est encore vivant :
	if(this->age>=this->ageMaximum){
		cout<<"l'animal est mort... il ne peut plus manger..."<<endl;
	}else{
		cout<<"L'animal mange"<<endl;
		this->crie();
	}
}

//La fonction qui affiche les caract�ristiques de base de l'animal :
void Animal::affiche()
{
	cout<<endl;
	cout<<"Le cri de l'animal est : "<<this->cri<<endl;
	cout<<"L'age de l'animal est : "<<this->age<<endl;
	cout<<"L'age maximum de l'animal est :"<<this->ageMaximum<<endl;
	if(this->age>=this->ageMaximum){
		cout<<"Je suis mort..."<<endl;
	}
	cout<<endl;
}
