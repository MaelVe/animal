#pragma once
#include<iostream>
#include<string>
#include <fstream>
using namespace std;
//puisqu'on utilie la classe Animaux, il faut inclure le fichier Oiseau.h :
#include "Animaux.h"

//Un Chien est une sorte d'Animal : on utilise l'héritage :
class Chien:public Animal
{
	//en plus des infos de base, un chien a un nom :
	string nom;
public:
	//pour créer un chien, on a besoin de savoir son age et son nom :
	Chien(int,string);
	//un chien ne se déplace pas de la même façon que tout les animaux...
	//on doit redéfinir cette fonction :
	void seDeplace(int);
};