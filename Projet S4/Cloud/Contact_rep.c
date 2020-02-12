
#include <stdlib.h>
#include <stdio.h>
#include "Contact_rep.h"




void create_name_file(char *name, char *rep )
{
	FILE *fichier = NULL;
	fichier = fopen("./name.txt", "w");
	//fputs("%c", name);
	fclose(fichier);
	


}

void create_genre_file(int *genre, char *rep )
{
	FILE *fichier = NULL;
	
	fichier = fopen("./genre.txt", "w");
	//fputs("%i", genre);
	fclose(fichier);
	


}

void create_number_file(int *number, char *rep )
{
	FILE *fichier = NULL;
	fichier = fopen("./number.txt", "w");
	//fputs("%c", *number);
	fclose(fichier);
	


}

void create_email_file(char *email, char *rep )
{
	FILE *fichier = NULL;
	fichier = fopen("./email.txt", "w");
	//fputs("%c", email);
	fclose(fichier);
	


}

void create_contact(struct Contact contact)
{
	//mkdir("./%c",contact.name);
	create_name_file(contact.name,contact.name);
	create_number_file(contact.number,contact.name);
	create_email_file(contact.email,contact.name);
	create_genre_file(contact.genre,contact.name);


}






int main ()
{
	struct Contact contact;

	printf("entrez le nom du contact\n");
	scanf("%c", contact.name);

	printf("entrez le numero de telephone du contact\n");
	scanf("%c", contact.number);

	printf("entrez un email du contact\n");
	scanf("%c", contact.email);

	printf("entrez le genre du contact\n");
	scanf("%i", contact.genre);
	
	create_contact(contact);
	return 1;
}