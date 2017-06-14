#pragma once
#include<iostream>
#include<string>
#include <fstream>
using namespace std;
//puisqu'on utilie la classe Oiseau, il faut inclure le fichier Oiseau.h :
#include "Oiseau.h"

//Un Aigle est une sorte d'Oiseau : on utilise l'héritage :
class Aigle:public Oiseau
{
//on n'a pas besoin de rajouter d'info à la classe Oiseau...
public:
	//Constructeur d'aigle, on a besoin que de son age...
	Aigle(int);
};