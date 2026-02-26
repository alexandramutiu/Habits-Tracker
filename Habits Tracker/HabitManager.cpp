#include "HabitManager.h"
#include <iostream>
#include <fstream>

void HabitManager::addHabit(const Habit& habit)
{
	habits.push_back(habit);
}

void HabitManager::listHabits()const {
	if (habits.empty())
	{
		cout << "No habits found!" << endl;
		return;
	}
	for (size_t i = 0; i < habits.size(); ++i)
	{
		cout << i + 1 << ". ";
		habits[i].display();
	}
}

void HabitManager::markHabitDone(int index)
{
	if (index<1 || index > static_cast<int>(habits.size()))
	{
		cout << "Invalid habit number!" << endl;
		return;
	}
	habits[index - 1].markDone();
	cout << "Habit marked as done today!\n";
}

void HabitManager::showStatus()const {
	if (habits.empty())
	{
		cout << "No habits found to analyze!" << endl;
		return;
	}
	int count = 0;
	for (const auto& habit : habits)
	{
		if (habit.isCompleted())
			count++;
	}
	cout << "Habits acomplished today: " 
		<< count << "/" << habits.size() << endl;
}
void HabitManager::saveFile(const string& filename)const
{
	ofstream outFile(filename);
	if (!outFile)
	{
		cout << "Error while saving the file!" << endl;
		return;
	}
	for (const auto& habit : habits) {
		outFile << habit.serialize() << "\n";
	}
}

void HabitManager::loadFile(const string& filename)
{
	ifstream inFile(filename);
	if (!inFile)
		return;
	habits.clear();
	string line;
	while (getline(inFile, line))
	{
		if (!line.empty())
			habits.push_back(Habit::deserialize(line));
	}
}