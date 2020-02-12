#ifndef CONTACT_REP_H
#define CONTACT_REP_H



typedef struct Contact Contact;
struct Contact
{
    char *name;
    char *number;
    char *email;
    int *genre;
};

void create_contact(struct Contact contact);

void create_name_file(char *name,char *rep);

void create_genre_file(int *sexe,char *rep);

void create_number_file(int *number,char *rep);

void create_email_file(char *email,char *rep);




#endif