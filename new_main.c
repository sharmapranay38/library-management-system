#include <stdio.h>
#include <conio.h>
#include "functions.h"
#include <time.h>
#include <stdlib.h>
#define clrscr() \
    ;            \
    system("cls");
int correct_password = 9969;
// struct students{
//     char name[100];
//     char class[10];
//     int student_id;

// };
struct books
{
    int book_id;
    char name[100];
};
int main()
{
    int num;
    char name[100], class[10];
    int student_id;
    // struct students st;
    struct books bk;
    int n, i, try = 2;
    int pass;
    FILE *filepointer;
    filepointer = fopen("studen.txt", "a+");    
    FILE *filepointer_book;
    filepointer = fopen("books.txt", "a+");
    while (try > 0)
    {
        printf("enter password : ");
        scanf("%d", &pass);
        if (pass == correct_password)
        {
            // ...
            printf("correct password");
            // if correct then show welcome screen
            clrscr();
            printf("loading....please wait");
            delay(4);
            clrscr();
            welcome(); // kitab
            scanf("%d", &pass);
            if (pass == 1)
            {
                //...
                clrscr();
                menu();

                int sv;
                printf("\n\n\t\tplease enter your choice : ");
                scanf("%d", &sv);
                switch (sv)
                {
                case 1:
                    // add student

                    printf("enter how many students to add : ");
                    scanf("%d", &num);
                    for (int i = 0; i < num; i++)
                    {
                        // add name of the student
                        printf("enter name of %d student : ", i + 1);
                        scanf("%[^\n]s", &name);
                        fprintf(filepointer, "%s ", name);
                        // add class of student
                        printf("enter class of %d student : ", i + 1);
                        scanf("%s", &class);
                        fprintf(filepointer, "%s ", class);
                        // add student_id
                        printf("enter student id of %d student : ", i + 1);
                        scanf("%d", &student_id);
                        fprintf(filepointer, "%d", student_id);
                        // add newline
                        fprintf(filepointer, "\n");
                    }

                    break;

                case 2:

                    printf("enter how many books to add : ");
                    scanf("%d", &num);
                    for (int i = 0; i < num; i++)
                    {
                        // add name of the book
                        printf("enter name of %d book : ", i + 1);
                        gets(name);
                        fflush(stdin);
                        fprintf(filepointer_book, "%s ", name);
                        // // add class of student
                        // printf("enter class of %d student : ", i + 1);
                        // scanf("%s", &class);
                        // fprintf(filepointer_book, "%s ", class);

                        // add book_id
                        printf("enter student id of %d book : ", i + 1);
                        scanf("%d", &student_id);
                        fprintf(filepointer_book, "%d", student_id);
                        // add newline
                        fprintf(filepointer_book, "\n");
                    }

                    break;

                case 3:
                    break;

                case 4:
                    break;

                default:
                    printf("please enter valid input");
                }
            }
            else
                break;

            break;
        }
        else
        {
            try--;
            printf("\nwrong password %d tries left\n", try);
        }
    }

    printf("\n\nthank you for using our library management software\n\n");

    return 0;
}