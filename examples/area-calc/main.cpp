#include<iostream>
#include "../../src/mmaker.h"

using namespace std;

void tri()
{
}
void square()
{
}
void rect()
{
}
void circle()
{
}

int main(int argc, char *argv[])
{
    menu area;
    int x;
    area.menu_head("Area Calculator");
    area.add("Triangle", 1, "Calculate the area of a triangle when the base and height of the triangle are known");
    area.add("Square", 2, "The area of a square is equal to the square of the side");
    area.add("Rectangle", 3, "Calculate the area of rectangle with its sides known");
    area.add("Circle", 4, "Area of circle with known radius");
    area.add("Exit", 5, "Exit the program");
    while(true)
    {
        x = area.display();
        switch(x)
        {
            case 1:
                tri();
                break;
            case 2:
                square();
                break;
            case 3:
                rect();
                break;
            case 4:
                circle();
                break;
            case 5:
                exit(0);
                break;
        }
    }
    return 0;
}
