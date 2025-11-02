# Day9_Smart_Attendance_Tracker
**Student Name:** P. Adithya  
**Roll No:** AP25110090156  
**Challenge:** Day 9 - Smart Attendance Tracker  

## Description
This C program calculates attendance percentages for students and determines eligibility based on a 75%% threshold.  
It also computes the class average attendance and displays a summary.

## Build Commands
### Linux/macOS:
```
mkdir -p build
gcc -std=c11 -Wall -Wextra -O2 main.c -o build/program
```

### Windows (MinGW):
```
mkdir build
gcc -std=c11 -Wall -Wextra -O2 main.c -o build/program.exe
```

## Run Commands
### Linux/macOS:
```
./build/program
```

### Windows:
```
build\program.exe
```

## Output Example
```
Enter total number of students: 3
Enter attendance for student 1 (out of 30): 28
Student 1: 93.33%% - Eligible
Enter attendance for student 2 (out of 30): 20
Student 2: 66.67%% - Not Eligible
Enter attendance for student 3 (out of 30): 30
Student 3: 100.00%% - Eligible

Class Summary:
Total Students: 3
Eligible Students: 2
Not Eligible: 1
Average Attendance: 86.67%%
```
