/**
 * CAI
 * A simple Computer Assisted Instruction
 * @version 0.1.0-alpha
 * @author  Tobias Genberg
 */

#include "PracticeStates.h"

/**
 * Display the practice options to the user
 */
void practice_state()
{
    int in_state = 1;

    printf("\nThis section let's you practice on additions and subtractions.\n");

    while(in_state)
    {
        // Menu
        int menu_choice;

        char *menu[] = {
            "Additions",
            "Subtractions",
            "Additions and Subtractions"
        };

        menu_choice = display_menu("What do you want to practice?", menu, 3);

        if(menu_choice == 0)
        {
            practice_additions_state();
            in_state = 0;
        }

        else if(menu_choice == 1)
        {
            practice_subtractions_state();
            in_state = 0;
        }

        else if(menu_choice == 2)
        {
            practice_both_state();
            in_state = 0;
        }

        else
            dump_error("Invalid menu option.");
    }
}
