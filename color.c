

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int choice;
int user,i;
system ( "cls" ) ;
int YES = 1;
int NO = 2;

int invalid =5;
int color =6;


S1:
     system("cls");
     system("COLOR 02");
/*Program begins*/
/*Cmd Interface Color  selection*/
     printf("\n\t\t----------------------------WELCOME TO CMD PROGRAM EXECUTION.---------------------------\n");

     printf("\n\n\n\n******************BEFORE STARTING CHOOSE A COLOUR FOR YOUR CMD INTERFACE*************\n");

        while (color)
            {
                C2:

        printf ( "\nCHOOSE THE COLORS  TO SET \n" ) ;
        printf ( "1.  SET BACKGROUND COLOR = PURPLE  AND TEXT COLOR = GREEN\n" ) ;
        printf ( "2.  SET BACKGROUND COLOR = BLUE    AND TEXT COLOR = LIGHT YELLOW\n" ) ;
		printf ( "3.  SET BACKGROUND COLOR = YELLOW  AND TEXT COLOR = LIGHT AQUA\n" ) ;
		printf ( "4.  SET BACKGROUND COLOR = RED     AND TEXT COLOR = BLACK\n");
		printf ( "5.  SET BACKGROUND COLOR = GRAY    AND TEXT COLOR = LIGHT RED\n" ) ;
		printf ( "6.  SET BACKGROUND COLOR = PURPLE  AND TEXT COLOR = WHITE \n" ) ;
		printf ( "7.  SET BACKGROUND COLOR = BLACK   AND TEXT COLOR = LIGHT BLUE\n" ) ;
		printf ( "8.  SET BACKGROUND COLOR = BLACK   AND TEXT COLOR = BRIGHT WHITE\n" ) ;
		printf ( "9.  SET BACKGROUND COLOR = PURPLE  AND TEXT COLOR = LIGHT RED\n" ) ;
        printf ( "10. SET BACKGROUND COLOR = AQUA    AND TEXT COLOR = GREEN\n" ) ;
        scanf ( "\n%d", &choice );
		printf("\n");
        printf("\n");

        /*User input  choice of color*/
		if (choice ==1)
        {
            system("COLOR 52");
            printf("Your Desired Color Has Been Changed\n");

            printf("\n\n\n----------Press Any Key To Continue To Next Step Of The Program\n---------");

              goto T1;
             getch();
               break;

        }
        if (choice ==2)
        {
            system("COLOR 1E");
            printf("Your Desired Color Has Been Changed\n");

            printf("----------\n\n\nPress Any Key To Continue To Next Step Of The Program?\n---------");
              goto T1;
               getch();
               break;

        }
             if (choice ==3)
        {
            system("COLOR 6B");
            printf("Your Desired Color Has Been Changed\n");
            printf("\n");
            printf("\n");


            printf("----------Press Any Key To Continue To Next Step Of The Program?\n---------");
           goto T1;
               getch();
               break;

        }
             if (choice ==4)
        {
            system("COLOR 40");
            printf("Your Desired Color Has Been Changed\n");


                   printf("\n\n\n----------Press Any Key To Continue To Next Step Of The Program?\n---------");
                  goto T1;   
               getch();
               break;

        }
             if (choice ==5)
        {
            system("COLOR 84");
            printf("Your Desired Color Has Been Changed\n");
            printf("\n");
            printf("\n");

                   printf("----------Press Any Key To Continue To Next Step Of The Program?\n---------");
                   goto T1;
               getch();
               break;

        }
             if (choice ==6)
        {
            system("COLOR 57");
            printf("Your Desired Color Has Been Changed\n");


                   printf("\n\n\n----------Press Any Key To Continue To Next Step Of The Program?\n---------");
                    goto T1; 
               getch();
               break;

        }
             if (choice ==7)
        {
            system("COLOR 09");
            printf("Your Desired Color Has Been Changed\n");

                   printf("\n\n\n----------Press Any Key To Continue To Next Step Of The Program?\n---------");
                  goto T1;  
               getch();
               break;

        }
             if (choice ==8)
        {
            system("COLOR 0F");
            printf("Your Desired Color Has Been Changed\n");


                   printf("\n\n\n----------Press Any Key To Continue To Next Step Of The Program?\n---------");
                  goto T1;   
               getch();
               break;

        }
             if (choice ==9)
        {
            system("COLOR 5C");
            printf("Your Desired Color Has Been Changed\n");


                   printf("\n\n\n----------Press Any Key To Continue To Next Step Of The Program?\n---------");
                 goto T1;   
               getch();
               break;

        }
             if (choice ==10)
        {
            system("COLOR 32");
            printf("Your Desired Color Has Been Changed\n");

                   printf("\n\n\n----------Press Any Key To Continue To Next Step Of The Program?\n---------");
                   goto T1;
               getch();
               break;

        }
        
        //Try Again
        T1:
        	printf("\n\n\n DO YOU WISH TO TRY AGAIN?");
            printf("\n\n1. YES = TRY AGAIN\n");
            printf("\n\n2. NO = Quite\n");
            scanf("%d",&choice);
            fflush(stdin);
            if (choice == 1)
            {
                goto S1;
            }
            if (choice == 2)
            {
                return 0;
            }
            else
            {
               if (choice != 1,choice != 2)
               {
                   goto I1;
               }
            }
        
        //Invalid choice
        if (choice!=1,choice!=2,choice!=3,choice!=4,choice!=5,choice!=6,choice!=7,choice!=8,choice!=9,choice!=10)
        {
            I1:
            printf("\n\nInvalid Choice!!!\n");
            printf("\n\n\n DO YOU WISH TO TRY AGAIN?");
            printf("\n\n1. YES = TRY AGAIN\n");
            printf("\n\n2. NO = Quite\n");
            scanf("%d",&choice);
            fflush(stdin);
            if (choice == 1)
            {
                goto S1;
            }
            if (choice == 2)
            {
                return 0;
            }
            else
            {
               if (choice != 1,choice != 2)
               {
                   goto I1;
               }
            }
        }
        }
    }
