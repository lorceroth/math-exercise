/**
 * CAI
 * A simple Computer Assisted Instruction
 * @version 0.1.0-alpha
 * @author  Tobias Genberg
 */

#include "TestStates.h"

void test_state()
{
    int in_state = 1;

    printf("\nThis section let's you take tests in additions and subtractions.\n");

    while(in_state)
    {
        // Menu
        int menu_choice;

        char *menu[] = {
            "Additions",
            "Subtractions",
            "Additions and Subtractions"
        };

        menu_choice = display_menu("What kind of test would you like to take?", menu, 3);

        if(menu_choice == 0)
        {
            test_additions_state();
            in_state = 0;
        }

        else if(menu_choice == 1)
        {
            test_subtractions_state();
            in_state = 0;
        }

        else if(menu_choice == 2)
        {
            test_both_state();
            in_state = 0;
        }

        else
            dump_error("Invalid menu option.");
    }
}
