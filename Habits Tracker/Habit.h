#ifndef HABIT_H
#define HABIT_H

#include <iostream>
#include <string>

using namespace std;

class Habit
{
private:
	string name;
	int streak;
	bool completed;

public:
	Habit(string& n, int&s){}
	bool maskDone();
	bool resetDaily();
	void display() const;
	string serialize() const;
	static Habit deserialize(const string& line);
	bool isCompleted()const;
	string getName()const;
	int getStreak()const;
};

#endif