#include "StewChef.h"

void StewChef::createRecipe()
{
	stew = new StewRecipe();
}

void StewChef::cook()
{
	stew->cook();
}