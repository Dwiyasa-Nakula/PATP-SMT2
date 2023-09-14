#include <stdio.h>
#include <string.h>

typedef struct student{
 int id;
 char name[30];
 float percentage;
}student;

void input(student record[]){
 //record[0].id = 1;
 //strcpy(record[0].name, "Raju");
 //record[0].percentage =86.5;

 //record[1].id = 2;
 //strcpy(record[1].name, "Surendren");
 //record[1].percentage =90.5;

 //record[2].id = 3;
 //strcpy(record[2].name, "Thiyagu");
 //record[2].percentage =81.5;

for(int i=0; i < 1; i++){
 scanf("%d %s %f", &record[i].id, record[i].name, &record[i].percentage);
 }
}

void output(student record[]){
 for(int i=0; i < 1; i++){
 printf("Record of Students: %d\n", i+1);
 printf("Id: %d\n", record[i].id);
 printf("Name: %s\n", record[i].name);
 printf("Percentage: %.2f\n", record[i].percentage);
 printf("\n");
 }
}

int main(){
 student record[3];
 input(record);
 output(record);
 return 0;
}
