#include<stdio.h>
int main(){FILE *fptr;char name[40], name1[40];fptr = fopen("record.txt", "r+");if(fptr == NULL){printf("File not existing");exit(1);}printf("Enter your name: ");gets(name);fputs(name, fptr);rewind(fptr);fgets(name1, 40, fptr);printf("Name: %s", name1);fclose(fptr);return 0;}
