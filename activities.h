/**
*    @file activities.h
*    @brief this header file will contain definition of the functions which generate the input of the program and the definiton of the structure.
*
*    @author Radu Maria Andreea
*
*     @date 04.06.2018
*
*/



#ifndef ACTIVITIES_H_INCLUDED
#define ACTIVITIES_H_INCLUDED

struct activities{
    int id;
    int start_time;
    int end_time;
};

void generate_activities(struct activities *activity_list, int no_activities);


#endif // ACTIVITIES_H_INCLUDED
