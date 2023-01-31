#include<time.h>

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

    printf("1.New issue\n2.Return book\n3.Add book\n4.Display Students\n5.Add new students\n");
}


// void get(struct ptr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {

//         printf("Enter name of student no. %d: ", (i + 1));
//         scanf("%s", &ptr[i].name);
//         printf("Enter id: ");
//         scanf("%d", &ptr[i].st_id);
//         printf("Enter book id: ");
//         scanf("%d", &ptr[i].book_id);
//         printf("Enter date of issue: ");
//         scanf("%s", &ptr[i].date);
//         printf("Entry Added successfully!\n\n");
//     }
// }
// void display(struct ptr[], int n)
// {
//     printf("***ENTRIES***\n\n");
//     for (int i = 0; i < n; i++)
//     {

//         printf("%s's Details\n", ptr[i].name);
//         printf("Id = %d\n", ptr[i].st_id);
//         printf("book id = %d\n", ptr[i].book_id);
//         printf("date = ");
//         puts(ptr[i].date);
//         printf("\n");
//     }
// }


void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
 
    // Storing start time
    clock_t start_time = clock();
 
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
