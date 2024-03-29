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

