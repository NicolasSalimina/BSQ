/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-nicolas.salimina
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct coordonates
{
    int max;
    int current_i;
    int current_j;
}coordonates_t;

coordonates_t *view_struct(void);

#endif /* !STRUCT_H_ */