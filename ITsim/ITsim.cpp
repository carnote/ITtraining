// ITsim.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "Header.h"
using namespace std;

int main()
{
	int nameRegion;
	int bonjour;
	region choiceRegion;
	cout << "hey!!  welcome to the ITsim GAME" << endl;
	cout << "first of all, you have to select one of these Region" << endl;
	cout << "you have choice between 7 of theme !!" << endl;
	cout << " USA :1, Mexique :2, France :3, Russie :4, Chine :5, Inde :6, Japon :7" << endl << "right here : ";
	cin  >> nameRegion;

	choiceRegion.whatRegion(nameRegion);


    return 0;
}

