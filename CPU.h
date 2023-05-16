// length of a time quantum
#define QUANTUM 10
#include "task.h"

// run the specified task for the following time slice
void run(Task *task, int slice);

// Warns the user that the task has already been finished
void finish(Task *task);

// Warns the user how much units are left before the task is finished
void remaining(Task *task);