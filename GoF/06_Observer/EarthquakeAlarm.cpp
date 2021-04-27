#include "EarthquakeAlarm.h"

void EarthquakeAlarm::subscribe(Observer* obs)
{
	observer.push_back(obs);
	cout << "observer“o˜^" << endl;
}


void EarthquakeAlarm::alarm()
{
	for(int i=0; i < (int)observer.size(); ++i)
		observer[i]->notify();

}