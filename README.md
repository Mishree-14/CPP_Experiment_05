C++ Experiment 5: To study and implement C++ decision making statements

Aim: 
> To write C++ programs using if-else and nested if statements.
> To use switch case for multiple conditions.

Objectives:
> Learn how to use if-else and nested if in real-life problems.
> Understand how switch case works and how to use break and exit(0).

Theory:
- If-Else Statement
> The if-else statement is used when we want to do know and decide if a condition is true or false.

Syntax
if (condition) {
    // Code runs if condition is true
}
else {
    // Code runs if condition is false
}

- Nested If Statement
> When an if is written inside another if, it is called a nested if.
> Used when there are multiple conditions to check.
 
Syntax
if (condition1) {
    // Code if condition1 is true

    if (condition2) {
        // Code if condition2 is also true
    }
    else {
        // Code if condition2 is false
    }
}
else {
    // Code if condition1 is false
}

Switch Case Statement
> Used when we have to choose between many options based on one input variable.
> Helps reduce multiple if-else if lines.
> Use break to stop the program from checking more cases and overrwritting it.
> If no case matches, it runs the default statement.

Syntax
switch (expression) {
    case value1:
        // Code block 
        break;

    case value2:
        // Code block
        break;

    // You can add as many cases as you want.
    default:
        // Code if no case matches
}

Program Descriptions
- Concepts Used
> if-else
> nested if
> switch case
> break and exit(0)

Sample Programs & Outputs

> Check if Number is Even or Odd
Enter any number: -23  
The number is negative.
 
> Finding greatese of 3 numbers 
Enter 3 numbers: 2 8 0
8 is greatest

Enter 3 numbers: 0 1 1
1 is greatest

Enter 3 numbers: -4 5 4
5 is greatest

> Calculator (switch case)

🔹 Traffic Signal Meaning
cpp
Copy
Edit
Enter color code (R/G/Y): G  
Go safely!
cpp
Copy
Edit
Enter color code (R/G/Y): B  
Invalid Signal

