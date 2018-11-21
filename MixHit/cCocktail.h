#ifndef _CCOCKTAIL_H_
#define _CCOCKTAIL_H_

#include "cIngredient.h"
#include <String>
#include <vector>

class cCocktail
{
public:
	cCocktail(String pCocktailName, int pFuel);
	cCocktail(String pCocktailName, std::vector<cIngredient> pIngredients, int pFuel);
	String getCocktailName();						// Gibt den Namen des Cocktails aus.
	int getNumberOfIngredients();					// Gibt die Anzahl an verwendeten Zutaten aus.
	cIngredient getIngredient(int pIndex);			// Gibt die Zutat mit dem entsprechenden Index aus.

	static cCocktail * fromJson(String json);
	String toJson();

	int getFuel();

private:
	std::vector<cIngredient> mIngredients;				// Verwendete Zutaten.
	String mCocktailName;							// Name des Cocktails
	int mFuel;
};
#endif
