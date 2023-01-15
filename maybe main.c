#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define clrscr(); system("cls");
typedef struct student_info{
    int st_id;
    char name[15];
    int book_id;
    char date[15];
}info;

void welcome(void);
void menu();
void new_entries(void); // bnana hai
void get(info ptr[],int);
void display_students(info ptr[],int);

void welcome()
{
    printf("%s\n", "      __...--~~~~~-._   _.-~~~~~--...__");
    printf("%s\n", "    //               `V'               \\");
    printf("%s\n", "   //      LIBRARY    |   MANAGEMENT    \\");
    printf("%s\n", "  //__...--~~~~~~-._  |  _.-~~~~~~--...__\\");
    printf("%s\n", " //__.....----~~~~._/ | /_.~~~~----.....__\\");
    printf("%s\n", "====================//|//====================");
    printf("\n\n\n\n\t\t %s", "[PRESS 1 TO CONTINUE]");
}

void menu(void)
{
    int sv;

    printf("1.New issue\n2.Return book\n3.Add book\n");
}

void get(info ptr[], int n){
    
    for(int i = 0; i < n; i++){
        
        printf("Enter name of student no. %d: ", (i+1));
        scanf("%s", &ptr[i].name);
        printf("Enter id: ");
        scanf("%d", &ptr[i].st_id);
        printf("Enter book id: ");
        scanf("%d", &ptr[i].book_id);
        printf("Enter date of issue: ");
        scanf("%s", &ptr[i].date);
        printf("Entry Added successfully!\n\n");
    }
}



void display(info ptr[], int n){
    printf("***ENTRIES***\n\n");
    for(int i = 0; i < n; i++){
        
        printf("%s's Details\n", ptr[i].name);
        printf("Id = %d\n", ptr[i].st_id);
        printf("book id = %d\n", ptr[i].book_id);
        printf("date = ");
        puts(ptr[i].date);
        printf("\n");
    }
}












main()
{
    int choice;
    printf("enter choice");
    scanf("%d", &choice);

    if (choice == 1)
    {
        clrscr();
        choice = 0;
        welcome();
        printf("\n");
        scanf("%d", &choice);
        if (choice)
        {
            clrscr();
            menu();
            choice = 0;
            printf("\nenter choice : ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
            clrscr();

                printf(" \t\t NEW ISSUE PAGE\n");
                break;
            case 2:
                clrscr();

                printf("\t\t RETURN BOOK TAB\n");
                break;
            case 3:
                clrscr();

                printf("\t\t ADD BOOK TAB\n");
                break;
            default:
            clrscr();
                printf("invalid input");
            }
        }
    }
    else
        printf("acha");
}
