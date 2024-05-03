/**
Created by Vitaly Kovganov

Основная логика программмы
**/

#include "student.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

  if(argc < 2){
    printf("Not enough arguments\n");
  }
  // Заполнение массивов студентов данными из командной строки
  int numStudents1 = atoi(argv[1]);
  Student* class1 = malloc(numStudents1 * sizeof(Student));
  
  for(int i = 0; i < numStudents1; i++){
    class1[i].weight = atof(argv[2 + i * 2]);
    class1[i].height = atof(argv[3 + i * 2]);
  }

  int numStudents2 = atoi(argv[2 + numStudents1 * 2]);
  Student* class2 = malloc(numStudents2 * sizeof(Student));
  
  for(int i = 0; i < numStudents2; i++){
    class2[i].weight = atof(argv[3 + numStudents1 * 2 + i * 2]);
    class2[i].height = atof(argv[4 + numStudents1 * 2 + i * 2]);
  }
  // Сортировка массивов
  qsort(class1, numStudents1, sizeof(Student), compareByWeight);
  qsort(class2, numStudents2, sizeof(Student), compareByWeight);
  
  // Вывод результата
  if(numStudents1 < 3 || numStudents2 < 3){
    printf("Not enough students\n");
  }
  else{
    if(class1[2].height > class2[2].height)
    {
      printf("Class 1 is taller\n");
    }
    else if(class1[2].height < class2[2].height)
    {
      printf("Class 2 is taller\n");
    }
    else
      printf("Both classes are the same height\n");
  }

  // Освобождение памяти
  free(class1);
  free(class2);

  return 0;
}
