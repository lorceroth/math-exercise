/**
 * CAI
 * A simple Computer Assisted Instruction
 * @version 0.1.0-alpha
 * @author  Tobias Genberg
 */

/**
 * Display a menu and return the users choice
 * @param  title        Menu title
 * @param  items        Menu items
 * @param  items_count  Count of the menu items
 * @return The menu choice if valid, -1 if not a valid menu choice
 */
int display_menu(char title[], char *items[], int items_count)
{
    int menu_choice = 0;

    printf("\n%s\n", title);

    for(int i = 0; i < items_count; i++)
    {
        printf("Option %i - %s\n", i, items[i]);
    }

    printf("\nYour choice: ");

    if(scanf("%d", &menu_choice)) {
        if(menu_choice >= 0 && menu_choice < items_count)
        {
            return menu_choice;
        }

        return -1;
    }

    return -1;
}
