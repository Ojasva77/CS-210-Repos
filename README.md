# CS-210-Repos

# Corner Grocer Item Tracking Program

## Project Summary

The Corner Grocer Item Tracking Program is a C++ program that helps a grocery store keep track of the items purchased throughout the day. The program reads grocery items from a text file and counts how many times each item appears. This information can help the store decide how to organize its produce section based on customer purchases.

The program allows users to search for an individual item, display the frequency of all items, view a histogram, and exit the program. It also creates a backup file called `frequency.dat` that stores the items and their frequencies.

## What Did I Do Particularly Well?

I did well at organizing the program into a class with separate functions for each task. I used a map to count the grocery items and display them in alphabetical order. I also added comments to explain important parts of the code. These choices helped me keep the program organized and easier to understand.

## Where Could I Enhance My Code?

I could improve the program by allowing users to search for items without worrying about uppercase or lowercase letters. I could also improve input validation and provide clearer error messages if a file cannot be opened. Another improvement would be to allow the program to update its data when new grocery items are added. These changes would make the program easier to use and more reliable.

## What Was Most Challenging, and How Did I Overcome It?

One of the most challenging parts was reading the input file and counting how many times each item appeared. I overcame this by using a map to store each item and increase its count whenever it appeared in the file. Testing the program helped me understand how file handling and maps work in C++.

Resources such as zyBooks, course materials, compiler error messages, and C++ documentation are useful tools that I can continue using when I encounter problems in future projects.

## What Skills Are Transferable to Other Projects?

This project helped me practise C++ programming, classes, maps, loops, conditional statements, file input and output, and basic input validation. These skills can be used in other programs that need to organize data, count records, or save information to files. Learning how to break a problem into smaller functions will also help me with future programming assignments.

## How Did I Make the Program Maintainable, Readable, and Adaptable?

I used descriptive names for the class, variables, and functions so that their purposes are clear. I separated the program into functions to make each task easier to understand and update. I also included comments to explain important operations. Using a class with private data and public functions helped organize the program. These practices make it easier to find errors, make improvements, and add new features in the future.

## Technologies Used

- C++
- Standard Template Library (STL)
- Maps
- File input and output
- Microsoft Visual Studio

## How to Run the Program

1. Open the Visual Studio project.
2. Make sure `CS210_Project_Three_Input_File.txt` is available in the program's working directory.
3. Compile and run the program.
4. Choose an option from the menu to search for an item, display all frequencies, view the histogram, or exit.
5. Check `frequency.dat` to view the saved item frequencies.

## Files

- `main.cpp` - Contains the C++ source code.
- `CS210_Project_Three_Input_File.txt` - Contains the grocery items used by the program.
- `frequency.dat` - Automatically generated backup file containing each item's frequency.
