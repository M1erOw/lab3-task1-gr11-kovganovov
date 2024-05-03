/**
Created by Vitaly Kovganov
**/

#ifndef STUDENT_H
#define STUDENT_H

// Описание структуры для представления студента
typedef struct {
    float weight;
    float height;
}Student;

// Компаратор для функции сортировки
int compareByWeight(const void* a, const void* b);

#endif