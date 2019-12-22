/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       ui.cpp                                                    */
/*    Author:       Paul Rodriguez                                            */
/*    Created:      11 Nov 2019                                               */
/*    Description:  November 2 Tournament (Tower Takedown)                    */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// Include header files
#include "robot-config.h"
#include "ui.h"

void UI::StartMenu()
{
  // Create the UI interface
  Brain.Screen.setPenWidth( 5 );
  Brain.Screen.drawRectangle( 60, 40, 150, 150, vex::color::blue );
  Brain.Screen.printAt( 90, 130, "D. Control" );
  Brain.Screen.drawRectangle( 280, 40, 150, 150, vex::color::yellow );
  Brain.Screen.printAt( 330, 130, "Auto." );
}

void UI::TowerTakeoverDisplay()
{
    Brain.Screen.setPenWidth(10);
    if( Competition.isFieldControl() == true ) 
    {
        Brain.Screen.setPenColor(vex::color::yellow);
        Brain.Screen.drawCircle(355, 120, 110, vex::color::green);
        Brain.Screen.setFillColor(vex::color::green);
        Brain.Screen.printAt(307, 120, "Connected");
        Brain.Screen.printAt(314, 140, "to Field");
    } 
    else 
    {
        Brain.Screen.drawCircle(355, 120, 110, vex::color::red);
        Brain.Screen.setFillColor(vex::color::red);
        Brain.Screen.printAt(292, 120, "Not Connected");
        Brain.Screen.printAt(312, 140, "to Field");
    }
    //Value Set
    Brain.Screen.setPenWidth(1);
    Brain.Screen.setPenColor(vex::color::white);
    Brain.Screen.setFillColor(vex::color::black);
    //R1
    Brain.Screen.drawRectangle(0, 190, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(0, 152, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(0, 114, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(0, 76, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(0, 38, 40, 40, vex::color::red);
    Brain.Screen.drawRectangle(0, 0, 40, 40, vex::color::black);
    //R2
    Brain.Screen.drawRectangle(38, 190, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(38, 152, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(38, 114, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(38, 76, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(38, 38, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(38, 0, 40, 40, vex::color::red);
    //R3
    Brain.Screen.drawRectangle(76, 190, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(76, 152, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(76, 114, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(76, 76, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(76, 38, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(76, 0, 40, 40, vex::color::black);
    //R4
    Brain.Screen.drawRectangle(114, 190, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(114, 152, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(114, 114, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(114, 76, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(114, 38, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(114, 0, 40, 40, vex::color::black);
    //R5
    Brain.Screen.drawRectangle(152, 190, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(152, 152, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(152, 114, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(152, 76, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(152, 38, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(152, 0, 40, 40, vex::color::blue);
    //R6
    Brain.Screen.drawRectangle(190, 190, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(190, 152, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(190, 114, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(190, 76, 40, 40, vex::color::black);
    Brain.Screen.drawRectangle(190, 38, 40, 40, vex::color::blue);
    Brain.Screen.drawRectangle(190, 0, 40, 40, vex::color::black);
    //Score Zones-Red
    Brain.Screen.drawRectangle(0, 00, 30, 25, vex::color::red);
    Brain.Screen.drawRectangle(0, 0, 26, 21, vex::color::black);
    Brain.Screen.drawRectangle(0, 206, 24, 24, vex::color::red);
    Brain.Screen.drawRectangle(0, 210, 20, 20, vex::color::black);
    //Score Zones-Blue
    Brain.Screen.drawRectangle(200, 0, 30, 25, vex::color::blue);
    Brain.Screen.drawRectangle(204, 0, 26, 21, vex::color::black);
    Brain.Screen.drawRectangle(205, 206, 24, 24, vex::color::blue);
    Brain.Screen.drawRectangle(209, 210, 20, 20, vex::color::black);
    //Tape
    Brain.Screen.setPenWidth(3);
    Brain.Screen.drawLine(77, 37, 37, 77);
    Brain.Screen.drawLine(151, 37, 191, 77);
    Brain.Screen.setPenWidth(4);
    Brain.Screen.drawLine(114, 0, 114, 227);
    //Towers
    Brain.Screen.setPenWidth(2);
    Brain.Screen.drawCircle(114, 56, 10);
    Brain.Screen.drawCircle(114, 114, 10);
    Brain.Screen.drawCircle(114, 170, 10);  
    Brain.Screen.drawCircle(190, 114, 10);
    Brain.Screen.drawCircle(38, 114, 10);
    Brain.Screen.drawCircle(57, 225, 10, vex::color::red);
    Brain.Screen.drawCircle(172, 225, 10, vex::color::blue);
}
