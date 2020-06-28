/**
 * CAI
 * A simple Computer Assisted Instruction
 * @version 0.1.0-alpha
 * @author  Tobias Genberg
 */

/**
 * Practice additions
 */
void practice_additions_state()
{
    int answers = 0;
    int a, b, correct_answer, correct = 0, answer = 0;

    while(answers < 10)
    {
        srand(time(0));

        correct = 0;

        a = rand() % 100;
        b = rand() % 100;
        correct_answer = a + b;

        while(!correct)
        {
            printf("Question %d: %d + %d = ", answers + 1, a, b);

            if(scanf("%d", &answer))
            {
                if(answer == correct_answer)
                {
                    correct = 1;
                    answers++;
                    printf("Very good!\n");
                }
                else
                {
                    printf("No, please try again.\n");
                }
            }
        }
    }
}

/**
 * Practice subtractions
 */
void practice_subtractions_state()
{
    int answers = 0;
    int a, b, correct_answer, correct = 0, answer = 0;

    while(answers < 10)
    {
        srand(time(0));

        correct = 0;

        a = rand() % 100;
        b = rand() % 100;
        correct_answer = a - b;

        while(!correct)
        {
            printf("Question %d: %d - %d = ", answers + 1, a, b);

            if(scanf("%d", &answer))
            {
                if(answer == correct_answer)
                {
                    correct = 1;
                    answers++;
                    printf("Very good!\n");
                }
                else
                {
                    printf("No, please try again.\n");
                }
            }
        }
    }
}

/**
 * Practice both additions and subtractions
 */
void practice_both_state()
{
    int answers = 0;
    int a, b, correct_answer, correct = 0, answer = 0, operate;
    char symbol = '?';

    while(answers < 10)
    {
        srand(time(0));

        correct = 0;

        a = rand() % 100;
        b = rand() % 100;
        operate = rand() % 2;

        if(operate == 0)
        {
            correct_answer = a - b;
            symbol = '-';
        } else {
            correct_answer = a + b;
            symbol = '+';
        }

        while(!correct)
        {
            printf("Operate: %d", operate);
            printf("Question %d: %d %c %d = ", answers + 1, a, symbol, b);

            if(scanf("%d", &answer))
            {
                if(answer == correct_answer)
                {
                    correct = 1;
                    answers++;
                    printf("Very good!\n");
                }
                else
                {
                    printf("No, please try again.\n");
                }
            }
        }
    }
}
