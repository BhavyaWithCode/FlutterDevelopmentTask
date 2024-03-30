# Bhavya's Programming Expedition 🚀

👋 Hello, I'm Bhavya Nagar, an enthusiastic Flutter developer and a student at Red and White Multimedia Education. Currently, I'm immersing myself in the realms of c and c++ while also exploring flutter. I'm deeply passionate about leveraging technology to solve real-world problems. Join me as I embark on my programming journey! 💻📚

## About Me ℹ️

- 🎓 Student at Red and White Multimedia Education 
- 💻 Flutter Developer
- 🌱 Learning c and c++

## My Tasks 🚧

Check out my latest tasks and updates on my GitHub profile. I update it daily with my progress and new tasks, including lots of emojis! Here are some highlights:

# Chapter 1. Introduction To C Language 🚀

## Lecture 1.2 📚

### Questions: 🤔 

📝 **Q.1**  Write a Program to print your name, age, and school.

#include<stdio.h><br/>
#include<conio.h><br/>

int main()<br/>
{<br/>
	clrscr();<br/>
	printf("Name\t: my name is bhavya nagar\n");<br/>
	printf("Age\t: my age is 22years\n");<br/>
	printf("School\t: my school is christ college");<br/>
	getch();<br/>
	return 0;<br/>
}<br/>

📝 **Q.2** Write a Program to print the given pattern.

```
- - - - - - - - 
|                 |
R               |
N               |
W              |
|                 |
- - - - - - - -

```
#include<stdio.h><br/>
#include<conio.h><br/>

main()<br/>
{<br/>
	clrscr();<br/>
	printf("--------\n");<br/>
	printf("| |\n");<br/>
	printf("R\t |\n");<br/>
	printf("N\t |\n");<br/>
	printf("W\t |\n");<br/>
	printf("| |\n");<br/>
	printf("--------")<br/>
	return 0;<br/>
}<br/>

📝 **Q.3** Write a Program to print the given pattern.

```
*
* *
* * *
* *
*
```

#include<stdio.h><br/>
#include<conio.h><br/>

int main()<br/>
{<br/>
	printf("*\n");<br/>
	printf("**\n");<br/>
	printf("***\n");<br/>
	printf("**\n");<br/>
	printf("*");<br/>
	return 0<br/>
}<br/>

📝 **Q.4** Write a Program to print the given pattern.
```
*
* 
* 
*                   *   *                        *
*               *           *                 *
*           *                   *         *
*       *                           *  *
*    *
*
```

#include<stdio.h><br/>
#include<conio.h><br/>
int main()<br/>
{<br/>
	clrscr();<br/>
	printf("*\n");<br/>
	printf("*\n");<br/>
	printf("*\n");<br/>
	printf("*        **        *\n");<br/>
	printf("*       *  *      *\n");<br/>
	printf("*      *    *    *\n");<br/>
	printf("*     *      *  *\n");<br/>
	printf("*   *\n");<br/>
	printf("* *\n");<br/>
	printf("*");<br/>
	getch();<br/>
	return 0;<br/>
}<br/>

# Chapter 2. Datatype, Constant & Variable 🚀

## Lecture 2 📚

### Questions: 🤔 

📝 **Q.1**  Write a Program to perform all arithmetic operators such as +, -, *, / and %

For example,<br/>
Output:<br/>

Addition of 12 and 6 is 18<br/>
Subtraction of 12 and 6 is 6<br/>
Multiplication of 12 and 6 is 72<br/>
Division of 12 and 6 is 2<br/>
Modulo of 12 and 6 is 0<br/>
<br/>
12 + 6 = 18<br/>
12 - 6 = 6<br/>
12 * 6 = 72<br/>
12 / 6 = 2<br/>
12 % 6 = 0<br/>

#include <stdio.h><br/>
int main()<br/>
{
    int a, b, c;<br/>
    a = 25;<br/>
    b = 30;<br/>

  c = a + b
  <br/>
    printf("Addition of %d and %d is %d\n", a, b, c);<br/>

  c = a - b;
  <br/>
    printf("Subtraction %d of %d is %d\n", a, b, c);<br/>

  c = a * b;
  <br/>
    printf("Multiplication %d of %d is %d\n", a, b, c);<br/>

  c = a / b;
  <br/>
    printf("Division %d of %d is %d\n", a, b, c);<br/>

  c = a % b;
  <br/>
    printf("Module %d of %d is %d\n", a, b, c);<br/>

  c = a + b;
  <br/>
    printf("%d + %d = %d\n", a, b, c);<br/>

  c = a - b;
  <br/>
    printf("%d - %d = %d\n", a, b, c);<br/>

  c = a * b;
  <br/>
    printf("%d * %d = %d\n", a, b, c);<br/>

  c = a / b;
  <br/>
    printf("%d / %d = %d\n", a, b, c);<br/>

  c = a % b;
  <br/>
    printf("%d %%%d = %d\n", a, b, c);<br/>
}<br/>

## Lecture 2.2 📚

📝 **Q.1** Write a Program to find the area of a circle.<br/>
Formula: pi * radius * radius<br/>

#include <stdio.h><br/>
<br/>
int main()<br/>
{<br/>
    float radius;<br/>
    float area;<br/>
    const float PI = 3.14;<br/>

  printf("Lets find area of circle\n");<br/>
  printf("Enter the value of radius:-");<br/>
  scanf("%f", &radius);<br/>

  area = PI * radius * radius;<br/>
  printf("The area of the circle is %f", area);<br/>
}<br/>

📝 **Q.2** Write a Program to find the area of a rectangle.<br/>
Formula : area=width*height;<br/>

#include<stdio.h><br/>
<br/>
int main(){<br/>
    int width;<br/>
    int height;<br/>
    int area;<br/>
    <br/>
  printf("Lets find area of triangle\n");<br/>
  printf("Enter the value of widht:-");<br/>
  scanf("%f",&width);<br/>
    <br/>
  printf("Enter the value of height:-");<br/>
  area=width*height;<br/>
  printf("The area of the circle is %d",area);<br/>
}<br/>

📝 **Q.3** Q.3 Write a Program to find the area of a triangle.<br/>
Formula:area = (b*h)/2 <br/>

#include<stdio.h><br/>
<br/>
int main(){<br/>
    float base;<br/>
    float height;<br/>
    float area;<br/>
    
  printf("Lets find area of triangle\n");<br/>
  printf("Enter the value of base:-");<br/>
  scanf("%f",&base);<br/>
    <br/>
  printf("Enter the value of height:-");<br/>
  scanf("%f",&height);<br/>
  area = (base*height)/2;<br/>
  printf("The area of the triangle is %f",area);<br/>
}<br/>

📝 **Q.4**  Q.4 Write a Program to find Simple interest.<br/>
Formula:<br/>
Simple Interest = (P × R × T)/100  where P = Principal Amount, R = Rate per Annum, T = Time (years)<br/>

#include<stdio.h><br/>
<br/>
int main(){<br/>
    float p;<br/>
    float r;<br/>
    float t;<br/>
    float interest;<br/>
    
  printf("Lets find simple interest\n");<br/>
  printf("Enter the value of p:-");<br/>
   scanf("%f",&p);<br/>
    <br/>
  printf("Enter the value of r:-");<br/>
  scanf("%f",&r);<br/>
    <br/>
  printf("Enter the value of t:-");<br/>
  scanf("%f",&t);<br/>
    <br/>
  interest = (p * r * t)/100 ;<br/>
  printf("The simple interest is %f",interest);<br/>
}<br/>

# Chapter 4. Operator & Expression 🚀

## Lecture 4.1 📚

### Questions: 🤔 

📝 **Q.1** Write a Program to Swap two variables using the third variable.<br/>

#include<stdio.h><br/>
<br/>
void swap (int*a,int*b){<br/>
    int temp = *a;<br/>
    *a=*b;<br/>
    *b=temp;<br/>
}<br/>

int main(){<br/>
    int num1,num2;<br/>
    printf("\n Swapping Programming with third variables:-");<br/>
    
  printf("\nEnter the number 1 :- ");<br/>
  scanf("%d",&num1);<br/>
    <br/>
  printf("\nEnter the number 2 :- ");<br/>
  scanf("%d",&num2);<br/>
    <br/>
  printf("\nBefore swapping a value was num1 =  %d num2 = %d\n",num1,num2);<br/>
    <br/>
  swap(&num1,&num2);<br/>
    <br/>
  printf("\nAfter swapping a value was num1 =  %d num2 = %d\n",num1,num2);<br/>
}<br/>

📝 **Q.2** Write a Program to Swap two variables without using the third variable.<br/>
#include<stdio.h><br/>
<br/>
void swap(int* a, int* b) {<br/>
    *a = *a + *b;<br/>
    *b = *a - *b;<br/>
    *a = *a - *b;<br/>
}<br/>
<br/>
int main() {<br/>
    int num1, num2;<br/>
    printf("\nSwapping Program without using a third variable:\n");<br/>
    
  printf("\nEnter the number 1: ");<br/>
  scanf("%d", &num1);<br/>
    
  printf("\nEnter the number 2: ");<br/>
  scanf("%d", &num2);<br/>
    <br/>
  printf("\nBefore swapping, num1 = %d and num2 = %d\n", num1, num2);<br/>
    
  swap(&num1, &num2);<br/>
    
  printf("\nAfter swapping, num1 = %d and num2 = %d\n", num1, num2);<br/>
    
  return 0;<br/>
}<br/>

📝 **Q.3** Write a Program to find the formula's answer (x+y)^2. 
#include<stdio.h><br/>
<br/>
int main() {<br/>
    int x, y;<br/>
<br/>
printf("\nEnter the value of x: ");<br/>
scanf("%d", &x);<br/>
<br/>
printf("Enter the value of y: ");<br/>
scanf("%d", &y);<br/>
<br/>
printf("\nThe result of (%d + %d)^2 is: %d\n", x, y, (x + y) * (x + y));<br/>
<br/>
return 0;<br/>
}<br/>

📝 **Q.4** Write a Program to find the formula's answer (x-y)^2.<br/>
<br/>
int main() {<br/>
    int x, y;<br/>
<br/>
printf("\nEnter the value of x: ");<br/>
scanf("%d", &x);<br/>
<br/>
printf("Enter the value of y: ");<br/>
scanf("%d", &y);<br/>
<br/>
printf("\nThe result of (%d - %d)^2 is: %d\n", x, y, (x - y) * (x - y));<br/>
<br/>
return 0;<br/>
}<br/>

📝 **Q.5**  Write a Program to find the formula's answer (x+y)^3.<br/>
#include<stdio.h><br/>
<br/>
int main() {<br/>
    int x, y;<br/>
<br/>
printf("\nEnter the value of x: ");<br/>
scanf("%d", &x);<br/>
<br/>
printf("Enter the value of y: ");<br/>
scanf("%d", &y);<br/>
<br/>
printf("\nThe result of (%d + %d)^3 is: %d\n", x, y, (x + y) * (x + y) * (x + y));<br/>
<br/>
return 0;<br/>
}<br/>

📝 **Q.6** Write a Program to find the formula's answer (x+y+z)^2.<br/>
#include<stdio.h><br/>
<br/>
int main() {<br/>
    int x, y, z;<br/>
<br/>
printf("\nEnter the value of x: ");<br/>
scanf("%d", &x);<br/>
<br/>
printf("Enter the value of y: ");<br/>
scanf("%d", &y);<br/>
<br/>
printf("Enter the value of z: ");<br/>
scanf("%d", &z);<br/>
<br/>
printf("\nThe result of (%d + %d + %d)^2 is: %d\n", x, y, z, (x + y + z) * (x + y + z));<br/>
<br/>
return 0;<br/>
}<br/>


# 🌟 Greenhorns Exam Tasks 📝

Welcome to the Greenhorns exam tasks repository! Here you'll find solutions to the assigned tasks. 💼✨

## Instructions: 📋

1. Attempt all assigned tasks. ✅
2. Make suitable assumptions wherever necessary. 🤔
3. Upload your exam task by uploading the project to GitHub and submitting the GitHub repository link which must have screenshots of your output in a README.md file. 📂
4. These lab tasks are not in groups, so do not try to copy code from your classmates. 🚫

## Task 1: Celsius to Fahrenheit Converter 🌡️

### Program Output 🖥️

Input:
The temperature in Celsius: 38

Output:
The temperature in Fahrenheit: 100.4 🌞

![celsius_to_temperature](https://github.com/BhavyaWithCode/FlutterDevelopmentTask/assets/153913406/2b978f1d-7881-4e96-875e-9e7b294d4200)

## Task 2: Gross Salary Calculator 💰

### Program Output 💼

Input:
Base Salary: 1000
HRA=10%
DA=5%
TA=8%

Output:
Rs. 1230 💸

![gross_salary_calculation](https://github.com/BhavyaWithCode/FlutterDevelopmentTask/assets/153913406/3a63d1fd-0c7f-46cb-a740-610d43cfdaa8)

## Task 3: Third Angle of a Triangle 🔺

### Program Output 📐

Input:
First angle: 65
Second angle: 45

Output:
Third angle: 70 😊🔺

![triangle](https://github.com/BhavyaWithCode/FlutterDevelopmentTask/assets/153913406/a5ea49f3-fa58-4a5c-8ab0-6fe258ad6b4a)

# Chapter 5. Control Structure 🚀

## Lecture 5.1 📚

### Questions: 🤔 

📝 **Q.1** Write a Program to find the minimum number from the given 2 numbers using if else.<br/>
For example,<br/>
Input:<br/>
Enter a value of the first number: 8<br/>
Enter a value of the second number: 3<br/>
<br/>
Output:<br/>
The minimum value is: 3 <br/>
<br/>
#include<stdio.h><br/>
<br/>
int main(){<br/>
    printf("*******************\nWrite a program to find the minimum number from thr given 2 number using if else*******************");<br/>
    <br/>
int FirstNumber,SecondNumber;<br/>
printf("\nEnter the First Number  :  ");<br/>
scanf("%d",&FirstNumber);<br/>
<br/>
printf("\nEnter the Second Number : ");<br/>
scanf("%d",&SecondNumber);<br/>
<br/>
if (FirstNumber<SecondNumber)<br/>
    {<br/>
        printf("The minimum number is %d",FirstNumber);<br/>
    }<br/>
else{<br/>
        printf("The minium number is %d",SecondNumber);<br/>
    }<br/>
}<br/>

📝 **Q.2** Write a Program to find if a given number is neutral or not using a ladder if else.<br/>
<br/>
For example,<br/>
Input:<br/>
Enter any number: -9<br/>
<br/>
Output:<br/>
This number is Negative<br/>
-----------------------------------------------
For example,<br/>
Input:<br/>
Enter any number: 0<br/>
<br/>
Output:<br/>
This number is Neutral<br/>
-----------------------------------------------
<br/>
For example,<br/>
Input:<br/>
Enter any number: 7<br/>
<br/>
Output:<br/>
This number is Positive<br/>
<br/>
#include<stdio.h><br/>
<br/>
int main(){<br/>
    printf("****\n Write a Program to find if a given number is neutral or not using a ladder if else****");<br/>
<br/>
int number;<br/>
printf("\Enter the number : ");<br/>
scanf("%d",number);<br/>
<br/>
if (number>0)<br/>
    {
        printf("The number is positive");<br/>
    }<br/>
<br/>
else if (number<0)<br/>
    {<br/>
        printf("The number is negative");<br/>
    }<br/>
<br/>
else{<br/>
        printf("The number is neutral");<br/>
    }<br/>
}<br/>

📝 **Q.3** Write a Program to find the number is even or odd using if else.<br/>
<br/>
For example,<br/>
Input:<br/>
Enter any number: 7<br/>
<br/>
Output:<br/>
This number is an Odd Number.<br/>
<br/>
-----------------------------------------------
<br/>
For example,<br/>
Input:<br/>
Enter any number: 4<br/>
<br/>
Output:<br/>
This number is an Even Number.<br/>
<br/>
#include <stdio.h><br/>
<br/>
int main()<br/>
{<br/>
    printf("****\n  Write a Program to find the number is even or odd using if else****");<br/>
<br/>
int number;<br/>
printf("\Enter the number : ");<br/>
scanf("%d", number);<br/>
<br/>
 if (number % 2 == 0)<br/>
    {<br/>
        printf("THE Number is even:");<br/>
 }else{<br/>
        printf("The Number is odd:");<br/>
    }<br/>
}<br/>

## Lecture 5.2 📚

### Questions: 🤔 

📝 **Q.1**  Write a Program to find the minimum number from the given 3 numbers using nested if else. Also, draw a Flowchart in your book and create a diagram in draw.io.<br/>
For example,<br/>
Input:<br/>
Enter a value of the first number: 8<br/>
Enter a value of the second number: 3<br/>
Enter a value of the third number: 12<br/>
<br/>
Output:<br/>
The minimum value is: 3<br/>
<br/>
#include <stdio.h><br/>
#include <conio.h><br/>
int main()<br/>
{<br/>
    int FirstNumber, SecondNumber, ThreeNumber;<br/>
    clrscr();<br/>
    printf("\n");<br/>
    printf("************************************************************\n");<br/>
    printf("\nEnter The First Number  :- ");<br/>
    scanf("%d", &FirstNumber);<br/>
<br/>
printf("\nEnter The Second Number :- ");<br/>
scanf("%d", &SecondNumber);<br/>
<br/>
printf("\nEnter The Third Number  :- ");<br/>
scanf("%d", &ThreeNumber);<br/>
<br/>
printf("************************************************************\n");<br/>
printf("\n");<br/>
<br/>
printf("\n");<br/>
printf("************************************************************\n");<br/>
printf("*                     Output Of Maximum                     *\n");<br/>
<br/>
if (FirstNumber <= SecondNumber)<br/>
    {<br/>
	if (FirstNumber <= ThreeNumber)<br/>
	{<br/>
	    printf("%d Is The Minimum Number\n", FirstNumber);<br/>
	}<br/>
	else<br/>
	{<br/>
	    printf("%d Is The Minimum Number\n", ThreeNumber);<br/>
	}<br/>
    }<br/>
    else<br/>
    {<br/>
	printf("%d Is The Minimum Number\n", SecondNumber);<br/>
    }<br/>
    printf("************************************************************\n");<br/>
    getch();<br/>
    return 0;<br/>
}<br/>

![Minimum_Three_Numbers](https://github.com/BhavyaWithCode/FlutterDevelopmentTask/assets/153913406/25927d50-a721-4599-9287-d2d37df6edc4)

📝 **Q.2** Write a Program to find the maximum number from the given 4 numbers using nested if else. Also, draw a Flowchart in your book and create a diagram in draw.io.<br/>
For example,<br/>
Input:<br/>
Enter a value of the first number: 8<br/>
Enter a value of the second number: 3<br/>
Enter a value of the third number: 12<br/>
Enter a value of the fourth number: 7<br/>
<br/>
Output<br/>
The maximum value is: 12 <br/>

![Maximum_Four_Number](https://github.com/BhavyaWithCode/FlutterDevelopmentTask/assets/153913406/9b32bf01-ed74-44b5-9e73-f22c61192af5)

📝 **Q.3**  Write a Program to find the maximum number from the given 5 numbers using nested if else. Also, draw a Flowchart in your book and create a diagram in draw.io.<br/>
For example,<br/>
Input:<br/>
Enter a value of the first number: 8<br/>
Enter a value of the second number: 3<br/>
Enter a value of the third number: 12<br/>
Enter a value of the fourth number: 7<br/>
Enter a value of the fifth number: 15<br/>
<br/>
Output:<br/>
The maximum value is: 15<br/>

![Maximum_Five](https://github.com/BhavyaWithCode/FlutterDevelopmentTask/assets/153913406/618309ef-1dbc-40fb-b067-b33adc40539b)

## Lecture 5.3 📚<br/>
<br/>
### Questions: 🤔 <br/>
<br/>
📝 **Q.1** Write a Program to find the minimum number from the given 4 numbers using the ternary operator.<br/>
For example,<br/>
Input:<br/>
Enter a value of the first number: 8<br/>
Enter a value of the second number: 3<br/>
Enter a value of the third number: 12<br/>
Enter a value of the fourth number: 5<br/>
<br/>
Output:<br/>
The minimum value is: 3<br/>
<br/>
#include<stdio.h><br/>
#include<conio.h><br/>
int main() {<br/>
    int FirstNumber, SecondNumber, ThirdNumber, FourthNumber;<br/>
    clrscr();<br/>
    printf("\n*********************** Minimum Finder By Ternary Operator  ***********************");<br/>
<br/>
printf("\nEnter an FirstNumber  :- ");<br/>
scanf("%d", &FirstNumber);<br/>
<br/>
printf("\nEnter an SecondNumber :- ");<br/>
scanf("%d", &SecondNumber);<br/>
<br/>
printf("\nEnter an ThirdNumber  :- ");<br/>
scanf("%d", &ThirdNumber);<br/>
<br/>
printf("\nEnter an FourthNumber :- ");<br/>
scanf("%d", &FourthNumber);<br/>
<br/>
printf("\nMinimum number is: %d\n", <br/>
            (FirstNumber < SecondNumber) ? <br/>
                ((FirstNumber < ThirdNumber) ? <br/>
                    ((FirstNumber < FourthNumber) ? FirstNumber : FourthNumber) <br/>
                    : ((ThirdNumber < FourthNumber) ? ThirdNumber : FourthNumber)) <br/>
                : ((SecondNumber < ThirdNumber) ? <br/>
                    ((SecondNumber < FourthNumber) ? SecondNumber : FourthNumber) <br/>
                    : ((ThirdNumber < FourthNumber) ? ThirdNumber : FourthNumber)));<br/>
    getch();<br/>
    return 0;<br/>
}<br/>

📝 **Q.2** Write a Program to create a menu-driven program for Telecom call service conversation using nested switch case.<br/>
For example,<br/>
Press 1 for English<br/>
Press 2 for Hindi<br/>
Press 3 for Gujarati<br/>
Enter your choice: 1<br/>
<br/>
Press 1 for Internet Recharge<br/>
Press 2 for Top-up Recharge<br/>
Press 3 for Special Recharge<br/>
Enter your choice: 2<br/>
<br/>
You have successfully done Top-up Recharge.<br/>
<br/>
---------------------------------------------
<br/>
For example,<br/>
Press 1 for English<br/>
Press 2 for Hindi<br/>
Press 3 for Gujarati<br/>
Enter your choice: 2<br/>
<br/>
Internet Recharge ke liye 1 dabaiye<br/>
Top-up Recharge ke liye 2 dabaiye<br/>
Special Recharge ke liye 3 dabaiye<br/>
Enter your choice: 1<br/>
<br/>
Aapne safaltapurvak Internet Recharge kar liya he.
<br/>
---------------------------------------------
<br/>
For example,<br/>
Press 1 for English<br/>
Press 2 for Hindi<br/>
Press 3 for Gujarati<br/>
Enter your choice: 3<br/>
<br/>
Internet Recharge mate 1 dabavo<br/>
Top-up Recharge mate 2 dabavo<br/>
Special Recharge mate 3 dabavo<br/>
Enter your choice: 3<br/>
<br/>
Tame safaltapurvak Special Recharge karyu chhe.<br/>
<br/>
#include <stdio.h><br/>
#include<conio.h><br/>
int main()<br/>
{<br/>
    int language, choice;<br/>
    clrscr();<br/>
    printf("\n******************** Telecom Call Service Conversations ********************\n");<br/>

printf("\nPress 1 for English\n");<br/>
    printf("Press 2 for Hindi\n");<br/>
    printf("Press 3 for Gujarati\n");<br/>
    printf("Enter your choice: ");<br/>
    scanf("%d", &language);<br/>
<br/>
switch (language)<br/>
    {<br/>
    case 1:<br/>
        printf("\nPress 1 for Internet Recharge\n");<br/>
        printf("Press 2 for Top-up Recharge\n");<br/>
        printf("Press 3 for Special Recharge\n");<br/>
        printf("Enter your choice: ");<br/>
        scanf("%d", &choice);<br/>
<br/>
switch (choice)<br/>
        {<br/>
        case 1:<br/>
            printf("\nYou have successfully done Internet Recharge.\n");<br/>
            break;<br/>
        case 2:<br/>
            printf("\nYou have successfully done Top-up Recharge.\n");<br/>
            break;<br/>
        case 3:<br/>
            printf("\nYou have successfully done Special Recharge.\n");<br/>
            break;<br/>
        default:<br/>
            printf("\nInvalid choice!\n");<br/>
        }<br/>
        break;<br/>
    case 2:<br/>
        printf("\nInternet Recharge ke liye 1 dabaiye\n");<br/>
        printf("Top-up Recharge ke liye 2 dabaiye\n");<br/>
        printf("Special Recharge ke liye 3 dabaiye\n");<br/>
        printf("Enter your choice: ");<br/>
        scanf("%d", &choice);<br/>

switch (choice)<br/>
        {<br/>
        case 1:<br/>
            printf("\nAapne safaltapurvak Internet Recharge kar liya he.\n");<br/>
            break;<br/>
        case 2:<br/>
            printf("\nAapne safaltapurvak Top-up Recharge kiya hai.\n");<br/>
            break;<br/>
        case 3:<br/>
            printf("\nTame safaltapurvak Special Recharge karyu chhe.\n");<br/>
            break;<br/>
        default:<br/>
            printf("\nInvalid choice!\n");<br/>
        }<br/>
        break;<br/>
    case 3:<br/>
        printf("\nInternet Recharge mate 1 dabavo\n");<br/>
        printf("Top-up Recharge mate 2 dabavo\n");<br/>
        printf("Special Recharge mate 3 dabavo\n");<br/>
        printf("Enter your choice: ");<br/>
        scanf("%d", &choice);<br/>

 switch (choice)<br/>
        {<br/>
        case 1:<br/>
            printf("\nAapne safaltapurvak Internet Recharge kar liya he.\n");<br/>
            break;<br/>
        case 2:<br/>
            printf("\nAapne safaltapurvak Top-up Recharge kiya hai.\n");<br/>
            break;<br/>
        case 3:<br/>
            printf("\nTame safaltapurvak Special Recharge karyu chhe.\n");<br/>
            break;<br/>
        default:<br/>
            printf("\nInvalid choice!\n");<br/>
        }<br/>
        break;<br/>
    default:<br/>
        printf("\nInvalid choice!\n");<br/>
    }<br/>
    getch();<br/>
    return 0;<br/>
}<br/>

# 🚀 Momentum Exam Tasks Submission: Total Marks - 10 📝

Welcome to your Momentum exam tasks! Below are the instructions and questions for your submission. Remember to attempt all tasks individually and make suitable assumptions where necessary. 🌟✨

## Instructions: 📋

1. Attempt all assigned tasks. ✅
2. Make suitable assumptions wherever necessary. 🤔
3. These lab tasks are not in groups, so do not try to copy code from your classmates. 🚫
4. Upload your exam task by uploading the project to GitHub and submitting the GitHub repository link which must have screenshots of your output in a README.md file. 📂

## Questions:

### Q.1 Check Even or Odd using Ternary Operator 🎲

Write a Program to check whether a number is even or odd using the ternary operator.

**Example:**
Input:
Enter any number: 12

Output: 
This number is Even. ⬆️🔢

![even_odd](https://github.com/BhavyaWithCode/FlutterDevelopmentTask/assets/153913406/8028cc5a-579e-4f66-b615-3044f8a8c3c2)

### Q.2 Electricity Bill Calculator ⚡

Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition:

- For the first 50 units Rs. 0.50/unit.
- For the next 100 units Rs. 0.75/unit.
- For the next 100 units Rs. 1.20/unit.
- For units above 250 Rs. 1.50/unit.

An additional surcharge of 20% is added to the bill.

**Example:**
Input:
Enter electricity units: 435

Output: 
Electricity Bill = Rs. 597.00 💡💰

![electric_city_bill](https://github.com/BhavyaWithCode/FlutterDevelopmentTask/assets/153913406/30c86ac3-d95e-4ace-8b97-b59749d7c6a9)

# Chapter 6. Looping 🚀

## Lecture 6.1 📚

### Questions: 🤔 

📝 **Q.1** Write a Program to print 1 to n using a while loop.<br/>
For example,<br/>
Output:<br/>
1 2 3 4 5 6 7 8 9 10<br/>
<br/>
#include <stdio.h><br/>
#include <conio.h><br/>
<br/>
int main()<br/>
{<br/>
    int n, i = 1;<br/>
    clrscr();<br/>
    printf("*********************************\n");<br/>
    printf("* 🌟  Welcome to the Number Printer 🌟   *\n\n");<br/>
    printf("*********************************\n");<br/>
<br/>
 printf("Please Enter An Number :- ");<br/>
 scanf("%d", &n);<br/>
<br/>
 printf("\n");<br/>
 printf("🔢 Number from 1 to %d:\n", n);<br/>
 printf("*************************\n");<br/>
<br/>
while (i <= n)<br/>
    {<br/>
        printf("%d ", i);<br/>
        i++;<br/>
    }<br/>
<br/>
printf("\n*************************\n");<br/>
<br/>
 printf("\n🚀 Printing completed successfully! Have a great day! 🚀\n");<br/>
 <br/>
getch();<br/>
return 0;<br/>
}<br/>

📝 **Q.2** Write a Program to print n to 1 using a while loop.<br/>
For example,<br/>
Output:<br/>
10 9 8 7 6 5 4 3 2 1<br/>
<br/>
#include <stdio.h><br/>
#include<conio.h><br/>
int main()<br/>
{<br/>
    int n, i;<br/>
    clrscr();<br/>
    printf("*********************************\n");<br/>
    printf("* 🌟  Welcome to the Number Printer 🌟   *\n");<br/>
    printf("*********************************\n\n");<br/>
<br/>
printf("Please Enter A Number: ");<br/>
scanf("%d", &n);<br/>
<br/>
printf("\n🔢 Numbers from %d to 1:\n", n);<br/>
printf("*************************\n");<br/>
<br/>
i = n; <br/>
<br/>
while (i >= 1)<br/>
    {<br/>
        printf("%d ", i);<br/>
        i--; <br/>
    }<br/>
<br/>
printf("\n*************************\n");<br/>
<br/>
printf("\n🚀 Printing completed successfully! Have a great day! 🚀\n");<br/>
<br/>
getch();<br/>
return 0;<br/>
}<br/>

📝 **Q.3**  Write a Program to print odd numbers from N to 1 using a while loop.<br/>
For example,<br/>
Input:<br/>
Enter any number: 15<br/>

#include <stdio.h><br/>
<br/>
int main()<br/>
{<br/>
    int n, i;<br/>
<br/>
printf("╔═══════════════════════════════════════╗\n");<br/>
printf("║ 🌟  Welcome to the Number Printer 🌟   ║\n");<br/>
printf("╚═══════════════════════════════════════╝\n\n");<br/>
<br/>
printf("Please Enter A Number: ");<br/>
scanf("%d", &n);<br/>
<br/>
printf("\n🔢 Odd Numbers from %d to 1:\n", n);<br/>
printf("*************************\n");<br/>
<br/>
if (n % 2 == 0)<br/>
        n--; <br/>
<br/>
i = n; <br/>
<br/>
while (i >= 1)<br/>
    {
        printf("║ %d ", i);<br/>
        if (i % 5 == 0) <br/>
            printf("║\n");<br/>
        i -= 2;<br/>
    }<br/>
    printf("║\n"); <br/>

printf("*************************\n");<br/>

printf("\n🚀 Printing completed successfully! Have a great day! 🚀\n");<br/>
return 0;<br/>
}<br/>

📝 **Q.4** Write a Program to print leap years between two given numbers using a while loop.<br/>
For example,<br/>
Input:<br/>
Enter the first number: 2020<br/>
Enter the second number: 2040<br/>
<br/>
Output:<br/>
2020, 2024, 2028, 2032, 2034, 2040<br/>

#include <stdio.h><br/>
#include<conio.h><br/>
int main() {<br/>
    int startYear, endYear;<br/>
    clrscr();<br/>
    printf("📅 Enter the start year: ");<br/>
    scanf("%d", &startYear);<br/>
    <br/>
printf("📅 Enter the end year: ");<br/>
scanf("%d", &endYear);<br/>
    <br/>
 printf("\n🔢 Leap years between %d and %d:\n", startYear, endYear);<br/>
 printf("*************************\n");<br/>
    <br/>
int year = startYear;<br/>
    <br/>
while (year <= endYear) {<br/>
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {<br/>
            printf("║ %d ", year);<br/>
            if (year % 5 == 0) {<br/>
                printf("║\n");<br/>
            }<br/>
        }<br/>
        year++;<br/>
    }<br/>
    <br/>
printf("║\n");<br/>
printf("*************************\n");<br/>
    <br/>
printf("\n🚀 Printing completed successfully! Have a great day! 🚀\n");<br/>
    getch();<br/>
    return 0;<br/>
}<br/>

## Lecture 6.2 📚

### Questions: 🤔

📝 **Q.1** Write a Program to print 1 to 10 using a do-while loop.<br/>
For example,<br/>
Output:<br/>
1 2 3 4 5 6 7 8 9 10<br/>

#include<stdio.h><br/>
#include<conio.h><br/>
<br/>
int main(){<br/>
    int Number = 1;<br/>
<br/>
do<br/>
    {<br/>
        printf("%d",Number);<br/>
        Number++;<br/>
    } while (Number <= 10);<br/>
<br/>
printf("\n");<br/>
<br/>
getch();<br/>
return 0;<br/>
}<br/>

📝 **Q.2** Write a Program to print 10 to 1 using for loop.<br/>
For example,<br/>
Output:<br/>
10 9 8 7 6 5 4 3 2 1<br/>

#include<stdio.h><br/>
<br/>
int main() {<br/>
    int Number;<br/>
<br/>
for (Number = 10; Number >= 1; Number--) {<br/>
        printf("%d", Number);<br/>
    }<br/>
<br/>
printf("\n");<br/>
<br/>
return 0;<br/>
}<br/>

📝 **Q.3** Write a Program to print even numbers from 1 to N using a do-while loop.<br/>
For example,<br/>
Input:<br/>
Enter any number: 9<br/>
<br/>
Output:<br/>
2 4 6 8<br/>

#include <stdio.h><br/>
#include<conio.h><br/>
int main()<br/>
{<br/>
<br/>
printf("==============================================\n");<br/>
printf("||     Welcome to Even Number Printer!       ||\n");<br/>
printf("==============================================\n\n");<br/>
<br/>
int N;<br/>
<br/>
printf("Enter the upper limit (N): ");<br/>
scanf("%d", &N);<br/>
<br/>
 printf("\n==============================================\n");<br/>
 printf("||        Even numbers from 1 to %2d          ||\n", N);<br/>
printf("==============================================\n");<br/>
<br/>
int i = 1;<br/>
<br/>
 do<br/>
    {<br/>
        if (i % 2 == 0)<br/>
        {<br/>
            printf("%-4d", i);<br/>
        }
<br/>
 i++;<br/>
    } while (i <= N);<br/>

 printf("\n==============================================\n\n");<br/>
<br/>
getch();<br/>
return 0;<br/>
}<br/>

📝 **Q.4** Write a Program to print the fibonacci series up to N numbers using for loop.<br/>
For example,<br/>
Input:<br/>
Enter any number: 8<br/>
<br/>
Output:<br/>
0, 1, 1, 2, 3, 5, 8, 13<br/>

#include <stdio.h><br/>
<br/>
int main() {<br/>
    int N, first = 0, second = 1, next;<br/>
   <br/>
   printf("Enter the number of Fibonacci numbers to print: ");<br/>
    scanf("%d", &N);<br/>
        <br/>
printf("\n===========================================\n");<br/>
    printf("    Fibonacci Series up to %d numbers\n", N);<br/>
    printf("===========================================\n\n");<br/>
<br/>
        
printf("%d, %d", first, second);<br/>
         <br/>
for (int i = 2; i < N; ++i) {<br/>
        next = first + second;<br/>
        <br/>
printf("%d", next);<br/>
<br/>
first = second;<br/>
second = next;<br/>
}
<br/>
printf("\n\n");<br/>
<br/>
return 0;<br/>
}<br/>

## Lecture 6.3 📚

### Questions: 🤔

📝 **Q.1**  Write a Program to print the sum of all numbers from 1 to N using for loop.<br/>
For example,<br/>
Input:<br/>
Enter any number: 8<br/>
<br/>
Output:<br/>
The sum of all numbers: 36<br/>


