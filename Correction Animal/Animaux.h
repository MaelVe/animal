#include<iostream>
#pragma once
#include<string>
#include <fstream>
using namespace std;

/*Classe de base... Tout ce qui est d�clar� ici sera utilis� plus tard par l'h�ritage...*/

class Animal
{
	//un animal a un cri, un age et un age Max...
	//on met protected pour pouvoir les modifier dans les classes h�rit�es :
protected:
	string cri;
	int age;
	int ageMaximum;

public:
	//Le constructeur de Animal qui prend un cri, un age et un age Max en param�tres
	Animal(string,int,int);
	//le destructeur de Animal :
	~Animal();
	//La fonction qui affiche le cri de l'animal :
	void crie();
	//La fonction qui affiche le d�placement de l'animal :
	void seDeplace(int);
	//La fonction qui vieillit d'un an l'animal :
	void vieillie();
	//La fonction qui vieillit de plusieurs ann�es l'animal :
	void vieillie(int);
	//La fonction qui permet � l'animal de manger :
	void mange();
	//La fonction qui affiche les caract�ristiques de base de l'animal :
	void affiche();
};