# C Programming Practice Problems

This folder contains 42 standalone C programs, numbered `Problem-1.c` through
`Problem-42.c`. They cover basic input and output, arithmetic, conditional
logic, recursion, one-dimensional arrays, and two-dimensional matrices.

Each program has its own `main` function, so compile and run one source file at
a time.

## Building and running

With GCC installed, open a terminal in this folder and compile a program, for
example:

```powershell
gcc Problem-1.c -o Problem-1.exe
.\Problem-1.exe
```

Replace `Problem-1.c` and `Problem-1.exe` with the name of the program you want
to run. Most programs read input from the terminal; enter the values requested
by the prompts (or, for programs without prompts, enter the expected values).

## Problem index

### Basic input, output, and calculations

1. [Problem 1 - Personal details](Problem-1.c)  
   Reads a student's name, age, and percentage, then displays the values. The
   name is read as a single word, and the percentage is stored as an integer.

2. [Problem 2 - Arithmetic calculator](Problem-2.c)  
   Reads two integers and prints their sum, difference, product, integer
   quotient, and remainder. The second number must not be zero.

3. [Problem 3 - Rectangle measurements](Problem-3.c)  
   Reads a rectangle's length and breadth and calculates its area. Although
   the source comment mentions perimeter, this program currently prints only
   the area.

4. [Problem 4 - Circle measurements](Problem-4.c)  
   Reads an integer radius and calculates the circle's area, circumference,
   and diameter using an approximation of pi (`3.14`).

5. [Problem 5 - Celsius to Fahrenheit](Problem-5.c)  
   Reads a Celsius temperature and converts it to Fahrenheit using
   `F = (C * 9 / 5) + 32`. The input and result are integers.

6. [Problem 6 - Simple interest](Problem-6.c)  
   Reads principal, annual interest rate, and time in years, then calculates
   simple interest with `(principal * rate * time) / 100`. Integer arithmetic
   means any fractional part is discarded.

7. [Problem 7 - Average marks](Problem-7.c)  
   Reads marks for five subjects, calculates their total and average, and
   prints both. The average is calculated as a floating-point value.

8. [Problem 8 - Days to weeks](Problem-8.c)  
   Converts a total number of days into whole weeks and leftover days using
   integer division and the remainder operator.

9. [Problem 9 - Swap using a temporary variable](Problem-9.c)  
   Reads two integers, displays them, swaps them using a third variable, and
   displays the swapped values.

10. [Problem 10 - Swap without a temporary variable](Problem-10.c)  
    Swaps two integers using addition and subtraction, then prints the values
    before and after. Very large values can overflow during the addition.

11. [Problem 11 - Salary calculator](Problem-11.c)  
    Reads a basic salary, calculates HRA as 20% and DA as 40%, and prints both
    allowances and the gross salary.

12. [Problem 12 - Shopping bill](Problem-12.c)  
    Reads an item's price and quantity, then calculates the subtotal, 5% tax,
    and total bill. The amounts use integer arithmetic.

13. [Problem 13 - Discount calculation](Problem-13.c)  
    Reads an item's marked price and discount percentage, calculates the
    discount amount, and prints the price after the discount.

14. [Problem 14 - Kilometres to metres](Problem-14.c)  
    Converts a distance in kilometres to metres by multiplying by 1,000.

15. [Problem 15 - Last digit](Problem-15.c)  
    Reads an integer and prints its remainder after division by 10, which gives
    its last digit (with C's signed remainder behavior for negative input).

16. [Problem 16 - Sum of two digits](Problem-16.c)  
    Adds the tens digit and ones digit using division and remainder. This
    calculation is intended for a two-digit integer.

17. [Problem 17 - Reverse a number](Problem-17.c)  
    Reads an integer and performs one remainder-and-division step to build a
    value called `reverse`. As currently written, it does not loop over all
    digits, so it does not fully reverse a multi-digit number.

### Conditional logic and decision-making

18. [Problem 18 - ATM withdrawal alert](Problem-18.c)  
    Reads a withdrawal amount and displays a large-withdrawal alert when it is
    greater than 50,000; otherwise, it reports that the amount is within the
    limit.

19. [Problem 19 - Speed camera](Problem-19.c)  
    Reads a vehicle's speed and reports a speeding ticket if the speed is
    greater than 80 km/h.

20. [Problem 20 - Low stock alert](Problem-20.c)  
    Reads the current stock count and asks for a reorder when the count is
    below 10 units.

21. [Problem 21 - Movie ticket eligibility](Problem-21.c)  
    Reads a person's age and allows entry when the age is at least 18.

22. [Problem 22 - Online order delivery charge](Problem-22.c)  
    Reads an order amount and reports free delivery for amounts greater than
    500; otherwise, it prints a delivery charge of 50.

23. [Problem 23 - Exam pass or fail](Problem-23.c)  
    Reads a student's marks and reports a pass for marks of at least 35;
    otherwise, it reports a fail.

24. [Problem 24 - Job application screening](Problem-24.c)  
    Reads a candidate's marks percentage and years of experience. A candidate
    must have at least 60% and at least two years of experience to be
    shortlisted for an interview.

25. [Problem 25 - Flight boarding check](Problem-25.c)  
    Reads ticket validity and arrival status as 1 (yes) or 0 (no). Boarding is
    allowed only when the ticket is valid and the passenger arrives on time.

26. [Problem 26 - Loan approval](Problem-26.c)  
    Reads monthly income and credit score. Income must be greater than 30,000
    to qualify for consideration; a score greater than 750 leads to instant
    approval, and other qualifying scores go to manual review.

27. [Problem 27 - Electricity bill calculator](Problem-27.c)  
    Reads units consumed and calculates the bill using increasing rates for
    successive usage bands: 5 per unit for the first 100 units, 7 for the next
    100, 10 for the next 100, and 12 for units above 300. This is a
    progressive, tiered calculation.

28. [Problem 28 - Cab fare estimator](Problem-28.c)  
    Reads a trip distance and prints a flat fare based on its distance band:
    100 for up to 5 km, 200 for up to 10 km, 350 for up to 20 km, and 500
    above 20 km.

29. [Problem 29 - Weather-based clothing suggestion](Problem-29.c)  
    Reads the temperature and suggests clothing: a heavy jacket below 10, a
    sweater from 10 through 20, light clothing above 20 through 30, and cotton
    clothes plus hydration above 30. The input is a floating-point value.

### Recursion

30. [Problem 30 - Print 1 to 5 recursively](Problem-30.c)  
    Uses `printNumbers` to print a number and call itself with the next number.
    The recursion stops when the number becomes greater than 5.

31. [Problem 31 - Factorial with recursion](Problem-31.c)  
    Calculates the factorial of a non-negative integer recursively, using 0
    and 1 as base cases. Factorials grow quickly, so large inputs can exceed
    the range of the program's `int` type.

32. [Problem 32 - Sum marks recursively](Problem-32.c)  
    Reads the number of subjects, then recursively prompts for each subject's
    marks and returns their sum. A negative subject count is rejected.

### One-dimensional arrays

33. [Problem 33 - Initialize and display an array](Problem-33.c)  
    Initializes an integer array with four values and prints each value with
    its zero-based index.

34. [Problem 34 - Read and display array elements](Problem-34.c)  
    Reads five integers into an array and prints each value alongside its
    zero-based index.

35. [Problem 35 - Sum array elements](Problem-35.c)  
    Reads five integers, accumulates their sum, and prints the total.

36. [Problem 36 - Count even and odd elements](Problem-36.c)  
    Reads five integers, checks each value with the remainder operator, and
    prints the counts of even and odd elements.

37. [Problem 37 - Find largest and smallest elements](Problem-37.c)  
    Reads five integers, initializes the largest and smallest values from the
    first element, then compares the remaining elements to find both results.

38. [Problem 38 - Search for the first matching element](Problem-38.c)  
    Reads five integers and a value to search for. It prints the zero-based
    index of the first match, or a not-found message if there is no match.

39. [Problem 39 - Find every matching element](Problem-39.c)  
    Reads five integers and a value to search for, then prints the zero-based
    indices of all matching elements. It reports when there are no matches.

### Two-dimensional arrays (matrices)

40. [Problem 40 - Add two matrices](Problem-40.c)  
    Reads two fixed-size 2x2 integer matrices, adds corresponding elements,
    and prints the resulting matrix. Despite the source comment mentioning
    square or rectangular matrices, the program only handles 2x2 matrices.

41. [Problem 41 - Subtract two matrices](Problem-41.c)  
    Reads two fixed-size 2x2 integer matrices, subtracts the second matrix
    from the first element by element, and prints the difference.

42. [Problem 42 - Multiply two matrices](Problem-42.c)  
    Reads two fixed-size 2x2 integer matrices and multiplies them using the
    row-by-column method, then prints the product matrix.

## Formula and logic reference

This section collects the formulas and key rules used by the problems that
perform calculations or apply a decision rule. Each formula links to the
specific source file. Unless otherwise noted, the programs use integer
variables where shown, so division may discard the fractional part.

### Arithmetic, measurement, and conversions

- [Problem 2 - Arithmetic operations](Problem-2.c)
  - Sum: `a + b`
  - Difference: `a - b`
  - Product: `a * b`
  - Integer quotient: `a / b`
  - Remainder: `a % b` (`b` must not be zero)
- [Problem 3 - Rectangle area](Problem-3.c)
  - Area: `length * breadth`
  - The source currently calculates only area. Rectangle perimeter, if added,
    would be `2 * (length + breadth)`.
- [Problem 4 - Circle measurements](Problem-4.c)
  - Diameter: `2 * radius`
  - Circumference: `2 * pi * radius`
  - Area: `pi * radius * radius`
  - The program uses `pi = 3.14`.
- [Problem 5 - Celsius to Fahrenheit](Problem-5.c)
  - `fahrenheit = (celsius * 9 / 5) + 32`
- [Problem 6 - Simple interest](Problem-6.c)
  - `simple_interest = (principal * rate * time) / 100`
- [Problem 7 - Total and average marks](Problem-7.c)
  - `total = mark1 + mark2 + mark3 + mark4 + mark5`
  - `average = total / 5.0`
- [Problem 8 - Days to weeks and remaining days](Problem-8.c)
  - `weeks = total_days / 7`
  - `remaining_days = total_days % 7`
- [Problem 9 - Swap using a temporary variable](Problem-9.c)
  - `temp = a; a = b; b = temp`
- [Problem 10 - Swap using arithmetic](Problem-10.c)
  - `a = a + b; b = a - b; a = a - b`
  - This technique can overflow for large integers.
- [Problem 11 - Salary components](Problem-11.c)
  - `HRA = (basic_salary * 20) / 100`
  - `DA = (basic_salary * 40) / 100`
  - `gross_salary = basic_salary + HRA + DA`
- [Problem 12 - Shopping bill](Problem-12.c)
  - `subtotal = price * quantity`
  - `tax = (subtotal * 5) / 100`
  - `total = subtotal + tax`
- [Problem 13 - Discount and final price](Problem-13.c)
  - `discount_amount = (marked_price * discount_percentage) / 100`
  - `final_price = marked_price - discount_amount`
- [Problem 14 - Kilometres to metres](Problem-14.c)
  - `metres = kilometres * 1000`
- [Problem 15 - Last digit](Problem-15.c)
  - `last_digit = number % 10`
- [Problem 16 - Sum the digits of a two-digit number](Problem-16.c)
  - `digit_sum = (number / 10) + (number % 10)`
- [Problem 17 - Reverse a number](Problem-17.c)
  - The general repeated-step method is `reversed = reversed * 10 + number % 10`,
    followed by `number = number / 10` until no digits remain.
  - The current source performs this step only once; it does not yet reverse
    every digit of a multi-digit number.

### Thresholds and piecewise rules

- [Problem 18 - ATM withdrawal alert](Problem-18.c): alert when
  `withdrawal_amount > 50000`.
- [Problem 19 - Speed camera](Problem-19.c): flag speeding when
  `speed > 80 km/h`.
- [Problem 20 - Low stock alert](Problem-20.c): reorder when `stock < 10`.
- [Problem 21 - Movie ticket eligibility](Problem-21.c): allow entry when
  `age >= 18`.
- [Problem 22 - Delivery charge](Problem-22.c): free delivery when
  `order_amount > 500`; otherwise, charge `50`.
- [Problem 23 - Exam result](Problem-23.c): pass when `marks >= 35`.
- [Problem 24 - Job screening](Problem-24.c): shortlist when
  `marks >= 60` **and** `experience >= 2 years`.
- [Problem 25 - Flight boarding](Problem-25.c): allow boarding when
  `valid_ticket == 1` **and** `on_time == 1`.
- [Problem 26 - Loan decision](Problem-26.c): income must be `> 30000`;
  among eligible applicants, credit score `> 750` means instant approval,
  otherwise manual review.
- [Problem 27 - Tiered electricity bill](Problem-27.c):
  - For `units <= 100`: `bill = units * 5`
  - For `100 < units <= 200`: `bill = 100 * 5 + (units - 100) * 7`
  - For `200 < units <= 300`:
    `bill = 100 * 5 + 100 * 7 + (units - 200) * 10`
  - For `units > 300`:
    `bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12`
- [Problem 28 - Cab fare bands](Problem-28.c): fare is `100` for distance up
  to 5 km, `200` for above 5 through 10 km, `350` for above 10 through 20 km,
  and `500` above 20 km.
- [Problem 29 - Clothing suggestion bands](Problem-29.c): below 10°C suggests
  a heavy jacket; 10°C through 20°C a sweater; above 20°C through 30°C light
  clothing; and above 30°C cotton clothing and hydration.

### Recursion, arrays, and matrices

- [Problem 30 - Print numbers recursively](Problem-30.c): print `n`, then
  call `printNumbers(n + 1)`; stop when `n > 5`.
- [Problem 31 - Factorial](Problem-31.c):
  - Base case: `factorial(0) = factorial(1) = 1`
  - Recursive case: `factorial(n) = n * factorial(n - 1)`
- [Problem 32 - Sum marks recursively](Problem-32.c):
  - Base case: `sum(0) = 0`
  - Recursive case: `sum(n) = mark_n + sum(n - 1)`
- [Problem 35 - Sum array elements](Problem-35.c):
  `sum = a[0] + a[1] + a[2] + a[3] + a[4]`.
- [Problem 36 - Count even and odd values](Problem-36.c): a value is even
  when `value % 2 == 0`; otherwise it is odd.
- [Problem 37 - Largest and smallest values](Problem-37.c): initialize both
  from the first element, then update largest if `a[i] > largest` and smallest
  if `a[i] < smallest`.
- [Problem 38 - First array match](Problem-38.c) and
  [Problem 39 - All array matches](Problem-39.c): a value matches when
  `a[i] == search_value`; the array index `i` is zero-based.
- [Problem 40 - Matrix addition](Problem-40.c): for each row `i` and column
  `j`, `sum[i][j] = a[i][j] + b[i][j]`.
- [Problem 41 - Matrix subtraction](Problem-41.c): for each row `i` and column
  `j`, `difference[i][j] = a[i][j] - b[i][j]`.
- [Problem 42 - Matrix multiplication](Problem-42.c): for each output row `i`
  and column `j`,
  `product[i][j] = sum over k of (a[i][k] * b[k][j])`.

## Complete source code

The following listings reproduce the contents of the corresponding source files.

### [Problem-1.c](Problem-1.c)

```c
// Personal details 
// Input a student’s name, age, and percentage, then display them neatly. 

#include <stdio.h>
void main() {
    char name[50];
    int age, percentage;
    printf("Enter your details:\n");
    printf("Name: ");
    scanf("%s", name);
    printf("Age: ");
    scanf("%d", &age);
    printf("Percentage: ");
    scanf("%d", &percentage);
    printf("\nStudent Details:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Percentage: %d%%\n", percentage);
}
```

### [Problem-2.c](Problem-2.c)

```c
// Arithmetic calculator 
// Input two integers and print their sum, difference, product, quotient, and remainder.


#include <stdio.h>

int main() {
    int a, b, sum, diff, product, quotient, remainder;
    printf("Enter Any Numbers:\n");
    scanf("%d", &a);
    printf("Enter Any Numbers:\n");
    scanf("%d", &b);
    // Perform arithmetic operations
    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;
    remainder = a % b;
    // Display the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    return 0;
}
```

### [Problem-3.c](Problem-3.c)

```c
// Rectangle measurements 
// Input length and breadth. Calculate area and perimeter. 
#include <stdio.h>

int main() {
    int l, b;
    printf("Enter the length of the rectangle:\n");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle:\n");
    scanf("%d", &b);
    int area = l * b;
    printf("Area of the rectangle: %d\n", area);
    return 0;
}
```

### [Problem-4.c](Problem-4.c)

```c
// Circle measurements 
// Input the radius. Calculate diameter, circumference, and area. Use 3.14 for π. 


#include <stdio.h>

float pi = 3.14; // Global variable for pi
int main() {
    int r;
    printf("Enter the radius of the circle:\n");
    scanf("%d", &r);
    // Calculate area, circumference, and diameter of the circle
    float area = pi * r * r;
    float circumference = 2 * pi * r;
    float diameter = 2 * r;

    printf("\nArea of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
    printf("Diameter of the circle: %.2f\n", diameter);

    return 0;
}
```

### [Problem-5.c](Problem-5.c)

```c
// Temperature conversion 
// Input temperature in Celsius and convert it to Fahrenheit. 
// Formula: F = (C × 9 / 5) + 32 

#include <stdio.h>

int main() {
    int temp;
    printf("Enter temperature in Celsius:\n");
    scanf("%d", &temp);
    // Convert Celsius to Fahrenheit
    int fahrenheit = (temp * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %d\n", fahrenheit);
    return 0;
}
```

### [Problem-6.c](Problem-6.c)

```c
//Simple interest 
//Input principal, rate, and time. Calculate simple interest and total amount.
// Formula: SI = (P × R × T) / 100 

#include <stdio.h>

int main() {
    int principal, rate, time;
    printf("Enter the principal amount:\n");
    scanf("%d", &principal);
    printf("Enter the rate of interest:\n");
    scanf("%d", &rate);
    printf("Enter the time in years:\n");
    scanf("%d", &time);
    // Calculate simple interest
    int SI = (principal * rate * time) / 100;
    printf("Simple Interest: %d\n", SI);
    return 0;
}
```

### [Problem-7.c](Problem-7.c)

```c
// Average marks 
// Input marks in five subjects. Calculate total and average. 

#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5, total;
    printf("Enter marks for 5 subjects:\n");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    // Calculate total marks
    float average = (sub1 + sub2 + sub3 + sub4 + sub5) / 5.0;
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("Total Marks: %d\n Average: %.2f\n", total, average);
    return 0;
}
```

### [Problem-8.c](Problem-8.c)

```c
//Days conversion 
//Input a total number of days and convert it into weeks and remaining days. 

#include <stdio.h>
int  main(){
    int day, weeks, remainingDays;
    printf("Enter a total Number of days:\n");
    scanf("%d",&day);
    weeks = day / 7;
    remainingDays = day % 7;
    printf("Number of weeks: %d\n", weeks);
    printf("Remaining days in the week: %d\n", remainingDays);
    return 0;
}
```

### [Problem-9.c](Problem-9.c)

```c
// Swap two numbers using a third variable 
// Display the values before and after swapping. 

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter any number:\n");
    scanf("%d", &a);
    printf("Enter any number:\n");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    // Swapping using a temporary variable
    c = a;
    a = b;
    b = c;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
```

### [Problem-10.c](Problem-10.c)

```c
// Swap without a third variable 
// Use arithmetic operators to exchange two integer values.

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter any number:\n");
    scanf("%d", &a);
    printf("Enter any number:\n");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    // Swapping without using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
```

### [Problem-11.c](Problem-11.c)

```c
// Salary calculator 
// Input basic salary. Calculate: 
// • HRA = 20% of basic salary 
// • DA = 40% of basic salary 
// • Gross salary = basic salary + HRA + DA
// formula hra = (basic salary * 20) / 100
// da = (basic salary * 40) / 100

#include <stdio.h>

int main() {
    int basicSalary, hra, da, grossSalary;
    printf("Enter the basic salary:\n");
    scanf("%d", &basicSalary);
    hra = (basicSalary * 20) / 100;
    da = (basicSalary * 40) / 100;
    grossSalary = basicSalary + hra + da;
    printf("HRA: %d\n", hra);
    printf("DA: %d\n", da);
    printf("Gross Salary: %d\n", grossSalary);
    return 0;
}
```

### [Problem-12.c](Problem-12.c)

```c
// Shopping bill 
// Read Input an item’s price and quantity. Calculate subtotal, 5% tax, and final bill.

#include <stdio.h>

int main() { 
    int price, quantity, subtotal, tax, total;
    printf("Enter the price of the item:\n");
    scanf("%d", &price);
    printf("Enter the quantity of the item:\n");
    scanf("%d", &quantity);
    subtotal = price * quantity;
    tax = (subtotal * 5) / 100; // tax rate of 5%
    total = subtotal + tax;
    printf("\nSubtotal: %d\n", subtotal);
    printf("Tax: %d\n", tax);
    printf("\nTotal: %d\n", total);
    return 0;
}
```

### [Problem-13.c](Problem-13.c)

```c
// Discount calculation 
// Input the marked price and discount percentage. Calculate the discount amount and final price. 
// formula discount amount = (marked price * discount percentage) / 100

#include <stdio.h>

int main() {
    int markedPrice, discountPercentage, discountAmount, finalPrice;
    printf("Enter the marked price of the item:\n");
    scanf("%d", &markedPrice);
    printf("Enter the discount percentage:\n");
    scanf("%d", &discountPercentage);
    discountAmount = (markedPrice * discountPercentage) / 100;
    finalPrice = markedPrice - discountAmount;
    printf("Discount Amount: %d\n", discountAmount);
    printf("Final Price after discount: %d\n", finalPrice);
    return 0;
}
```

### [Problem-14.c](Problem-14.c)

```c
// Distance conversion  
// Input distance in kilometres and convert it into metres 
// formula: metres = kilometres * 1000

#include <stdio.h>
int main() {
    int km, m;
    printf("Enter distance in kilometres:\n");
    scanf("%d", &km);
    m = km * 1000;
    printf("Distance in metres: %d\n", m);
}
```

### [Problem-15.c](Problem-15.c)

```c
// Last digit 
// Input an integer and display its last digit using the remainder
// formula: last_digit = number % 10
#include <stdio.h>

int main() {
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    a = a % 10;
    printf("Last digit of the number: %d\n", a);
    return 0;
}
```

### [Problem-16.c](Problem-16.c)

```c
// Sum of digits of a two-digit number 
// Example: Input 47, output 4 + 7 = 11.
// formula: sum = (number / 10) + (number % 10)

#include <stdio.h>

int main() {
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    a = (a / 10) + (a % 10);
    printf("Sum of digits of the number: %d\n", a);
    return 0;
}
```

### [Problem-17.c](Problem-17.c)

```c
// Reverse a number
#include <stdio.h>
int main() {
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    int reverse = 0;
        reverse = reverse * 10 + a % 10;
        a = a / 10;
    printf("Reversed number: %d\n", reverse);
    return 0;
}
```

### [Problem-18.c](Problem-18.c)

```c
// ATM Withdrawal Alert 
// Scenario: A bank wants to alert customers if they withdraw more than ₹50,000 in a single  transaction. Write a program that takes the withdrawal amount and prints "Alert: Large  withdrawal!" if applicable.

#include <stdio.h>

int main() {
    int amount;
    printf("Enter the withdrawal amount:\n");
    scanf("%d", &amount);
    if (amount > 50000) {
        printf("Alert: Large withdrawal!\n");
    } else {
        printf("Withdrawal amount is within the limit.\n");
    }
    return 0;
}
```

### [Problem-19.c](Problem-19.c)

```c
// Speed Camera 
// Scenario: A speed camera on a highway flags any vehicle going faster than 80 km/h. Write a  program that takes a vehicle's speed and prints "Speeding ticket issued!" if it exceeds the  limit.
#include <stdio.h>

int main() {
    int speed;
    printf("Enter the vehicle's speed (km/h):\n");
    scanf("%d", &speed);
    if (speed > 80) {
        printf("Speeding ticket issued!\n");
    } else {
        printf("Vehicle is within the speed limit.\n");
    }
    return 0;
}
```

### [Problem-20.c](Problem-20.c)

```c
//  Low Stock Alert 
// Scenario: A shop's inventory system should alert the manager if the stock of an item falls  below 10 units. Write a program that takes the current stock and prints "Reorder stock now!"  if needed. 
#include <stdio.h>

int main() {
    int stock;
    printf("Enter the current stock:\n");
    scanf("%d", &stock);
    if (stock < 10) {
        printf("Reorder stock now!\n");
    } else {
        printf("Stock is sufficient.\n");
    }
    return 0;
}
```

### [Problem-21.c](Problem-21.c)

```c
// Movie Ticket Eligibility 
// Scenario: A cinema allows entry to an "A-rated" movie only if the person is 18 or older. Write  a program that takes the age as input and prints whether entry is allowed or denied.
#include <stdio.h>

int main() {
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Entry allowed.\n");
    } else {
        printf("Entry denied.\n");
    }
    return 0;
}
```

### [Problem-22.c](Problem-22.c)

```c
// Online Order Delivery Charge 
// Scenario: An online store offers free delivery for orders above ₹500; otherwise, a ₹50  delivery charge applies. Write a program that takes the order amount and prints the applicable  delivery charge. 
#include <stdio.h>

int main() {
    int orderAmount;
    printf("Enter the order amount (₹):\n");
    scanf("%d", &orderAmount);
    if (orderAmount > 500) {
        printf("Free delivery!\n");
    } else {
        printf("Delivery charge: ₹50\n");
    }
    return 0;
}
```

### [Problem-23.c](Problem-23.c)

```c
// Exam Pass/Fail 
// Scenario: A student needs at least 35 marks out of 100 to pass an exam. Write a program that  takes the marks and prints whether the student passed or failed.
#include <stdio.h>

int main() {
    int marks;
    printf("Enter the student's marks:\n");
    scanf("%d", &marks);
    if (marks >= 35) {
        printf("Student has passed.\n");
    } else {
        printf("Student has failed.\n");
    }
    return 0;
}
```

### [Problem-24.c](Problem-24.c)

```c
// Job Application Screening 
// Scenario: A company shortlists candidates only if they have a minimum of 60% marks.  Among those, only candidates with at least 2 years of experience get called for an interview.  Write a program that takes marks percentage and years of experience, and prints the outcome. 

#include <stdio.h>

int main() {
    int marks;
    int experience;
    printf("Enter the candidate's marks (%%):\n");
    scanf("%d", &marks);
    printf("Enter the candidate's years of experience:\n");
    scanf("%d", &experience);

    if (marks >= 60) {
        if (experience >= 2) {
            printf("Candidate is shortlisted for an interview.\n");
        } else {
            printf("Candidate does not have enough experience.\n");
        }
    } else {
        printf("Candidate does not meet the minimum marks requirement.\n");
    }

    return 0;
}
```

### [Problem-25.c](Problem-25.c)

```c
// Flight Boarding Check 
// Scenario: An airline allows boarding only if the passenger has a valid ticket. Among those  with valid tickets, they must also arrive before the gate closes to be allowed to board. Write a  program that takes ticket validity (1/0) and arrival status (1 = on time, 0 = late), and prints the  boarding result. 

#include <stdio.h>
int main() {
    int validTicket;
    int arrivalStatus;
    printf("Enter ticket validity (1 for valid, 0 for invalid):\n");
    scanf("%d", &validTicket);
    printf("Enter arrival status (1 for on time, 0 for late):\n");
    scanf("%d", &arrivalStatus);

    if (validTicket) {
        if (arrivalStatus) {
            printf("Boarding allowed.\n");
        } else {
            printf("Boarding denied: Arrived late.\n");
        }
    } else {
        printf("Boarding denied: Invalid ticket.\n");
    }

    return 0;
}
```

### [Problem-26.c](Problem-26.c)

```c
// Loan Approval 
// Scenario: A bank approves a loan only if the applicant's monthly income is above ₹30,000.  Among those, the loan is approved instantly only if their credit score is above 750; otherwise,  it goes for manual review. Write a program that takes income and credit score, and prints the  result. 

#include <stdio.h>
int main() {
    int income;
    int creditScore;
    printf("Enter the applicant's monthly income (₹):\n");
    scanf("%d", &income);
    printf("Enter the applicant's credit score:\n");
    scanf("%d", &creditScore);

    if (income > 30000) {
        if (creditScore > 750) {
            printf("Loan approved instantly.\n");
        } else {
            printf("Loan goes for manual review.\n");
        }
    } else {
        printf("Loan denied: Income below threshold.\n");
    }

    return 0;
}
```

### [Problem-27.c](Problem-27.c)

```c
// Electricity Bill Calculator 
// Scenario: An electricity board charges based on units consumed: 
// Up to 100 units: ₹5/unit 
// 101–200 units: ₹7/unit
// 201–300 units: ₹10/unit 
// Above 300 units: ₹12/unit 
// Write a program that takes units consumed and prints the total bill. 
// formula: bill = (units * rate per unit)
#include <stdio.h>
int main() {
    int units;
    printf("Enter the number of units consumed:\n");
    scanf("%d", &units);
    int bill = 0;

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    } else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    printf("Total electricity bill: ₹%d\n", bill);
    return 0;
}
```

### [Problem-28.c](Problem-28.c)

```c
// Cab Fare Estimator 
// Scenario: A cab company categorizes trip fares based on distance: 
// 0–5 km: ₹100 
// 5–10 km: ₹200 
// 10–20 km: ₹350 
// Above 20 km: ₹500 
// Write a program that takes the distance and prints the fare category.
#include <stdio.h>
int main() {
    float distance;
    printf("Enter the distance of the trip (in km):\n");
    scanf("%f", &distance);

    if (distance <= 5) {
        printf("Fare: ₹100\n");
    } else if (distance <= 10) {
        printf("Fare: ₹200\n");
    } else if (distance <= 20) {
        printf("Fare: ₹350\n");
    } else {
        printf("Fare: ₹500\n");
    }

    return 0;
}
```

### [Problem-29.c](Problem-29.c)

```c
// Weather-Based Clothing Suggestion 
// Scenario: A weather app suggests clothing based on temperature: 
// Below 10°C: "Wear heavy jacket" 
// 10°C to 20°C: "Wear a sweater" 
// 20°C to 30°C: "Wear light clothing" 
// Above 30°C: "Wear cotton clothes and stay hydrated" 
// Write a program that takes the temperature and prints the suggestion. 

#include <stdio.h>
int main() {
    float temperature;
    printf("Enter the current temperature (in °C):\n");
    scanf("%f", &temperature);

    if (temperature < 10) {
        printf("Suggestion: Wear heavy jacket\n");
    } else if (temperature <= 20) {
        printf("Suggestion: Wear a sweater\n");
    } else if (temperature <= 30) {
        printf("Suggestion: Wear light clothing\n");
    } else {
        printf("Suggestion: Wear cotton clothes and stay hydrated\n");
    }

    return 0;
}
```

### [Problem-30.c](Problem-30.c)

```c
// Print 1 to 5 using recursion 
#include <stdio.h>
void printNumbers(int n) {
    if (n > 5) {
        return;
    }
    printf("%d\n", n);
    printNumbers(n + 1);
}
int main() {
    printf("Printing numbers from 1 to 5:\n");
    printNumbers(1);
    return 0;
}
```

### [Problem-31.c](Problem-31.c)

```c
// A librarian wants to arrange n books in a stack. The number of arrangements follows  the factorial pattern. Write a recursive function factorial(n) to calculate the number of  arrangements. 

#include <stdio.h>
// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // Recursive case
}
int main() {
    int n;
    printf("Enter the number of books to arrange:\n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int arrangements = factorial(n);
        printf("Number of arrangements for %d books: %d\n", n, arrangements);
    }

    return 0;
}
```

### [Problem-32.c](Problem-32.c)

```c
// A teacher wants to calculate the total marks obtained by a student in n subjects. Write  a recursive function calculateSum(n) to find the sum of marks/numbers entered.
#include <stdio.h>
// Recursive function to calculate the sum of marks
int calculateSum(int n) {
    if (n == 0) {
        return 0; // Base case: sum of 0 subjects is 0
    }
    int mark;
    printf("Enter marks for subject %d:\n", n);
    scanf("%d", &mark);
    return mark + calculateSum(n - 1); // Recursive case
}
int main() {
    int n;
    printf("Enter the number of subjects:\n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Number of subjects cannot be negative.\n");
    } else {
        int totalMarks = calculateSum(n);
        printf("Total marks obtained in %d subjects: %d\n", n, totalMarks);
    }

    return 0;
}
```

### [Problem-33.c](Problem-33.c)

```c
// Write a C program to declare and initialize a one-dimensional array and display its  elements.
#include <stdio.h>

int main() {
    int a[4] = {3, 5, 3, 8};
    for(int i = 0; i<4; i++) {
        printf("These are the elements %d: %d\n", i, a[i]);
    }
    return 0;
}
```

### [Problem-34.c](Problem-34.c)

```c
// Write a C program to declare a one-dimensional array and read 5 elements from the user,  then display the elements
#include <stdio.h>

int main() {
    int a[5];
    printf("Enter the 5 digits for the array : \n");
    for(int i = 0; i<5; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<5; i++) {
        printf("These are the elements of the array %d: %d\n", i ,a[i]);
    }

    return 0;
}
```

### [Problem-35.c](Problem-35.c)

```c
// Write a C program to find the sum of all elements in a one-dimensional array. 
#include <stdio.h>
int main() {
    int a[5];
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("The sum of the numbers is: %d", sum);
    return 0;
}
```

### [Problem-36.c](Problem-36.c)

```c
// Write a C program to count the number of even and odd elements in a one-dimensional  array.

#include <stdio.h>

int main() {
    int a[5];
    int even = 0, odd = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 5; i++) {
        if(a[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Number of even elements: %d\n", even);
    printf("Number of odd elements: %d\n", odd);

    return 0;
}
```

### [Problem-37.c](Problem-37.c)

```c
// Write a C program to find the largest and smallest elements in a one-dimensional array. 

#include <stdio.h>
int main() {
    int a[5];
    int largest, smallest;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    smallest = a[0];

    for(int i = 1; i < 5; i++) {
        if(a[i] > largest) {
            largest = a[i];
        }
        if(a[i] < smallest) {
            smallest = a[i];
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}
```

### [Problem-38.c](Problem-38.c)

```c
// Write a C program to search for a given element in a one-dimensional array and display  its position. If the element is not found, display an appropriate message.
#include <stdio.h>

int main() {
    int a[5];
    int searchElement, found = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    for(int i = 0; i < 5; i++) {
        if(a[i] == searchElement) {
            printf("Element found at position %d\n", i);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
```

### [Problem-39.c](Problem-39.c)

```c
// Write a C program to search for a given element in a one-dimensional array and display  all the positions where the element occurs 

#include <stdio.h>
int main() {
    int a[5];
    int searchElement, found = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    printf("Element found at positions: ");
    for(int i = 0; i < 5; i++) {
        if(a[i] == searchElement) {
            printf("%d ", i);
            found = 1;
        }
    }

    if(!found) {
        printf("Element not found in the array.\n");
    } else {
        printf("\n");
    }

    return 0;
}
```

### [Problem-40.c](Problem-40.c)

```c
// Write a program to find the sum of two matrix if they are square, or display they are  rectangular matrix. 
#include <stdio.h>
int main() {
    int a[2][2], b[2][2], sum[2][2];
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Adding the two matrices
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

### [Problem-41.c](Problem-41.c)

```c
// write a program to subtract two matrices.
#include <stdio.h>
int main() {
    int a[2][2], b[2][2], diff[2][2];

    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Subtracting the two matrices
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Difference of the two matrices:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

### [Problem-42.c](Problem-42.c)

```c
// write a program to multiply two matrices.

#include <stdio.h>
int main() {
    int a[2][2], b[2][2], product[2][2] = {0};

    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Multiplying the two matrices
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of the two matrices:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```
