# Student Grade Calculator in C

A lightweight, robust command-line application built in C that calculates a student's letter grade based on their numerical marks out of 100.

## 🚀 Features
* **Input Validation:** Prevents non-numeric input crashes using standard safety checks.
* **Boundary Safeguards:** Restricts processing to valid ranges (0 to 100).
* **Optimized Execution:** Employs a streamlined conditional structure for rapid evaluation.

## 📊 Grading Criteria

| Marks Range | Grade |
| ----------- | ----- |
| 90 - 100    | A     |
| 80 - 89     | B     |
| 70 - 79     | C     |
| 60 - 69     | D     |
| Below 60    | F     |

## 🛠️ How to Compile and Run

### Prerequisites
Ensure you have a C compiler like `gcc` installed on your machine.

### Windows (PowerShell/CMD)
1. Compile the program:
   ```bash
   gcc practice.c -o calculator.exe
   ```
2. Run the executable:
   ```bash
   .\calculator.exe
   ```

### Linux / macOS
1. Compile the program:
   ```bash
   gcc practice.c -o calculator
   ```
2. Run the executable:
   ```bash
   ./calculator
   ```

## 📸 Example Usage
```text
Enter your marks (0-100): 85
Your grade: B
```

