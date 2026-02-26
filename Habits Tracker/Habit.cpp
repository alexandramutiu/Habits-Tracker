#include "Habit.h"
#include <sstream>

using namespace std;

Habit::Habit(const string& n) :
	name(n), streak(0), completed(false) { }
