#pragma once
#include<iostream>
#include<string>
#include <fstream>
using namespace std;
//puisqu'on utilie la classe Animaux, il faut inclure le fichier Oiseau.h :
#include "Animaux.h"

//Un Chien est une sorte d'Animal : on utilise l'h�ritage :
class Chien:public Animal
{
	//en plus des infos de base, un chien a un nom :
	string nom;
public:
	//pour cr�er un chien, on a besoin de savoir son age et son nom :
	Chien(int,string);
	//un chien ne se d�place pas de la m�me fa�on que tout les animaux...
	//on doit red�finir cette fonction :
	void seDeplace(int);
};