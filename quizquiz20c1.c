#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int main()
{
    char choice,count,score;
    char playername[20];
    int i,r,r1,r2,r3,r4,bonus=-1,bonus1=-1,bonus2=-1,bonus3=-1,bonus4=-1;

mainhome:
    system("cls");
    printf("\n\n\n\t\t_____________________________________");
    printf("\n\n\n\t\t        WELCOME ");
    printf("\n\n\n\t\t           TO   ");
    printf("\n\n\n\t\t     THE QUIZ GAME ");
    printf("\n\n\n\t\t*****************************************");
    printf("\n\n\n\t\t   Let's test your brain storage!");
    printf("\n\n\n\t\t_______________________________________");
    printf("\n\n\n\t\t_______________________________________");
    printf("\n\n\n\t\t >Press S to start the gagme");
    printf("\n\n\n\t\t >Pres H for help");
    printf("\n\n\n\t\t >Pres Q to quit");
    printf("\n\n\n\t\t________________________________________");
    printf("\n\n\n\t\t                                    ");
    choice=toupper(getch());
    if (choice=='S')
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\tEnter your name: ");
        gets(playername);
        system("cls");
        printf("\n\n\n\t\t       Welcome %s to quiz game    ",playername);
        printf("\n\n\t\tHere are some rules you should know before playing");
        printf("\n\n\t\t                                                     ");
        printf("\n\n\t\t>>There are 5 levels in this game");
        printf("\n\n\t\t>>Each level includes 10 questions");
        printf("\n\n\t\t>>For each correct answer user gets 1 score and aside at the end of \n\t\t  the level bonus score is displyed according to obtained score");
        printf("\n\n\t\t>>you can play the level again or you will be leveled up to next");
        printf("\n\n\t\t>>A particular level can be played as long as a player wish");
        printf("\n\n\t\t>>Player can select level manually in the start menu and then levels up \n\t\t  automatically only if the pre-set conditions are ful-filled");
        printf("\n\n\t\t>>Pre-set conditions are explained in the HELP section");
        printf("\n\n\t\t>>press C to continue");
        choice=toupper(getch());
        if (choice=='C')
        {
            system("cls");
            printf("\n\n\n\t\tSELECT LEVEL");
            printf("\n\n\n\t\tA.Level-1 \n\n\n\t\tB.Level-2 \n\n\n\t\tC.Level-3 \n\n\n\t\tD.Level-4 \n\n\n\t\tE.Level-5");
            choice=toupper(getch());
            if (choice=='A')
            {
level_1:
                system("cls");
                count=0;
                score=0;
                for(i=1; i<=10; i++)
                {
                    system("cls");
                    r=i;


                    switch(r)
                    {
                    case 1:
                        printf("\n\n\n\t\tLevel-1\n\n\n\t\tQuestion-1:");
                        printf("\n\n\n\t\tThe time required for the fetching & execution of one simple machine instruction is--");
                        printf("\n\n\n\t\tA.Delay time\n\n\n\t\tB.CPU cycle\n\n\n\t\tC.Real time\n\n\n\t\tD.Seek time");
                        if (toupper(getch())=='B')
                        {
                            printf("\n\n\n\t\tCorrect Answer!!!");
                            count++;
                            score++;
                            getch();
                            break;
                        }
                        else
                        {
                            printf("\n\n\n\t\tYour answer is Wrong... The correct answer is B.CPU cycle");
                            getch();
                            break;
                        }
                    case 2:
                        printf("\n\n\n\t\tLevel-1\n\n\n\t\tQuestion-2:");
                        printf("\n\n\n\t\tThe instrument that measures & records the relative humidity of air is--");
                        printf("\n\n\n\t\tA.Hydrometer\n\n\n\t\tB.Hygrometer\n\n\n\t\tC.Lactometer\n\n\n\t\tD.Barometer");
                        if (toupper(getch())=='B')
                        {
                            printf("\n\n\n\t\tCorrect Answer!!!");
                            count++;;
                            score++;
                            getch();
                            break;
                        }
                        else
                        {
                            printf("\n\n\n\t\tYour answer is Wrong... The correct answer is B.CPU cycle");
                            getch();
                            break;
                        }
                    case 3:
                        printf("\n\n\n\t\tLevel-1\n\n\n\t\tQuestion-3:");
                        printf("\n\n\n\t\tThe average of first 50 natural number is--");
                        printf("\n\n\n\t\tA.25.30\n\n\n\t\tB.25.5\n\n\n\t\tC.25.00\n\n\n\t\tD.12.25");
                        if (toupper(getch())=='B')
                        {
                            printf("\n\n\n\t\tCorrect Answer!!!");
                            count++;
                            score++;
                            getch();
                            break;
                        }
                        else
                        {
                            printf("\n\n\n\t\tYour answer is Wrong... The correct answer is B.25.5");
                            getch();
                            break;
                        }
                    case 4:
                        printf("\n\n\n\t\tLevel-1\n\n\n\t\tQuestion-4:");
                        printf("\n\n\n\t\tThe most commonly used bleaching agent is--");
                        printf("\n\n\n\t\tA.Alcohol\n\n\n\t\tB.Carbon dioxide\n\n\n\t\tC.Chlorine\n\n\n\t\tD.Sodium Chloride");
                        if (toupper(getch())=='C')
                        {
                            printf("\n\n\n\t\tCorrect Answer!!!");
                            count++;
                            score++;
                            getch();
                            break;
                        }
                        else
                        {
                            printf("\n\n\n\t\tYour answer is Wrong... The correct answer is C.Chlorine");
                            getch();
                            break;
                        }
                    case 5:
                        printf("\n\n\n\t\tLevel-1\n\n\n\t\tQuestion-5:");
                        printf("\n\n\n\t\tWhich of the following is the first complement of 10?");
                        printf("\n\n\n\t\tA.01\n\n\n\t\tB.110\n\n\n\t\tC.11\n\n\n\t\tD.10");
                        if (toupper(getch())=='A')
                        {
                            printf("\n\n\n\t\tCorrect Answer!!!");
                            count++;
                            score++;
                            getch();
                            break;
                        }
                        else
                        {
                            printf("\n\n\n\t\tYour answer is Wrong... The correct answer is A.01");
                            getch();
                            break;
                        }
                    case 6:
                        printf("\n\n\n\t\tLevel-1\n\n\n\t\tQuestion-6:");
                        printf("\n\n\n\t\tThe hydronium ion is--");
                        printf("\n\n\n\t\tA.H+\n\n\n\t\tB.HO-\n\n\n\t\tC.H2+\n\n\n\t\tD.H3O+");
                        if (toupper(getch())=='D')
                        {
                            printf("\n\n\n\t\tCorrect Answer!!!");
                            count++;
                            score++;
                            getch();
                            break;
                        }
                        else
                        {
                            printf("\n\n\n\t\tYour answer is Wrong... The correct answer is D.H3O+");
                            getch();
                            break;
                        }
                    case 7:
                        printf("\n\n\n\t\tLevel-1\n\n\n\t\tQuestion-7:");
                        printf("\n\n\n\t\tPlants receive their nutrients mainly from--");
                        printf("\n\n\n\t\tA.Chlorophyll\n\n\n\t\tB.Atmosphere\n\n\n\t\tC.Light\n\n\n\t\tD.Soil");
                        if (toupper(getch())=='D')
                        {
                            printf("\n\n\n\t\tCorrect Answer!!!");
                            count++;
                            score++;
                            getch();
                            break;
                        }
                        else
                        {
                            printf("\n\n\n\t\tYour answer is Wrong... The correct answer is D.Soil");
                            getch();
                            break;
                        }
                    case 8:
                        printf("\n\n\n\t\tLevel-1\n\n\n\t\tQuestion-8:");
                        printf("\n\n\n\t\tThe shape of our milky way galaxy is--");
                        printf("\n\n\n\t\tA.Circular\n\n\n\t\tB.Elliptical\n\n\n\t\tC.Spiral\n\n\n\t\tD.No exact shape");
                        if (toupper(getch())=='C')
                        {
                            printf("\n\n\n\t\tCorrect Answer!!!");
                            count++;
                            score++;
                            getch();
                            break;
                        }
                        else
                        {
                            printf("\n\n\n\t\tYour answer is Wrong... The correct answer is C.Spiral");
                            getch();
                            break;
                        }
                    case 9:
                        printf("\n\n\n\t\tLevel-1\n\n\n\t\tQuestion-9:");
                        printf("\n\n\n\t\tWhich of the following computer language is used for artificial intelligence?");
                        printf("\n\n\n\t\tA.FORTRAN\n\n\n\t\tB.PRLOG\n\n\n\t\tC.C\n\n\n\t\tD.COBOL");
                        if (toupper(getch())=='B')
                        {
                            printf("\n\n\n\t\tCorrect Answer!!!");
                            count++;
                            score++;
                            getch();
                            break;
                        }
                        else
                        {
                            printf("\n\n\n\t\tYour answer is Wrong... The correct answer is B.PRLOG");
                            getch();
                            break;
                        }
                    case 10:
                        printf("\n\n\n\t\tLevel-1\n\n\n\t\tQuestion-10:");
                        printf("\n\n\n\t\tWhat was the theme of the 2018 World Earth Day?");
                        printf("\n\n\n\t\tA.End plastic pollution\n\n\n\t\tB.Save mother earth from plastic\n\n\n\t\tC.No to plastic\n\n\n\t\tD.Plastic pollution:A menace");
                        if (toupper(getch())=='A')
                        {
                            printf("\n\n\n\t\tCorrect Answer!!!");
                            count++;
                            score++;
                            getch();
                            break;
                        }
                        else
                        {
                            printf("\n\n\n\t\tYour answer is Wrong... The correct answer is A.End plastic pollution");
                            getch();
                            break;
                        }

                    }
                }
                system("cls");
                printf("\n\n\n\t\t\tYour score is: %d  \n\n\n\t\t\tWELL DONE!!\n\n\n",score);
                printf("\n\n\t\tPress any key to see your total bonus score\n");
                getch();

                bonus=score*10;
                printf("\n\n\t\t***YOUR SCORE INCLUDING BONUS IS %d***\n\n",bonus);
                printf("press any key to continue\n");
                getch();

                if(score<10)
                {
                    fflush(stdin);
                    printf("\n\n\t\tDo you want to play the level again?\n");
                    printf("\n\n\t\tType y to play again\n");

                    {
                        if(toupper(getch())=='Y')
                        {
                            system("cls");
                            goto level_1;
                        }

                        else
                        {
                            if(score<3)
                            {
                                system("cls");
                                goto go;
                            }
                            else
                            {
                                system("cls");
                                printf("\n\n\n\t\t\tYour score is: %d  \n\n\n\t\t\tWELL DONE!!\n\n\n",score);
                                printf("level-2 unlocked\n");
                                printf("\n>>press any key to continue");
                            }
                        }
                    }
                }

                else if(score==10)
                {
                    system("cls");
                    printf("\n\n\n\t\t\tYour score is: %d  \n\n\n\t\t\tWELL DONE!!\n\n\n",score);
                    printf("level-2 unlocked\n");
                    printf("\n>>press any key to continue");
                }

                getch();

                {
level_2:
                    system("cls");
                    count=0;
                    score=0;
                    for(i=1; i<=10; i++)
                    {
                        system("cls");
                        r1=i;


                        switch(r1)
                        {
                        case 1:
                            printf("\t\tLevel-2\n\nQuestion-1:");
                            printf("\n\nBrain of any computer system is-- ");
                            printf("\n\nA.ALU\n\nB.Memory\n\nC.CPU\n\nD.Control unit");
                            if (toupper(getch())=='C')
                            {
                                printf("\n\nCorrect Answer!!!");
                                count++;
                                score++;
                                getch();
                                break;
                            }
                            else
                            {
                                printf("\n\nYour answer is Wrong... The correct answer is C.CPU");
                                getch();
                                break;
                            }
                        case 2:
                            printf("\t\tLevel-2\n\nQuestion-2:");
                            printf("\n\n\nA computer program that converts assembly language to machine language is--");
                            printf("\n\nA.Compiler\n\nB.Interpreter\n\nC.Assembler\n\nD.Comparator");
                            if (toupper(getch())=='C')
                            {
                                printf("\n\nCorrect Answer!!!");
                                count++;;
                                score++;
                                getch();
                                break;
                            }
                            else
                            {
                                printf("\n\nYour answer is Wrong... The correct answer is C.Assembler");
                                getch();
                                break;
                            }
                        case 3:
                            printf("\t\tLevel-2\n\nQuestion-3:");
                            printf("\n\n\nThe time for which a piece of equipment operates is called--");
                            printf("\n\nA.Seek time\n\nB.Effective time\n\nC.Access time\n\nD.Real time");
                            if (toupper(getch())=='B')
                            {
                                printf("\n\nCorrect Answer!!!");
                                count++;
                                score++;
                                getch();
                                break;
                            }
                            else
                            {
                                printf("\n\nYour answer is Wrong... The correct answer is B.Effective time");
                                getch();
                                break;
                            }
                        case 4:
                            printf("\t\tLevel-2\n\nQuestion-4:");
                            printf("\n\n\nWhich access method is used for obtaining a record from a cassette tape?");
                            printf("\n\nA.Direct\n\nB.Sequential\n\nC.Random\n\nD.All of the above");
                            if (toupper(getch())=='B')
                            {
                                printf("\n\nCorrect Answer!!!");
                                count++;
                                score++;
                                getch();
                                break;
                            }
                            else
                            {
                                printf("\n\nYour answer is Wrong... The correct answer is B.Sequential");
                                getch();
                                break;
                            }
                        case 5:
                            printf("\t\tLevel-2\n\nQuestion-5:");
                            printf("\n\n\nThe section of the CPU that selects,interprets and sees to the execution of program instruction");
                            printf("\n\nA.Memory\n\nB.Register unit\n\nC.Control unit\n\nD.ALU");
                            if (toupper(getch())=='C')
                            {
                                printf("\n\nCorrect Answer!!!");
                                count++;
                                score++;
                                getch();
                                break;
                            }
                            else
                            {
                                printf("\n\nYour answer is Wrong... The correct answer is C.Control unit");
                                getch();
                                break;
                            }
                        case 6:
                            printf("\t\tLevel-2\n\nQuestion-6:");
                            printf("\n\n\nThe hydronium ion is--");
                            printf("\n\nA.H+\n\nB.HO-\n\nC.H2+\n\nD.H3O+");
                            if (toupper(getch())=='D')
                            {
                                printf("\n\nCorrect Answer!!!");
                                count++;
                                score++;
                                getch();
                                break;
                            }
                            else
                            {
                                printf("\n\nYour answer is Wrong... The correct answer is D.H3O+");
                                getch();
                                break;
                            }
                        case 7:
                            printf("\t\tLevel-2\n\nQuestion-7:");
                            printf("\n\n\nPlants receive their nutrients mainly from--");
                            printf("\n\nA.Chlorophyll\n\nB.Atmosphere\n\nC.Light\n\nD.Soil");
                            if (toupper(getch())=='D')
                            {
                                printf("\n\nCorrect Answer!!!");
                                count++;
                                score++;
                                getch();
                                break;
                            }
                            else
                            {
                                printf("\n\nYour answer is Wrong... The correct answer is D.Soil");
                                getch();
                                break;
                            }
                        case 8:
                            printf("\t\tLevel-2\n\nQuestion-8:");
                            printf("\n\n\nThe shape of our milky way galaxy is--");
                            printf("\n\nA.Circular\n\nB.Elliptical\n\nC.Spiral\n\nD.No exact shape");
                            if (toupper(getch())=='C')
                            {
                                printf("\n\nCorrect Answer!!!");
                                count++;
                                score++;
                                getch();
                                break;
                            }
                            else
                            {
                                printf("\n\nYour answer is Wrong... The correct answer is C.Spiral");
                                getch();
                                break;
                            }
                        case 9:
                            printf("\t\tLevel-2\n\nQuestion-9:");
                            printf("\n\n\nWhich of the following computer language is used for artificial intelligence?");
                            printf("\n\nA.FORTRAN\n\nB.PRLOG\n\nC.C\n\nD.COBOL");
                            if (toupper(getch())=='B')
                            {
                                printf("\n\nCorrect Answer!!!");
                                count++;
                                score++;
                                getch();
                                break;
                            }
                            else
                            {
                                printf("\n\nYour answer is Wrong... The correct answer is B.PRLOG");
                                getch();
                                break;
                            }
                        case 10:
                            printf("\t\tLevel-2\n\nQuestion-10:");
                            printf("\n\n\nWhat was the theme of the 2018 World Earth Day?");
                            printf("\n\nA.End plastic pollution\n\nB.Save mother earth from plastic\n\nC.No to plastic\n\nD.Plastic pollution:A menace");
                            if (toupper(getch())=='A')
                            {
                                printf("\n\nCorrect Answer!!!");
                                count++;
                                score++;
                                getch();
                                break;
                            }
                            else
                            {
                                printf("\n\nYour answer is Wrong... The correct answer is A.End plastic pollution");
                                getch();
                                break;
                            }
                        }
                    }
                    system("cls");
                    printf("\n\n\n\t\t\tYour score is: %d  \n\n\n\t\t\tWELL DONE!!\n\n\n",score);
                    printf("\n\n\t\tPress any key to see your total bonus score\n");
                    getch();
                    if(bonus<0)
                        bonus1=score*20;
                    else if(bonus>=0)
                        bonus1=score*20+bonus;

                    printf("\n\n\t\t***YOUR SCORE INCLUDING BONUS IS %d***\n\n",bonus1);
                    printf("press any key to continue\n");
                    getch();

                    if(score<10)
                    {
                        fflush(stdin);
                        printf("\n\n\t\tDo you want to play the level again?\n");
                        printf("\n\n\t\tType y to play again\n");

                        {
                            if(toupper(getch())=='Y')
                            {
                                system("cls");
                                goto level_2;
                            }
                            else
                            {
                                if(score<5)
                                {
                                    system("cls");
                                    goto go1;
                                }
                                else
                                {
                                    system("cls");
                                    printf("\n\n\n\t\t\tYour score is: %d  \n\n\n\t\t\tWELL DONE!!\n\n\n",score);
                                    printf("level-3 unlocked\n");
                                    printf("\n>>press any key to continue");
                                }
                            }
                        }
                    }
                    else if(score==10)
                    {
                        system("cls");
                        printf("\n\n\n\t\t\tYour score is: %d  \n\n\n\t\t\tWELL DONE!!\n\n\n",score);
                        printf("level-3 unlocked\n");
                        printf("\n>>press any key to continue");
                    }


                    getch();

                    {
level_3:

                        system("cls");
                        count=0;
                        score=0;
                        for(i=1; i<=10; i++)
                        {
                            system("cls");
                            r2=i;


                            switch(r2)
                            {
                            case 1:
                                printf("\t\tLevel-3\n\nQuestion-1:");
                                printf("\n\nThe time required for the fetching & execution of one simple machine instruction is--");
                                printf("\n\nA.Delay time\n\nB.CPU cycle\n\nC.Real time\n\nD.Seek time");
                                if (toupper(getch())=='B')
                                {
                                    printf("\n\nCorrect Answer!!!");
                                    count++;
                                    score++;
                                    getch();
                                    break;
                                }
                                else
                                {
                                    printf("\n\nYour answer is Wrong... The correct answer is B.CPU cycle");
                                    getch();
                                    break;
                                }
                            case 2:
                                printf("\t\tLevel-3\n\nQuestion-2:");
                                printf("\n\n\nThe instrument that measures & records the relative humidity of air is--");
                                printf("\n\nA.Hydrometer\n\nB.Hygrometer\n\nC.Lactometer\n\nD.Barometer");
                                if (toupper(getch())=='B')
                                {
                                    printf("\n\nCorrect Answer!!!");
                                    count++;;
                                    score++;
                                    getch();
                                    break;
                                }
                                else
                                {
                                    printf("\n\nYour answer is Wrong... The correct answer is B.CPU cycle");
                                    getch();
                                    break;
                                }
                            case 3:
                                printf("\t\tLevel-3\n\nQuestion-3:");
                                printf("\n\n\nThe average of first 50 natural number is--");
                                printf("\n\nA.25.30\n\nB.25.5\n\nC.25.00\n\nD.12.25");
                                if (toupper(getch())=='B')
                                {
                                    printf("\n\nCorrect Answer!!!");
                                    count++;
                                    score++;
                                    getch();
                                    break;
                                }
                                else
                                {
                                    printf("\n\nYour answer is Wrong... The correct answer is B.25.5");
                                    getch();
                                    break;
                                }
                            case 4:
                                printf("\t\tLevel-3\n\nQuestion-4:");
                                printf("\n\n\nThe most commonly used bleaching agent is--");
                                printf("\n\nA.Alcohol\n\nB.Carbon dioxide\n\nC.Chlorine\n\nD.Sodium Chloride");
                                if (toupper(getch())=='C')
                                {
                                    printf("\n\nCorrect Answer!!!");
                                    count++;
                                    score++;
                                    getch();
                                    break;
                                }
                                else
                                {
                                    printf("\n\nYour answer is Wrong... The correct answer is C.Chlorine");
                                    getch();
                                    break;
                                }
                            case 5:
                                printf("\t\tLevel-3\n\nQuestion-5:");
                                printf("\n\n\nWhich of the following is the first complement of 10?");
                                printf("\n\nA.01\n\nB.110\n\nC.11\n\nD.10");
                                if (toupper(getch())=='A')
                                {
                                    printf("\n\nCorrect Answer!!!");
                                    count++;
                                    score++;
                                    getch();
                                    break;
                                }
                                else
                                {
                                    printf("\n\nYour answer is Wrong... The correct answer is A.01");
                                    getch();
                                    break;
                                }
                            case 6:
                                printf("\t\tLevel-3\n\nQuestion-6:");
                                printf("\n\n\nThe hydronium ion is--");
                                printf("\n\nA.H+\n\nB.HO-\n\nC.H2+\n\nD.H3O+");
                                if (toupper(getch())=='D')
                                {
                                    printf("\n\nCorrect Answer!!!");
                                    count++;
                                    score++;
                                    getch();
                                    break;
                                }
                                else
                                {
                                    printf("\n\nYour answer is Wrong... The correct answer is D.H3O+");
                                    getch();
                                    break;
                                }
                            case 7:
                                printf("\t\tLevel-3\n\nQuestion-7:");
                                printf("\n\n\nPlants receive their nutrients mainly from--");
                                printf("\n\nA.Chlorophyll\n\nB.Atmosphere\n\nC.Light\n\nD.Soil");
                                if (toupper(getch())=='D')
                                {
                                    printf("\n\nCorrect Answer!!!");
                                    count++;
                                    score++;
                                    getch();
                                    break;
                                }
                                else
                                {
                                    printf("\n\nYour answer is Wrong... The correct answer is D.Soil");
                                    getch();
                                    break;
                                }
                            case 8:
                                printf("\t\tLevel-3\n\nQuestion-8:");
                                printf("\n\n\nThe shape of our milky way galaxy is--");
                                printf("\n\nA.Circular\n\nB.Elliptical\n\nC.Spiral\n\nD.No exact shape");
                                if (toupper(getch())=='C')
                                {
                                    printf("\n\nCorrect Answer!!!");
                                    count++;
                                    score++;
                                    getch();
                                    break;
                                }
                                else
                                {
                                    printf("\n\nYour answer is Wrong... The correct answer is C.Spiral");
                                    getch();
                                    break;
                                }
                            case 9:
                                printf("\t\tLevel-3\n\nQuestion-9:");
                                printf("\n\n\nWhich of the following computer language is used for artificial intelligence?");
                                printf("\n\nA.FORTRAN\n\nB.PRLOG\n\nC.C\n\nD.COBOL");
                                if (toupper(getch())=='B')
                                {
                                    printf("\n\nCorrect Answer!!!");
                                    count++;
                                    score++;
                                    getch();
                                    break;
                                }
                                else
                                {
                                    printf("\n\nYour answer is Wrong... The correct answer is B.PRLOG");
                                    getch();
                                    break;
                                }
                            case 10:
                                printf("\t\tLevel-3\n\nQuestion-10:");
                                printf("\n\n\nWhat was the theme of the 2018 World Earth Day?");
                                printf("\n\nA.End plastic pollution\n\nB.Save mother earth from plastic\n\nC.No to plastic\n\nD.Plastic pollution:A menace");
                                if (toupper(getch())=='A')
                                {
                                    printf("\n\nCorrect Answer!!!");
                                    count++;
                                    score++;
                                    getch();
                                    break;
                                }
                                else
                                {
                                    printf("\n\nYour answer is Wrong... The correct answer is A.End plastic pollution");
                                    getch();
                                    break;
                                }
                            }
                        }
                        system("cls");
                    printf("\n\n\n\t\t\tYour score is: %d  \n\n\n\t\t\tWELL DONE!!\n\n\n",score);
                    printf("\n\n\t\tPress any key to see your total bonus score\n");
                    getch();
                    if(bonus1<0)
                        bonus2=score*30;
                    else if(bonus1>=0)
                        bonus2=score*30+bonus1;

                    printf("\n\n\t\t***YOUR SCORE INCLUDING BONUS IS %d***\n\n",bonus2);
                    printf("press any key to continue\n");
                    getch();

                        if(score<10)
                        {
                            fflush(stdin);
                            printf("\n\n\t\tDo you want to play the level again?\n");
                            printf("\n\n\t\tType y to play again\n");

                            {
                                if(toupper(getch())=='Y')
                                {
                                    system("cls");
                                    goto level_3;
                                }

                                else
                                {
                                    if(score<7)
                                    {
                                        system("cls");
                                        goto go2;
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("\n\n\n\t\t\tYour score is: %d  \n\n\n\t\t\tWELL DONE!!\n\n\n",score);
                                        printf("level-4 unlocked\n");
                                        printf("\n>>press any key to continue");
                                    }
                                }
                            }
                        }

                        else if(score==10)
                        {
                            system("cls");
                            printf("\n\n\n\t\t\tYour score is: %d  \n\n\n\t\t\tWELL DONE!!\n\n\n",score);
                            printf("level-4 unlocked\n");
                            printf("\n>>press any key to continue");
                        }



                        choice=toupper(getch());

                        {
level_4:

                            system("cls");
                            count=0;
                            score=0;
                            for(i=1; i<=10; i++)
                            {
                                system("cls");
                                r3=i;


                                switch(r3)
                                {
                                case 1:
                                    printf("\t\tLevel-4\n\nQuestion-1:");
                                    printf("\n\nThe time required for the fetching & execution of one simple machine instruction is--");
                                    printf("\n\nA.Delay time\n\nB.CPU cycle\n\nC.Real time\n\nD.Seek time");
                                    if (toupper(getch())=='B')
                                    {
                                        printf("\n\nCorrect Answer!!!");
                                        count++;
                                        score++;
                                        getch();
                                        break;
                                    }
                                    else
                                    {
                                        printf("\n\nYour answer is Wrong... The correct answer is B.CPU cycle");
                                        getch();
                                        break;
                                    }
                                case 2:
                                    printf("\t\tLevel-4\n\nQuestion-2:");
                                    printf("\n\n\nThe instrument that measures & records the relative humidity of air is--");
                                    printf("\n\nA.Hydrometer\n\nB.Hygrometer\n\nC.Lactometer\n\nD.Barometer");
                                    if (toupper(getch())=='B')
                                    {
                                        printf("\n\nCorrect Answer!!!");
                                        count++;;
                                        score++;
                                        getch();
                                        break;
                                    }
                                    else
                                    {
                                        printf("\n\nYour answer is Wrong... The correct answer is B.CPU cycle");
                                        getch();
                                        break;
                                    }
                                case 3:
                                    printf("\t\tLevel-4\n\nQuestion-3:");
                                    printf("\n\n\nThe average of first 50 natural number is--");
                                    printf("\n\nA.25.30\n\nB.25.5\n\nC.25.00\n\nD.12.25");
                                    if (toupper(getch())=='B')
                                    {
                                        printf("\n\nCorrect Answer!!!");
                                        count++;
                                        score++;
                                        getch();
                                        break;
                                    }
                                    else
                                    {
                                        printf("\n\nYour answer is Wrong... The correct answer is B.25.5");
                                        getch();
                                        break;
                                    }
                                case 4:
                                    printf("\t\tLevel-4\n\nQuestion-4:");
                                    printf("\n\n\nThe most commonly used bleaching agent is--");
                                    printf("\n\nA.Alcohol\n\nB.Carbon dioxide\n\nC.Chlorine\n\nD.Sodium Chloride");
                                    if (toupper(getch())=='C')
                                    {
                                        printf("\n\nCorrect Answer!!!");
                                        count++;
                                        score++;
                                        getch();
                                        break;
                                    }
                                    else
                                    {
                                        printf("\n\nYour answer is Wrong... The correct answer is C.Chlorine");
                                        getch();
                                        break;
                                    }
                                case 5:
                                    printf("\t\tLevel-4\n\nQuestion-5:");
                                    printf("\n\n\nWhich of the following is the first complement of 10?");
                                    printf("\n\nA.01\n\nB.110\n\nC.11\n\nD.10");
                                    if (toupper(getch())=='A')
                                    {
                                        printf("\n\nCorrect Answer!!!");
                                        count++;
                                        score++;
                                        getch();
                                        break;
                                    }
                                    else
                                    {
                                        printf("\n\nYour answer is Wrong... The correct answer is A.01");
                                        getch();
                                        break;
                                    }
                                case 6:
                                    printf("\t\tLevel-4\n\nQuestion-6:");
                                    printf("\n\n\nThe hydronium ion is--");
                                    printf("\n\nA.H+\n\nB.HO-\n\nC.H2+\n\nD.H3O+");
                                    if (toupper(getch())=='D')
                                    {
                                        printf("\n\nCorrect Answer!!!");
                                        count++;
                                        score++;
                                        getch();
                                        break;
                                    }
                                    else
                                    {
                                        printf("\n\nYour answer is Wrong... The correct answer is D.H3O+");
                                        getch();
                                        break;
                                    }
                                case 7:
                                    printf("\t\tLevel-4\n\nQuestion-7:");
                                    printf("\n\n\nPlants receive their nutrients mainly from--");
                                    printf("\n\nA.Chlorophyll\n\nB.Atmosphere\n\nC.Light\n\nD.Soil");
                                    if (toupper(getch())=='D')
                                    {
                                        printf("\n\nCorrect Answer!!!");
                                        count++;
                                        score++;
                                        getch();
                                        break;
                                    }
                                    else
                                    {
                                        printf("\n\nYour answer is Wrong... The correct answer is D.Soil");
                                        getch();
                                        break;
                                    }
                                case 8:
                                    printf("\t\tLevel-4\n\nQuestion-8:");
                                    printf("\n\n\nThe shape of our milky way galaxy is--");
                                    printf("\n\nA.Circular\n\nB.Elliptical\n\nC.Spiral\n\nD.No exact shape");
                                    if (toupper(getch())=='C')
                                    {
                                        printf("\n\nCorrect Answer!!!");
                                        count++;
                                        score++;
                                        getch();
                                        break;
                                    }
                                    else
                                    {
                                        printf("\n\nYour answer is Wrong... The correct answer is C.Spiral");
                                        getch();
                                        break;
                                    }
                                case 9:
                                    printf("\t\tLevel-4\n\nQuestion-9:");
                                    printf("\n\n\nWhich of the following computer language is used for artificial intelligence?");
                                    printf("\n\nA.FORTRAN\n\nB.PRLOG\n\nC.C\n\nD.COBOL");
                                    if (toupper(getch())=='B')
                                    {
                                        printf("\n\nCorrect Answer!!!");
                                        count++;
                                        score++;
                                        getch();
                                        break;
                                    }
                                    else
                                    {
                                        printf("\n\nYour answer is Wrong... The correct answer is B.PRLOG");
                                        getch();
                                        break;
                                    }
                                case 10:
                                    printf("\t\tLevel-4\n\nQuestion-10:");
                                    printf("\n\n\nWhat was the theme of the 2018 World Earth Day?");
                                    printf("\n\nA.End plastic pollution\n\nB.Save mother earth from plastic\n\nC.No to plastic\n\nD.Plastic pollution:A menace");
                                    if (toupper(getch())=='A')
                                    {
                                        printf("\n\nCorrect Answer!!!");
                                        count++;
                                        score++;
                                        getch();
                                        break;
                                    }
                                    else
                                    {
                                        printf("\n\nYour answer is Wrong... The correct answer is A.End plastic pollution");
                                        getch();
                                        break;
                                    }
                                }
                            }
                            system("cls");
                    printf("\n\n\n\t\t\tYour score is: %d  \n\n\n\t\t\tWELL DONE!!\n\n\n",score);
                    printf("\n\n\t\tPress any key to see your total bonus score\n");
                    getch();
                    if(bonus2<0)
                        bonus3=score*40;
                    else if(bonus2>=0)
                        bonus3=score*40+bonus2;

                    printf("\n\n\t\t***YOUR SCORE INCLUDING BONUS IS %d***\n\n",bonus3);
                    printf("press any key to continue\n");
                    getch();

                            if(score<10)
                            {
                                fflush(stdin);
                                printf("\n\n\t\tDo you want to play the level again?\n");
                                printf("\n\n\t\tType y to play again\n");

                                {
                                    if(toupper(getch())=='Y')
                                    {
                                        system("cls");
                                        goto level_4;
                                    }

                                    else
                                    {
                                        if(score<8)
                                        {
                                            system("cls");
                                            goto go3;
                                        }
                                        else
                                        {
                                            system("cls");
                                            printf("\n\n\n\t\t\tYour score is: %d  \n\n\n\t\t\tWELL DONE!!\n\n\n",score);
                                            printf("level-5 unlocked\n");
                                            printf("\n>>press any key to continue");
                                        }
                                    }
                                }
                            }

                            else if(score==10)
                            {
                                system("cls");
                                printf("\n\n\n\t\t\tYour score is: %d  \n\n\n\t\t\tWELL DONE!!\n\n\n",score);
                                printf("level-5 unlocked\n");
                                printf("\n>>press any key to continue");
                            }



                            choice=toupper(getch());

                            {
level_5:
                                system("cls");
                                count=0;
                                score=0;
                                for(i=1; i<=10; i++)
                                {
                                    system("cls");
                                    r4=i;


                                    switch(r4)
                                    {
                                    case 1:
                                        printf("\t\tLevel-5\n\nQuestion-1:");
                                        printf("\n\nThe time required for the fetching & execution of one simple machine instruction is--");
                                        printf("\n\nA.Delay time\n\nB.CPU cycle\n\nC.Real time\n\nD.Seek time");
                                        if (toupper(getch())=='B')
                                        {
                                            printf("\n\nCorrect Answer!!!");
                                            count++;
                                            score++;
                                            getch();
                                            break;
                                        }
                                        else
                                        {
                                            printf("\n\nYour answer is Wrong... The correct answer is B.CPU cycle");
                                            getch();
                                            break;
                                        }
                                    case 2:
                                        printf("\t\tLevel-5\n\nQuestion-2:");
                                        printf("\n\n\nThe instrument that measures & records the relative humidity of air is--");
                                        printf("\n\nA.Hydrometer\n\nB.Hygrometer\n\nC.Lactometer\n\nD.Barometer");
                                        if (toupper(getch())=='B')
                                        {
                                            printf("\n\nCorrect Answer!!!");
                                            count++;;
                                            score++;
                                            getch();
                                            break;
                                        }
                                        else
                                        {
                                            printf("\n\nYour answer is Wrong... The correct answer is B.CPU cycle");
                                            getch();
                                            break;
                                        }
                                    case 3:
                                        printf("\t\tLevel-5\n\nQuestion-3:");
                                        printf("\n\n\nThe average of first 50 natural number is--");
                                        printf("\n\nA.25.30\n\nB.25.5\n\nC.25.00\n\nD.12.25");
                                        if (toupper(getch())=='B')
                                        {
                                            printf("\n\nCorrect Answer!!!");
                                            count++;
                                            score++;
                                            getch();
                                            break;
                                        }
                                        else
                                        {
                                            printf("\n\nYour answer is Wrong... The correct answer is B.25.5");
                                            getch();
                                            break;
                                        }
                                    case 4:
                                        printf("\t\tLevel-5\n\nQuestion-4:");
                                        printf("\n\n\nThe most commonly used bleaching agent is--");
                                        printf("\n\nA.Alcohol\n\nB.Carbon dioxide\n\nC.Chlorine\n\nD.Sodium Chloride");
                                        if (toupper(getch())=='C')
                                        {
                                            printf("\n\nCorrect Answer!!!");
                                            count++;
                                            score++;
                                            getch();
                                            break;
                                        }
                                        else
                                        {
                                            printf("\n\nYour answer is Wrong... The correct answer is C.Chlorine");
                                            getch();
                                            break;
                                        }
                                    case 5:
                                        printf("\t\tLevel-5\n\nQuestion-5:");
                                        printf("\n\n\nWhich of the following is the first complement of 10?");
                                        printf("\n\nA.01\n\nB.110\n\nC.11\n\nD.10");
                                        if (toupper(getch())=='A')
                                        {
                                            printf("\n\nCorrect Answer!!!");
                                            count++;
                                            score++;
                                            getch();
                                            break;
                                        }
                                        else
                                        {
                                            printf("\n\nYour answer is Wrong... The correct answer is A.01");
                                            getch();
                                            break;
                                        }
                                    case 6:
                                        printf("\t\tLevel-5\n\nQuestion-6:");
                                        printf("\n\n\nThe hydronium ion is--");
                                        printf("\n\nA.H+\n\nB.HO-\n\nC.H2+\n\nD.H3O+");
                                        if (toupper(getch())=='D')
                                        {
                                            printf("\n\nCorrect Answer!!!");
                                            count++;
                                            score++;
                                            getch();
                                            break;
                                        }
                                        else
                                        {
                                            printf("\n\nYour answer is Wrong... The correct answer is D.H3O+");
                                            getch();
                                            break;
                                        }
                                    case 7:
                                        printf("\t\tLevel-5\n\nQuestion-7:");
                                        printf("\n\n\nPlants receive their nutrients mainly from--");
                                        printf("\n\nA.Chlorophyll\n\nB.Atmosphere\n\nC.Light\n\nD.Soil");
                                        if (toupper(getch())=='D')
                                        {
                                            printf("\n\nCorrect Answer!!!");
                                            count++;
                                            score++;
                                            getch();
                                            break;
                                        }
                                        else
                                        {
                                            printf("\n\nYour answer is Wrong... The correct answer is D.Soil");
                                            getch();
                                            break;
                                        }
                                    case 8:
                                        printf("\t\tLevel-5\n\nQuestion-8:");
                                        printf("\n\n\nThe shape of our milky way galaxy is--");
                                        printf("\n\nA.Circular\n\nB.Elliptical\n\nC.Spiral\n\nD.No exact shape");
                                        if (toupper(getch())=='C')
                                        {
                                            printf("\n\nCorrect Answer!!!");
                                            count++;
                                            score++;
                                            getch();
                                            break;
                                        }
                                        else
                                        {
                                            printf("\n\nYour answer is Wrong... The correct answer is C.Spiral");
                                            getch();
                                            break;
                                        }
                                    case 9:
                                        printf("\t\tLevel-5\n\nQuestion-9:");
                                        printf("\n\n\nWhich of the following computer language is used for artificial intelligence?");
                                        printf("\n\nA.FORTRAN\n\nB.PRLOG\n\nC.C\n\nD.COBOL");
                                        if (toupper(getch())=='B')
                                        {
                                            printf("\n\nCorrect Answer!!!");
                                            count++;
                                            score++;
                                            getch();
                                            break;
                                        }
                                        else
                                        {
                                            printf("\n\nYour answer is Wrong... The correct answer is B.PRLOG");
                                            getch();
                                            break;
                                        }
                                    case 10:
                                        printf("\t\tLevel-5\n\nQuestion-10:");
                                        printf("\n\n\nWhat was the theme of the 2018 World Earth Day?");
                                        printf("\n\nA.End plastic pollution\n\nB.Save mother earth from plastic\n\nC.No to plastic\n\nD.Plastic pollution:A menace");
                                        if (toupper(getch())=='A')
                                        {
                                            printf("\n\nCorrect Answer!!!");
                                            count++;
                                            score++;
                                            getch();
                                            break;
                                        }
                                        else
                                        {
                                            printf("\n\nYour answer is Wrong... The correct answer is A.End plastic pollution");
                                            getch();
                                            break;
                                        }
                                    }
                                }
                                system("cls");
                    printf("\n\n\n\t\t\tYour score is: %d  \n\n\n\t\t\tWELL DONE!!\n\n\n",score);
                    printf("\n\n\t\tPress any key to see your total bonus score\n");
                    getch();
                    if(bonus3<0)
                        bonus4=score*50;
                    else if(bonus3>=0)
                        bonus4=score*50+bonus3;

                    printf("\n\n\t\t***YOUR SCORE INCLUDING BONUS IS %d***\n\n",bonus4);
                    printf("press any key to continue\n");
                    getch();

                                if(score<10)
                                {
                                    fflush(stdin);
                                    system("cls");
                                    goto go4;
                                }
                                else if(score==10)


                                {


                                    printf("\n\n\n\t\tGAME OVER\n\n\n");
                                    printf("\n\n\n\t\tCONGRATULATIONS!!!\n\n\n\t\tYOU FINISHED ALL YOUR LEVELS");
                                    printf(" Press any key to go back to main menu");
                                    getch();
                                    goto mainhome;
                                }

                            }
                        }
                    }
                }
            }

            else if(choice=='B')
            {
                if(bonus>=30)
                {
                    system("cls");
                    printf("\nyou are allowed to play level 2\n");
                    printf("\n press any key to continue\n");
                    getch();

                    goto level_2;
                }
                else
                {
                    system("cls");
                    printf("\n you aren't allowed to play level 2\n");
                    printf("\n press any key to go back to main menu\n");
                    getch();
                    goto mainhome;
                }
            }
            else if(choice=='C')
            {
                system("cls");
                if(bonus1>=130)
                {
                    system("cls");
                    printf("\nyou are allowed to play level 3\n");
                    printf("\n press any key to continue\n");
                    getch();
                    goto level_3;
                }
                else
                {
                    system("cls");
                    printf("\n you aren't allowed to play level 3\n");
                    printf("\n press any key to go back to main menu\n");
                    getch();
                    goto mainhome;
                }
            }
            else if(choice=='D')
            {
                system("cls");
                if(bonus2>=340)
                {
                    system("cls");
                    printf("\nyou are allowed to play level 4\n");
                    printf("\n press any key to continue\n");
                    getch();
                    goto level_4;
                }
                else
                {
                    system("cls");
                    printf("\n you aren't allowed to play level 4\n");
                    printf("\n press any key to go back to main menu\n");
                    getch();
                    goto mainhome;
                }
            }
            else if(choice=='E')
            {
                system("cls");
                if(bonus3>=660)
                {
                    system("cls");
                    printf("\nyou are allowed to play level 5\n");
                    printf("\n press any key to continue\n");
                    getch();
                    goto level_5;
                }
                else
                {
                    system("cls");
                    printf("\n you aren't allowed to play level 5\n");
                    printf("\n press any key to go back to main menu\n");
                    getch();
                    goto mainhome;
                }
            }

        }
        else if(choice!='C')
        {
            system("cls");
            goto mainhome;
        }

    }

    else if(choice=='H')
    {
        system("cls");
        printf("\n\n\n\t\tHELP");
        printf("\n\n\n\t\tAre you looking for help?");
        printf("\n\n\n\t\tThere are some help explaining level up and bonus score");
        printf("\n\n\n\t\t\tLEVEL UP\t\t\t\t\t\tBONUS SCORE");
        printf("\n\n\t\t>For level-1 you have to score at-least 3\n\t\tto proceed to the next level\t\t\t\t>Level-1   Bonus = Score*10");
        printf("\n\n\t\t>For level-2 this minimum score is 5\t\t\t>Level-2   Bonus1 = Bonus + Score*20");
        printf("\n\n\t\t>For level-3 this minimum score is 7\t\t\t>Level-3   Bonus2 = Bonus1 + Score*30");
        printf("\n\n\t\t>For level-4 this minimum score is 8\t\t\t>Level-4   Bonus3 = Bonus2 + Score*40");
        printf("\n\n\t\t>For level-5 you have to score 10 out of 10\t\t>Level-5   Bonus4 = Bonus3 + Score*50");
        getch();
        goto mainhome;
    }
    else if(choice=='Q')
    {
        exit(1);
    }

go:
    printf("\n\n\n\t\tYou have to score at least 3 to play next level\n\n\n\t\tPress Y if you want to play the level again\n\n\n\t\t");
    printf(" Press any key if you want to go main menu");
    if (toupper(getch())=='Y')
        goto level_1;
    else if(choice!='Y')
    {
        goto mainhome;
    }

go1:
    printf("\n\n\n\t\tYou have to score at least 5 to play next level\n\n\n\t\tPress Y if you want to play the level again\n\n\n\t\t");
    printf(" Press any key if you want to go main menu");
    if (toupper(getch())=='Y')
        goto level_2;
    else
    {
        goto mainhome;
    }

go2:
    printf("\n\n\n\t\tYou have to score 7 to play next level\n\n\n\t\tPress Y if you want to play the level again\n\n\n\t\t");
    printf(" Press any key if you want to go main menu");
    if (toupper(getch())=='Y')
        goto level_3;
    else
    {
        goto mainhome;
    }

go3:
    printf("\n\n\n\t\tYou have to score 8 to play next level\n\n\n\t\tPress Y if you want to play the level again\n\n\n\t\t");
    printf(" Press any key if you want to go main menu");
    if (toupper(getch())=='Y')
        goto level_4;
    else
    {
        goto mainhome;
    }

go4:
    printf("\n\n\n\t\tYou have to score 10 to finish game\n\n\n\t\tPress Y if you want to play the level again\n\n\n\t\t");
    printf(" Press any key if you want to go main menu");
    if (toupper(getch())=='Y')
        goto level_5;
    else
    {
        goto mainhome;
    }

    return 0;

}
