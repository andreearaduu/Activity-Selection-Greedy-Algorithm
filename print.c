
#include <stdio.h>
#include "print.h"
/** This function will print the activities with their components, id, start time and finish time.
*   @author Radu Maria Andreea
*   @param activity_list  The structure asociated to the list
*   @param no_activities  The number of activities
*   @date 02.06.2018
*/

void print_activities(struct activities *activity_list, int no_activities) {
    ///The use of this iterator is to browse the activity_list.
    int iterator;

    printf("\n=== Activities ===\n");

    for (iterator = 0; iterator < no_activities; iterator++) {
        printf("Id %d: Start Time: %d End Time: %d \n",activity_list[iterator].id, activity_list[iterator].start_time, activity_list[iterator].end_time);
    }
}
