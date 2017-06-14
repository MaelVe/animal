#include<iostream>
#pragma once
#include<string>
#include <fstream>
using namespace std;

/*Classe de base... Tout ce qui est déclaré ici sera utilisé plus tard par l'héritage...*/

class Animal
{
	//un animal a un cri, un age et un age Max...
	//on met protected pour pouvoir les modifier dans les classes héritées :
protected:
	string cri;
	int age;
	int ageMaximum;

public:
	//Le constructeur de Animal qui prend un cri, un age et un age Max en paramètres
	Animal(string,int,int);
	//le destructeur de Animal :
	~Animal();
	//La fonction qui affiche le cri de l'animal :
	void crie();
	//La fonction qui affiche le déplacement de l'animal :
	void seDeplace(int);
	//La fonction qui vieillit d'un an l'animal :
	void vieillie();
	//La fonction qui vieillit de plusieurs années l'animal :
	void vieillie(int);
	//La fonction qui permet à l'animal de manger :
	void mange();
	//La fonction qui affiche les caractéristiques de base de l'animal :
	void affiche();
};