/**
 * CAI
 * A simple Computer Assisted Instruction
 * @version 0.1.0-alpha
 * @author  Tobias Genberg
 */

// Standard Libs
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// App Libs
#include "Util/Menu.c"
#include "Util/ErrorMessage.c"
#include "State/PracticeState.c"
#include "State/TestState.c"

int main()
{
    // Name
    char name[32] = "\0";
    int name_length = 0;

    // Main loop condition (begins after the name section)
    int running = 1;

    printf("===========================\nWelcome to Cai 0.1.0-alpha!\n===========================\n");

    while(name_length < 2)
    {
        printf("Enter your name: ");

        if(scanf("%s", name)) {

            name_length = strlen(name);

            if(name_length < 2 || name_length > 32)
            {
                dump_error("The name must be between 2 and 32 characters.");
            }
        }
    }

    printf("\nWelcome, %s!\n", name);

    // Main loop
    while(running)
    {
        // Menu structure
        int menu_choice;

        // Items
        char *menu[] = {
            "Practice on additions and subtractions",
            "Test your skills on additions and subtractions",
            "Exit the program"
        };

        // The user's choice
        menu_choice = display_menu("Main Menu", menu, 3);

        // Check the user's choice
        if(menu_choice == 0)
            practice_state();

        else if(menu_choice == 1)
            test_state();

        else if(menu_choice == 2)
            running = 0;

        else
            dump_error("Invalid menu option.");
    }

    printf("\nThank you for using Cai 0.1.0! Welcome back later!\n");
}
