#include "Habit.h"
#include <sstream>

using namespace std;

Habit::Habit(const string& name) :
	name(name), streak(0), completed(false){ }

void Habit::markDone()
{
	if (!completed)
		completed = true;
	streak++;
}

void Habit::resetDaily()
{
	completed = false;
}

void Habit::display()const
{
	cout<<"["<< (completed ? "X" : " ") << "] "
		<< name << " | Streak: " << streak << "\n";
}

bool Habit::isCompleted()const {
	return completed;
}
string Habit::getName()const {
	return name;
}
int Habit::getStreak()const {
	return streak;
}

string Habit::serialize()const {
	ostringstream oss;
	oss << name << "|" << streak << "|" << completed;
	return oss.str();
}
Habit Habit::deserialize(const string& line)
{
	istringstream iss(line);
	string name, streakStr, completedStr;
	getline(iss, name, '|');
	getline(iss, streakStr, '|');
	getline(iss, completedStr, '|');

	Habit habit(name);
	habit.streak = std::stoi(streakStr);
	habit.completed = (completedStr == "1" || completedStr == "true");

	return habit;
}