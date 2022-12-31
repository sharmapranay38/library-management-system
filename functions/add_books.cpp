#include<stdio.h>
#include<conio.h>
void add_books(void);
int main(int argc, char const *argv[])
{
	add_books();
	return 0;
}
void add_books(void){
	int n;
	FILE *filepointer;
	filepointer = fopen("books.txt","a");
	printf("enter amount of books you want to add : ");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		char book[100];
		int id;
		printf("enter book name : ");
		scanf("%s",&book);
		printf("enter book id : ");
		scanf("%d",&id);
		fprintf(filepointer,"%s %d",book,id);
		fprintf(filepointer,"\n");

	}
	fclose(filepointer);
}