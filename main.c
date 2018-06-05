#include <stdio.h>
#include <stdlib.h>
#include "activities.h"
#include "print.h"
#include "sort.h"
/**
*   The activity problem solved with Greedy algorithm
*   @author Radu Maria Andreea
*   @date 04.06.2018
*
*/


int main(){
    /// This will hold the number of activities
    int no_activites;

    struct activities *activity_list;

    printf("Give the number of activities:");
    scanf("%d", &no_activites);

    activity_list = malloc(no_activites * sizeof(struct activities));
    generate_activities(activity_list, no_activites);
    print_activities(activity_list, no_activites);
    sort_by_end_time(activity_list, no_activites);

    printf("\n===Sorted activities===");
    print_activities(activity_list, no_activites);

   select_first_activity(activity_list);
   select_next_activity(activity_list, no_activites);
    return 0;
}
