/**
Created by Vitaly Kovganov

Реализация функций для работы с структурой Student
**/

#include "student.h"
#include <stdlib.h>

// Функция для сравнения студентов по весу (используется при сортировке)
int compareByWeight(const void* a, const void* b) {
    const Student* studentA = (const Student*)a;
    const Student* studentB = (const Student*)b;

    if (studentA->weight < studentB->weight)
        return 1;
    if (studentA->weight > studentB->weight)
        return -1;
    return 0;
}