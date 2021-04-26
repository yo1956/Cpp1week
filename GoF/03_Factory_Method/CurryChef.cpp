#include "CurryChef.h"

void CurryChef::createRecipe()
{
	curry = new CurryRecipe();
}

void CurryChef::cook()
{
	curry->cook();
}