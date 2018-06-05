#include<stdio.h>
#include "sort.h"
#include"select_activities.h"
/**  This function select the first activity because it has the smallest end time
*   @author Radu Maria Andreea
*   @param activity_list  The structure asociated to the list
*   @date 02.06.2018
*/


void select_first_activity(struct activities *activity_list ){

	printf("\n======Selected Activities=====\n\n");
	printf("%10s %10s %10s\n", "Activity", "Start time ", "Finish time");
	printf("%10d %10d %10d\n", activity_list[0].id, activity_list[0].start_time, activity_list[0].end_time);

   }

/** This function select the next activity which can be performed by a person
*   @author Radu Maria Andreea
*   @param activity_list  The structure asociated to the list
*   @param no_activities  The number of activities
*   @date 02.06.2018
*/

void select_next_activity(struct activities *activity_list, int no_activities){
   /// This hold the maximum number of activities
    int max_act=1;
  ///  Define two iterators to browse the activity list
	int iterator1 = 0;
	int iterator2;

	for(iterator2 = 1; iterator2<= no_activities; iterator2++) {
	    ///Select the right activity, if start time of an activity is grater than the finish time of the previous one
		if(activity_list[iterator2].start_time >= activity_list[iterator1].end_time) {
			printf("\n%10d %10d %10d\n", activity_list[iterator2].id, activity_list[iterator2].start_time, activity_list[iterator2].end_time);
			iterator1 = iterator2;

			///Add the activity at maximum number of activities
			max_act++;


		}
	}
	printf("\nThe maximum number of activities that can be performed by a person is %d\n", max_act);
}
