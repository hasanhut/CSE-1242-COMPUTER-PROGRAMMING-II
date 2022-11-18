#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Array_size 50

//struct about students
struct students{
    char studentName[Array_size];
    char studentSurname[Array_size];
    char ID[Array_size];
    struct students * name_next;
    struct students * surname_next;
    struct students * ID_next;
}typedef students;

//roots
students * name_next = NULL;
students * surname_next = NULL;
students * ID_next = NULL;

//inserting Name node
students * insertName(students * root, char name[],char surname[],char id[]){
    //if the link list is empty
    if(root == NULL){
        root = malloc(sizeof(students));
        root->name_next = NULL;
        strcpy((root)->studentSurname, surname);
        strcpy((root)->studentName, name);
        strcpy((root)->ID, id);
        return root;
    }
    // for sort A-Z
    if(strcmp((root)->studentName, name) > 0){
        students * temp = (students*)malloc(sizeof(students));
        strcpy((temp)->studentSurname, surname);
        strcpy((temp)->studentName, name);
        strcpy((temp)->ID, id);
        temp->name_next = root;
        root = temp;
        return root;
    }
    students * it = root; // iteratior
    while(it->name_next != NULL && strcmp(it->name_next->studentName, name) < 0){
        it = it->name_next;
    }
    students * temp = (students*)malloc(sizeof(students));
    temp->name_next = it->name_next;
    it->name_next = temp;
    strcpy((temp)->studentSurname, surname);
    strcpy((temp)->studentName, name);
    strcpy((temp)->ID, id);
    return root;
}
// Insert Surname
students * insertSurname(students * root, char surname[],char name[],char id[]){
    //if the link list is empty
    if(root == NULL){
        root = malloc(sizeof(students));
        root->surname_next = NULL;
        strcpy((root)->studentSurname, surname);
        strcpy((root)->studentName, name);
        strcpy((root)->ID, id);
        return root;
    }
    //sorting
    if(strcmp((root)->studentSurname, surname) > 0){
        students * temp = (students*)malloc(sizeof(students));
        strcpy((temp)->studentSurname, surname);
        strcpy((temp)->studentName, name);
        strcpy((temp)->ID, id);
        temp->surname_next = root;
        root = temp;
        return root;
    }
    students * it = root; // iteratior
    while(it->surname_next != NULL && strcmp(it->surname_next->studentSurname, surname) < 0){
        it = it->surname_next;
    }
    students * temp = (students*)malloc(sizeof(students));
    temp->surname_next = it->surname_next;
    it->surname_next = temp;
    strcpy((temp)->studentSurname, surname);
    strcpy((temp)->studentName, name);
    strcpy((temp)->ID, id);
    return root;
}
//Insert ID
students * insertId(students * root, char name[],char surname[],char id[]){
    //if the link list is empty
    if(root == NULL){
        root = malloc(sizeof(students));
        root->ID_next = NULL;
        strcpy((root)->studentSurname, surname);
        strcpy((root)->studentName, name);
        strcpy((root)->ID, id);
        return root;
    }
    //sorting
    if(strcmp((root)->ID, id) > 0){
        students * temp = (students*)malloc(sizeof(students));
        strcpy((temp)->studentSurname, surname);
        strcpy((temp)->studentName, name);
        strcpy((temp)->ID, id);
        temp->ID_next = root;
        root = temp;
        return root;
    }

    students * it = root; // iteratior
    while(it->ID_next != NULL && strcmp(it->ID_next->ID, id) < 0){
        it = it->ID_next;
    }
    students * temp = (students*)malloc(sizeof(students));
    temp->ID_next = it->ID_next;
    it->ID_next = temp;
    strcpy((temp)->studentSurname, surname);
    strcpy((temp)->studentName, name);
    strcpy((temp)->ID, id);
    return root;
}

// insert Nodes
void insertNode(char name[],char surname[],char id[]){
    name_next = insertName(name_next,name,surname,id);
    surname_next = insertSurname(surname_next,surname,name,id);
    ID_next = insertId(ID_next,name,surname,id);
};

// print method
void printList(students* name, students* surname, students* id){
    int i = 1;
    printf("The list in name-alphabetical order:\n");
    printf("\n");
    while(name!=NULL){
        printf("\t%d. %s %s %s", i, name->studentName,name->studentSurname,name->ID);
        printf("\n");
        name = name->name_next;
        i++;
    }
    i = 1;
    printf("The list in surname-alphabetical order:\n");
    printf("\n");
    while(surname!=NULL){
        printf("\t%d. %s %s %s", i,surname->studentName, surname->studentSurname,surname->ID);
        printf("\n");
        surname = surname->surname_next;
        i++;
    }
    i = 1;
    printf("The list in ID sorted order:\n");
    printf("\n");
    while(id!=NULL){
        printf("\t%d. %s %s %s", i,id->studentName, id->studentSurname,id->ID);
        printf("\n");
        id = id->ID_next;
        i++;
    }

};
// reading file
void readFile(){
    char singleLine[Array_size];
    char studentName[Array_size];
    char studentSurname[Array_size];
    char ID[Array_size];
    FILE * fPointer;
    fPointer = fopen("students.txt", "r");
    //reading the file in pieces
    while ( fgets ( singleLine, sizeof singleLine, fPointer ) != NULL ){
        if(singleLine != "\n"){
            char *name_part; // takes names
            char *surname_part; // takes surnames
            char *id_part; // takes id
            name_part = strtok(singleLine, " ");
            strcpy(studentName, name_part);
            name_part = strtok(NULL, "");
            surname_part = strtok(name_part,"\t");
            strcpy(studentSurname,surname_part);
            surname_part = strtok(NULL,"\t");
            id_part = strtok(surname_part,"");
            strcpy(ID,id_part);
            insertNode(studentName,studentSurname,ID);
        }
    }
    fclose(fPointer);
}
// insert New Student
void insertStudent(){
    char studentName[Array_size];
    char studentSurname[Array_size];
    char ID[Array_size];
    printf("Enter a student name,surname and ID:\n");
    scanf("%s %s %s",&studentName,&studentSurname,&ID);
    insertNode(studentName,studentSurname,ID);
}
//Menu
void menu(){
    int choice = 0;
    int input_id;
    printf("\n");
    printf("Enter your choice:\n");
    printf("1 to insert a student into the list.\n");
    printf("2 to delete a student from list.\n");
    printf("3 to print the students in the list.\n");
    printf("4 to print the students to an output file.\n");
    printf("5 to end.\n");
    scanf("%d", &choice);
    if(choice == 1){
        insertStudent();
        menu();
    }else if(choice == 2){
        printf("Not Working");
        menu();
    }else if(choice == 3){
        printList(name_next,surname_next,ID_next);
        menu();
    }else if(choice == 4){
        printf("Not Working");
        menu();
    }else if(choice == 5){
        return;
    }else{
        return;
    }
}

int main(){
    readFile();
    printList(name_next,surname_next,ID_next);
    menu();

}
