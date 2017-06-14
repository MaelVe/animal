#pragma once
#include<iostream>
#include<string>
#include <fstream>
using namespace std;
//puisqu'on utilie la classe Animaux, il faut inclure le fichier Oiseau.h :
#include "Animaux.h"

//Un Aigle est une sorte d'Animal : on utilise l'héritage :
class Oiseau:public Animal
{
//on n'a pas besoin de rajouter d'info à la classe Animal...
public:
	//Constructeur d'aigle, on a besoin que de son age...
	Oiseau(int);
//Le constructeur de Oiseau qui prend un age en paramètres et un age max
//au cas où il y ai une sorte d'oiseau qui n'ai pas un age max de 20 ans...
	Oiseau(int,int);
	//Il faut redéfinir cette fonction puisqu'un oiseau ne se déplace pas de la même manière que les autre animaux
	void seDeplace(int);
};