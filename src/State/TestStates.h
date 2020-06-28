/**
 * CAI
 * A simple Computer Assisted Instruction
 * @version 0.1.0-alpha
 * @author  Tobias Genberg
 */

/**
 * Take a test in additions
 */
void test_additions_state()
{
    int correct_answers = 0;
    int a, b, correct_answer, answer = 0;
    float result_in_perc = 0.0;

    printf("\nTaking a test in additions.\n\n");

    for(int i = 0; i < 10; i++)
    {
        srand(time(0));

        a = rand() % 100;
        b = rand() % 100;
        correct_answer = a + b;

        printf("Question %d: %d + %d = ", i + 1, a, b);

        if(scanf("%d", &answer))
        {
            if(answer == correct_answer)
            {
                correct_answers++;
            }
        }
    }

    result_in_perc = correct_answers * 10;
    printf("\nCongratulations! Your result is %d of 10 / %1.1f%c correct answers.\n", correct_answers, result_in_perc, '%');
}

/**
 * Take a test in subtractions
 */
void test_subtractions_state()
{
    int correct_answers = 0;
    int a, b, correct_answer, answer = 0;
    float result_in_perc = 0.0;

    printf("\nTaking a test in subtractions.\n\n");

    for(int i = 0; i < 10; i++)
    {
        srand(time(0));

        a = rand() % 100;
        b = rand() % 100;
        correct_answer = a - b;

        printf("Question %d: %d - %d = ", i + 1, a, b);

        if(scanf("%d", &answer))
        {
            if(answer == correct_answer)
            {
                correct_answers++;
            }
        }
    }

    result_in_perc = correct_answers * 10;
    printf("\nCongratulations! Your result is %d of 10 / %1.1f%c correct answers.\n", correct_answers, result_in_perc, '%');
}

/**
 * Take a test in both additions and subtractions
 */
void test_both_state()
{
    int correct_answers = 0;
    int a, b, correct_answer, answer = 0, operate;
    char symbol = '?';
    float result_in_perc = 0.0;

    printf("\nTaking a test in subtractions.\n\n");

    for(int i = 0; i < 10; i++)
    {
        srand(time(0));

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

        printf("Question %d: %d %c %d = ", i + 1, a, symbol, b);

        if(scanf("%d", &answer))
        {
            if(answer == correct_answer)
            {
                correct_answers++;
            }
        }
    }

    result_in_perc = correct_answers * 10;
    printf("\nCongratulations! Your result is %d of 10 / %1.1f%c correct answers.\n", correct_answers, result_in_perc, '%');
}
