# Habit Tracker CLI

A simple and lightweight **Command-Line Interface (CLI) Habit Tracker** written in C++ using **Object-Oriented Programming (OOP)** principles. This application helps users build good habits by tracking daily completion and maintaining streaks.

It is designed as a portfolio project demonstrating clean class design, file persistence, and menu-driven interaction.

---

## Features

- Add new habits  
- Mark habits as completed for today  
- View all habits with streaks  
- Display daily completion statistics  
- Persistent storage using `data/habits.txt`  
- Simple and user-friendly CLI menu  

---

## Class Design

### Habit
- Stores habit name  
- Tracks current streak  
- Tracks whether completed today  
- Handles serialization/deserialization  

### HabitManager
- Manages a collection of habits  
- Adds and lists habits  
- Marks habits as done  
- Shows statistics  
- Saves and loads from file  

---

## Technologies Used

- C++  
- Object-Oriented Programming (encapsulation, classes)  
- Standard Library: `vector`, `string`, `fstream`, `sstream`  
- File I/O for persistence  

---

## How to Run

1. Clone the repository:

```bash
git clone https://github.com/your-username/HabitTrackerCLI.git
```

2. Compile the project

```bash
g++ src/*.cpp -Iinclude -o HabitTracker
```

3. Run the project

```bash
./HabitTracker
```

4. Follow the menu instructions on the terminal

---

## Demonstration

https://github.com/user-attachments/assets/99c7c3cc-5d7a-4e54-bb49-6f79ddcf7a53
