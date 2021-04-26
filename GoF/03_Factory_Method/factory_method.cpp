#include "CurryChef.h"
#include "StewChef.h"
#include "Person.h"
#include "Recipe.h"
#include "StewRecipe.h"
#include "CurryRecipe.h"

int main()
{
	//Person* curry_chef = new CurryChef();
	//Person* stew_chef = new StewChef();
	CurryChef* curry_chef = new CurryChef();
	StewChef* stew_chef = new StewChef();

	curry_chef->createRecipe();
	stew_chef->createRecipe();

	curry_chef->cook();
	stew_chef->cook();

	delete curry_chef, stew_chef;

	return 0;
}