// ACSE-1.cpp : définit les fonctions exportées pour l'application DLL.
//

#include "stdafx.h"
#include "ACSE-1.h"


// Il s'agit d'un exemple de variable exportée
ACSE1_API int nACSE1=0;

// Il s'agit d'un exemple de fonction exportée.
ACSE1_API int fnACSE1(void)
{
	return 42;
}

// Il s'agit du constructeur d'une classe qui a été exportée.
// consultez ACSE-1.h pour la définition de la classe
CACSE1::CACSE1()
{
	return;
}
