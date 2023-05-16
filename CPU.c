/**
 * "Virtual" CPU that also maintains track of system time.
 */

#include <stdio.h>

#include "task.h"

// run this task for the specified time slice
void run(Task *task, int slice) {
    printf("Running task = [%s] [%d] [%d] for %d units.\n",task->name, task->priority, task->burst, slice);
}

// Warns the user that the task has already been finished
void finish(Task *task){
    printf("Task [%s] completed.\n", task->name);
}

// Warns the user how much units are left before the task is finished
void remaining(Task *task){
    printf("Task [%s] suspended. Remaining burst time: %d units.\n", task->name, task->burst);
}