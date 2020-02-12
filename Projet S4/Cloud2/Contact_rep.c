
#include <stdlib.h>
#include <stdio.h>
#include <sys/dir.h>
#include <string.h>
//#include "Contact_rep.h"






void create_name_file(char name)//int *genre, char *rep )
{
	FILE *fichier = NULL;
	char *buff;
	asprintf(&buff,"./%s/name.txt",name);
	fichier = fopen(buff, "w");
	fputs(name,fichier);
	fclose(fichier);
	


}

void create_genre_file(char genre, char name)//int *genre, char *rep )
{
	FILE *fichier = NULL;
	char *buff;
	asprintf(&buff,"./%s/genre.txt",name);
	fichier = fopen(buff, "w");
	fputs(genre,fichier);
	fclose(fichier);
	


}

void create_number_file(char number, char name)//int *number, char *rep )
{
	FILE *fichier = NULL;
	char *buff;
	asprintf(&buff,"./%s/number.txt",name);
	fichier = fopen(buff, "w");
	fputs(number,fichier);
	fclose(fichier);
	


}

void create_email_file(char email, char name)//char *email, char *rep )
{
	FILE *fichier = NULL;
	char *buff;
	asprintf(&buff,"./%s/email.txt",name);
	fichier = fopen(buff, "w");
	fputs(email, fichier);
	fclose(fichier);



}

void create_contact(char name,char email,char genre,char number)
{
	
	mkdir(name,0777);
	
	create_name_file(name);
    create_number_file(number, name);
	create_email_file(email, name);
	create_genre_file(genre, name);


}






int main ()
{
	char *name;
	char *email;
	char *number;
	char *genre;

	printf("give the new contact name please\n");
	scanf("%s",name);

	printf("give the new contact email please\n");
	scanf("%s",email);

	printf("give the new contact number please\n");
	scanf("%s",number);

	printf("give the new contact genre please\n");
	scanf("%s",genre);

	
	
	create_contact(name,email,genre,number);
	const char * command1 = "git add .";
	const char * command2 = "git commit -m New_contact";
	const char * command3 = "git push git@github.com:Manuneedgithub/cloud_projetS4.git";
	system( command1);
	system( command2);
	system( command3);

	return 1;
}