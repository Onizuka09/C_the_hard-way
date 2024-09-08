/*
 * =====================================================================================
 *
 *       Filename:  ex16.c
 *
 *    Description: strcuts & heaps   
 *
 *        Version:  1.0
 *        Created:  09/08/2024 10:21:55 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

typedef struct { 
  char* name ; 
  int age ; 
  int height ; 
  int weight ; 
}Person; 
Person* Create_Person(char* name,int age , int height, int weight){ 
  // allocate data 
  Person* p = (Person*) malloc(sizeof(Person)); 
  // check if p is NULL 
  assert(p!= NULL); 
  // creates a copy of name and returns a ptr to it
  p->name= strdup(name); 
  p->age=age;
  p->height= height; 
  p->weight=weight; 
  return p; 
} 
void Destroy_Person(Person* p){ 
  // check if p is null
  assert(p!=NULL);
  // free name ( dynamic alloc  )
  free(p->name); 
  free(p); 
}
void Person_print(Person* p){ 
  printf("Name: %s\n", p->name); 
  printf("Age: %d\n",p->age); 
  printf("height: %d \n", p->age); 
  printf("weight: %d \n",p->weight);
}
int main(){ 
  Person* p1 = Create_Person("Joe",30 ,180, 90); 
  Person* p2 = Create_Person("Frank",50 ,150, 95);
Person_print(p1); 
Person_print(p2);

Destroy_Person(p1); 
/* Destroy_Person(p2); */


  return 0 ; 
}
