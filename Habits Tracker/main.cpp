#include "HabitManager.h"
#include <iostream>

using namespace std;
void showMenu()
{
    cout << "\n=== Habit Tracker ===\n";
    cout << "1. Add Habit\n";
    cout << "2. List Habits\n";
    cout << "3. Mark Habit Done Today\n";
    cout << "4. Show Stats\n";
    cout << "5. Exit\n";
    cout << "Choose an option: ";
}

int main()
{
    HabitManager manager;
    manager.loadFile("data / habits.txt");
    int choice;
    do
    {
        showMenu();
        cin >> choice;
        cin.ignore();
        switch (choice) {
        case 1: {
            string name;
            cout << "Enter habit name: ";
            getline(std::cin, name);

            if (name.empty()) {
                cout << "Habit name cannot be empty.\n";
                break;
            }

            manager.addHabit(Habit(name));
            cout << "Habit added successfully!\n";
            break;
        }

        case 2:
            manager.listHabits();
            break;

        case 3: {
            manager.listHabits();
            cout << "Enter habit number to as mark done: ";

            int index;
            cin >> index;
            cin.ignore();

            manager.markHabitDone(index);
            break;
        }

        case 4:
            manager.showStatus();
            break;

        case 5:
            manager.saveFile("data/habits.txt");
            cout << "Habits saved. Goodbye!\n";
            break;

        default:
            cout << "Invalid option. Try again.\n";
        }

    } while (choice != 5);
    return 0;
}

