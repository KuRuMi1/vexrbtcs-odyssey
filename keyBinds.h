/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       keyBinds.h                                                */
/*    Author:       Paul Rodriguez                                            */
/*    Created:      12 Nov 2019                                               */
/*    Description:  November 2 Tournament (Tower Takedown)                    */
/*                                                                            */
/*----------------------------------------------------------------------------*/

#ifndef KEYBINDS_H
#define KEYBINDS_H

class KeyBind_Handler
{
  public:
    static void ButtonL1Pressed();
    static void ButtonL2Pressed();
    static void ButtonL2Released();
    static void ButtonR1Pressed();
    static void ButtonR2Pressed();
    static void ButtonR2Released();
};

#endif // KEYBINDS_H
