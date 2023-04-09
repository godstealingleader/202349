#include <iostream>

int main()
{
	using namespace std;
	long inseconds = 0;
	cout << "Eenter the number of seconds:";
	cin >> inseconds;
	const int transform_day = 24, transform_hours = 60, transform_minutes = 60;
	cout << inseconds << "seconds = ";
	cout << inseconds/(transform_day*transform_hours*transform_minutes) << " days, ";
	cout << (inseconds % (transform_day * transform_hours * transform_minutes)) / (transform_hours * transform_minutes) << "hours, ";
	cout << (((inseconds % (transform_day * transform_hours * transform_minutes)) % (transform_hours * transform_minutes))) / (transform_minutes) << "minutes.";
	cout << (((inseconds % (transform_day * transform_hours * transform_minutes)) % (transform_hours * transform_minutes))) % (transform_minutes) << "seconds";
	return 0;
}