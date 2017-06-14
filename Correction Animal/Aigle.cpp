#include "Aigle.h"

//Le constructeur de Aigle qui prend un age en paramètres
//et appele le constructeur de Oiseau, avec les paramètres adéquat :
Aigle::Aigle(int age):Oiseau(age,15)
{
	cout<<"L'Aigle a ete cree"<<endl;
}