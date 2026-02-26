#ifndef HABITMANAGER_H
#define HABITMANAGER_H

#include "Habit.h"

#include <iostream>
#include <string>
#include <vector>


class HabitManager
{
private:
	vector<Habit> habits;
public:
	void addHabit(const Habit& habit);
	void listHabits()const;
	void markHabitDone(int index);
	void showStatus()const;
	void saveFile(const string& filename)const;
	void loadFile(const string& filename);
};
#endif