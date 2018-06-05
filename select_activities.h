/**
*    @file activities.h
*    @brief this header file will contain definition of the functions "select_first_activity" and "select_next_activity"
*
*    @author Radu Maria Andreea
*
*     @date 04.06.2018
*
*/


#include"activities.h"
#ifndef SELECT_ACTIVITIES_H_INCLUDED
#define SELECT_ACTIVITIES_H_INCLUDED

void select_first_activity(struct activities *activity_list );

void select_next_activity(struct activities *activity_list, int no_activities);

#endif // SELECT_ACTIVITIES_H_INCLUDED
