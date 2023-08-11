#include <stdio.h>
#include <stdlib.h>
int main();
int admin();
int admin1();
int admin2();
int strcmp();
void castVote();
void votesCount();
// void exit(int status);
void exit(int);
void getLeadingCandidate();

#define CANDIDATE_COUNT

#define CANDIDATE1 "B.J.P"
#define CANDIDATE2 "S.P"
#define CANDIDATE3 "B.S.P"
#define CANDIDATE4 "A.A.P"

int votesCount1 = 0, votesCount2 = 0, votesCount3 = 0, votesCount4 = 0, spoiledtvotes = 0;

void castVote()
{
    int choice;
    printf("\n\n\t\t\t            ### Please choose your Candidate ####\n");
    printf("\n\t\t\t                       1. %s", CANDIDATE1);
    printf("\n\n\t\t\t                       2. %s", CANDIDATE2);
    printf("\n\n\t\t\t                       3. %s", CANDIDATE3);
    printf("\n\n\t\t\t                       4. %s", CANDIDATE4);
    printf("\n\n\t\t\t                       5. %s", "None of These");

    printf("\n\n\n\t\t\t                     Input your choice (1 - 4) : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        votesCount1++;
        break;
    case 2:
        votesCount2++;
        break;
    case 3:
        votesCount3++;
        break;
    case 4:
        votesCount4++;
        break;
    case 5:
        spoiledtvotes++;
        break;
    default:
        printf("\n\n\t\t\t                       Error: Wrong Choice !! Please retry");

        getchar();
    }
    printf("\n\n\t\t\t                       thanks for vote !!\n");
}

void votesCount()
{
    printf("\n\n\t\t\t                       ##### Voting Statics ####");

    printf("\n\t\t\t                       %s - %d ", CANDIDATE1, votesCount1);
    printf("\n\t\t\t                       %s - %d ", CANDIDATE2, votesCount2);
    printf("\n\t\t\t                       %s - %d ", CANDIDATE3, votesCount3);
    printf("\n\t\t\t                       %s - %d ", CANDIDATE4, votesCount4);
    printf("\n\t\t\t                       %s - %d ", "Spoiled Votes", spoiledtvotes);
}
void getLeadingCandidate()
{
    printf("\n\n\t\t\t                        #### Leading Candiate ####\n\n");
    if (votesCount1 > votesCount2 && votesCount1 > votesCount3 && votesCount1 > votesCount4)
        printf("\n\t\t\t                      [%s]", CANDIDATE1);
    else if (votesCount2 > votesCount3 && votesCount2 > votesCount4 && votesCount2 > votesCount1)
        printf("\n\t\t\t                      [%s]", CANDIDATE2);
    else if (votesCount3 > votesCount4 && votesCount3 > votesCount2 && votesCount3 > votesCount1)
        printf("\n\t\t\t                      [%s]", CANDIDATE3);
    else if (votesCount4 > votesCount1 && votesCount4 > votesCount2 && votesCount4 > votesCount3)
        printf("\n\t\t\t                      [%s]", CANDIDATE4);
    else
        printf("\n\t\t\t                      ----- Warning !!! No-win situation----");
}

int main()
{
    int i;
    int choice;

    do
    {
        printf("\t\t\t###########################################################################");
        printf("\n\t\t\t############                                                   ############");
        printf("\n\t\t\t############                Voting Machine                     ############");
        printf("\n\t\t\t############                                                   ############");
        printf("\n\t\t\t###########################################################################");
        printf("\n\t\t\t                                                                         ");
        printf("\nt\t\t\t                ###### Welcome to Voting 2022 #####             ");
        printf("\n\t\t\t                                                                         ");
        printf("\n\t\t\t###########################################################################");
        printf("\n \t\t\t                                                                           ");
        printf("\n \t\t\t                       1. Cast the Vote                                    ");
        printf("\n \t\t\t                       2. Administrator Login                              ");
        printf("\n \t\t\t                       3. Exit                                             ");
        printf("\n\t\t\t                      Please enter your choice :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            castVote();
            break;
        case 2:
            admin1();
            break;
        case 3:
            exit(0);
            break;

        default:
            printf("\n\n\t\t\t                       Error: Invalid Choice");
        }
    } while (choice != 0);

    getchar();

    return 0;
}
int admin1()
{
    int i;
    int choice;

    do
    {
        printf("\n\n\t\t\t                       ###### Welcome to Admin Pannel #####");
        printf("\n\t\t\t                       1. Enter Username");
        printf("\n\t\t\t                       2. Return to main menu");
        printf("\n\t\t\t                       3. Exit");

        printf("\n\n\n\t\t\t                       Please enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n\t\t\t                  ###  Administrator Login  ###            ");

            char username[15];

            printf("\n\t\t\t                      Enter your username:");
            scanf("%s", &username);

            if (strcmp(username, "group6") == 0)
            {

                admin2();
            }

            else

            {
                printf("\n\n\t\t\t                      invalid username\n");
                printf("\t\t\t                          Try again...\n");
                admin1();
            }
            break;

        case 2:
            main();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("\n\n\t\t\t                       Error: Invalid Choice");
        }
    } while (choice != 0);
}
int admin2()
{
    int choice, i;

    do
    {
        printf("\n\n\t\t\t                       ###### Welcome to Admin Pannel #####");
        printf("\n\t\t\t                       1. Enter Password");
        printf("\n\t\t\t                       2. Return to main menu");
        printf("\n\t\t\t                       3. Exit");

        printf("\n\n\n\t\t\t                       Please enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n\t\t\t                  ###  Administrator Login  ###            ");

            char password[12];

            printf("\n\t\t\t                      Enter your Password:");
            scanf("%s", &password);
            if (strcmp(password, "123") == 0)
            {

                printf("\n\n\t\t\t                             Login Success!");
                admin();
            }

            else

            {
                printf("\n\n\t\t\t                      Wrong Password\n");
                printf("\t\t\t                          Try again...\n");
                admin2();
            }
            break;

        case 2:
            main();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("\n\n\t\t\t                       Error: Invalid Choice");
        }
    } while (choice != 0);
}

int admin()
{

    int i;
    int choice;

    do
    {
        printf("\n\n\t\t\t                       ###### Welcome to Admin Pannel #####");
        printf("\n\t\t\t                       1. Find Vote Count");
        printf("\n\t\t\t                       2. Find leading Candidate");
        printf("\n\t\t\t                       3. Return to main menu");
        printf("\n\t\t\t                       4. Exit");

        printf("\n\n\n\t\t\t                       Please enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            votesCount();
            break;
        case 2:
            getLeadingCandidate();
            break;
        case 3:
            main();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n\n\t\t\t                       Error: Invalid Choice");
        }
    } while (choice != 0);
}
