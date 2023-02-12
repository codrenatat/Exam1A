//
// Created by renis on 2/11/2023.
//

#ifndef EXAM_1A_ENUMS_H
#define EXAM_1A_ENUMS_H

//ENUMS//
typedef enum cell_state {
    Free,
    Occupied
} Cell_State;

typedef enum state {
    Healthy,
    Sick,
    Recovered
} State;

typedef enum vaccine {
    True,
    False
} Vaccine;

typedef enum mask {
    Yes,
    No
} Mask;
//ENUMS//

typedef struct cell{
    char letter;
    Cell_State cell_state;
    int id;
    int age;
    State state;
    Vaccine vaccine;
    int days;
    Mask mask;
} Cell;

#endif //EXAM_1A_ENUMS_H
