Hostel Management System in C

A Comprehensive Console-Based Student Record Management Project

The Hostel Management System is a structured, menu-driven application developed in C programming language to help manage essential hostel-related information such as student records, room allocation, and basic administrative operations. This project is especially useful for students, beginners, and academic submissions as it demonstrates the practical use of structures, arrays, functions, and basic algorithms in C.

📖 Overview

Hostels often need a simple and reliable record system to maintain information about students staying on the premises. This project provides a lightweight implementation of such a system without using databases or advanced file handling—making it ideal for classroom learning and demonstration purposes.

The program allows the user to perform several actions, including adding new students, displaying the entire list of hostel residents, searching for a particular student using their ID, and deleting records when students leave the hostel. All data is processed in real-time using an array of structures.

🧠 Key Concepts Covered

This project demonstrates several important C programming concepts:

✔️ Structures

A custom structure Student is used to store multiple values such as:

Student ID

Student Name

Room Number

This teaches how to group related data and handle complex data types.

✔️ Arrays

The hostel data is stored in an array of Student structures.
This helps in understanding how to manage collections of records.

✔️ Functions

Each operation in the program is modularized into a function:

addStudent()

displayStudents()

searchStudent()

deleteStudent()

This improves code organization, readability, and scalability.

✔️ Loop-Based Menu System

The main() function uses a do-while loop and a menu system to continuously take input from the user, demonstrating interactive program design.

✨ Features in Detail
1️⃣ Add Student

Users can add a new student by entering:

Student ID

Student Name

Allocated Room Number

The program stores this data and increases the count of total hostel residents.

2️⃣ Display All Students

This feature shows a clear, formatted list of:

All student IDs

Names

Room numbers

It allows hostel administrators to quickly check current occupancy.

3️⃣ Search for a Student

The user can search for a student using their unique ID.
If found, the program displays the student's complete details.
If not, it responds with a proper “not found” message.

4️⃣ Delete Student

This functionality removes a student from the system.
The program shifts the remaining elements in the array to maintain continuity, ensuring the list stays clean and organized.

5️⃣ Exit

Safely terminates the program once the user decides to stop.

🎯 Purpose of the Project

This project is excellent for:

Academic assignments or lab submissions

Demonstrating understanding of intermediate C programming

Learning how to build management systems

Practicing modular code writing and data handling

Gaining experience with menu-driven user interfaces

📌 Advantages of This Program

Fully menu-driven: easy to use even for beginners

Organized and readable code format

Covers major C programming concepts in one project

Can be extended with file handling, sorting, login system, etc.

Runs on any C compiler (GCC, Turbo C, CodeBlocks, etc.)

🔧 Possible Future Enhancements

You can expand this project further by adding:

File handling to save data permanently

Room availability tracking

Fee and payment management

Student check-in/check-out system

Password-protected admin login

Sorting options (by name, ID, room number)
<img width="792" height="363" alt="Screenshot 2025-12-12 133843" src="https://github.com/user-attachments/assets/2e2b786a-d244-45f0-937a-f95b6b94f62a" />
<img width="789" height="611" alt="Screenshot 2025-12-12 133829" src="https://github.com/user-attachments/assets/6024f7cb-1600-4343-a457-d9525687d6ec" />
<img width="866" height="653" alt="Screenshot 2025-12-12 133753" src="https://github.com/user-attachments/assets/7eb03818-0d28-4c91-9580-e4073f247020" /><img width="819" height="547" alt="Screenshot 2025-12-12 133734" src="https://github.com/user-attachments/assets/0a1d77dd-f8c1-4370-863f-814e24c6a140" />

<img width="812" height="539" alt="Screenshot 2025-12-12 133720" src="https://github.com/user-attachments/assets/f18a8f25-60f7-43fe-9fdb-3ffca0770f12" />
