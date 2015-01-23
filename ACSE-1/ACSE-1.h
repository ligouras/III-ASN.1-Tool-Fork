// Le bloc ifdef suivant est la façon standard de créer des macros qui facilitent l'exportation 
// à partir d'une DLL. Tous les fichiers contenus dans cette DLL sont compilés avec le symbole ACSE1_EXPORTS
// défini sur la ligne de commande. Ce symbole ne doit pas être défini pour un projet
// qui utilisent cette DLL. De cette manière, les autres projets dont les fichiers sources comprennent ce fichier considèrent les fonctions 
// ACSE1_API comme étant importées à partir d'une DLL, tandis que cette DLL considère les symboles
// définis avec cette macro comme étant exportés.
#ifdef ACSE1_EXPORTS
#define ACSE1_API __declspec(dllexport)
#else
#define ACSE1_API __declspec(dllimport)
#endif

// Cette classe est exportée de ACSE-1.dll
class ACSE1_API CACSE1 {
public:
	CACSE1(void);
	// TODO: ajoutez ici vos méthodes.
};

extern ACSE1_API int nACSE1;

ACSE1_API int fnACSE1(void);
