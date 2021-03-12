# Project Bravo

## Description

My program will ask the user for the number of colors they need and the name of a file they want to save the palette to. Eventually, with the number of colors they ask for, they will be provided a color palette based on their input.

### v0.2 Updates

*Coming soon*

### v1.0 Updates

*Coming soon*


## Developer

Tyler Rodgers

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Hello, do you want to generate a color palette(y/n)?
Y
Okay, what number of colors do you need(2-10)?
7
Great. And what do you want the file to be called?
colorful.svg
```

## C++ Guide

### Variables and Data Types


I used 'char' to represent either 'y' or 'n' to allow the user to select whether they want to create a color palette or not. Both answer options are single letters and are best represented as a character.

I used 'int' to represent the number of colors the user selects for their color palette. The amount of color options are 2 through 10 so the best way to represent the user's input is with an integer.

I used 'string' to represent the name the user chooses for their file. A string is the best option to store the file name.


### Console Input and Output


Input and output have been utilizied to complete the user's goal for the color palette. For example the user is prompted with output asking how many colors they want, and what they want to name their file. They then input their desired answers, and their values are stored for later use.

### Decisions


Multiple decisions were needed for the users satisfactory. If the user wants to create a color palette they have to make a decision which leads them to a new set of options. They are then presented with a new set of questions, which they must answer with correct inputs to move forward.

### Iteration


I used a do-while loop to gather the users input of how many colors they want. I used a do-while loop because they need to choose between 2-10 colors, and if they do not answer correctly it need's to repeat. These loops allowed me to make sure I got their input at least once.

### File Input and Output


Files have been used effictively as the file created was opened for writing. Then the users input was stored in the file and ready for later use.

### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
