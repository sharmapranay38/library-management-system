#include<stdio.h>
#include<conio.h>
#include"functions.h"
#include<time.h>
#include<stdlib.h>
#define clrscr() \
    ;            \
    system("cls");
int correct_password = 9969;
struct students{
    char name[100];
    char class[10];
    int student_id;

};
struct books{
    int book_id;
    char name[100];
};
int main(){
    struct students st;
    struct books bk;
    int n,i,try=2;
    int pass;

    while(try>0){
        printf("enter password : ");
        scanf("%d",&pass);
        if(pass==correct_password){
        // ...
        printf("correct password");
        // if correct then show welcome screen
        clrscr();
        printf("loading....please wait");
        delay(4);
        clrscr();   
        welcome(); //kitab
        scanf("%d",&pass);
        if(pass==1){
            //...
            clrscr();
            menu();

            int sv;
            printf("please enter your choice");
            scanf("%d",&sv);
            switch (sv)
            {
            case 1:
            
            break;
            default:
                break;
            }



        }
        else break;

































        break;
        }
        else {
            try--;
            printf("\nwrong password %d tries left\n",try);
        
        }

    }

    printf("\n\nthank you for using our library management software\n\n");
















    return 0;
}
