#include "Aigle.h"

//Le constructeur de Aigle qui prend un age en param�tres
//et appele le constructeur de Oiseau, avec les param�tres ad�quat :
Aigle::Aigle(int age):Oiseau(age,15)
{
	cout<<"L'Aigle a ete cree"<<endl;
}