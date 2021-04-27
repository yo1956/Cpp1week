#include "EarthquakeAlarm.h"
#include "Company.h"
#include "School.h"
#include "Home.h"

int main()
{

	EarthquakeAlarm* ea = new EarthquakeAlarm();
	Observer* company = new Company();
	Observer* school = new School();
	Observer* home = new Home();

	ea->subscribe(company);
	ea->subscribe(school);
	ea->subscribe(home);

	ea->alarm();

	delete ea,company,school,home;



}