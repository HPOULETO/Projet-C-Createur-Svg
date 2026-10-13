#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int main (void){
    char menu;
    char shape;

    printf("1 - Create a new shape\n");
    printf("2 - Modify an existing shape\n");
    printf("3 - Delete a shape\n");
    printf("4 - Display all shapes\n");
    printf("5 - Exit\n");
    scanf(" %c", &menu);

    switch (menu){
    case '1': printf("Which shape do you want to create?\n"); 
              printf("1 - Circle\n");
              printf("2 - Square\n");
              printf("3 - Line\n");
              printf("4 - Custom shapes (Polygons, Paths)\n");
              printf("5 - Group\n");
              scanf(" %c", &shape);
        break;
    case '2':
        break;
    case '3':
        break;
    case '4':
        break;
    case '5':
        exit(0);
    default:
        printf("\n");
        break;
    }
}