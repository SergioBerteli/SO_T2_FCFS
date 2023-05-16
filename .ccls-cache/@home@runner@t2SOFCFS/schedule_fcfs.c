#include <stdio.h>
#include <stdlib.h>

#include "CPU.h"
#include "list.h"
#include "schedule_fcfs.h"
#include "schedulers.h"
#include "task.h"

// add a task to the list
void add(char *name, int priority, int burst) {
  Task *temp = malloc(sizeof(Task));
  temp->name = name;
  temp->burst = burst;
  temp->priority = priority;

  int cont = 0;
  struct node *nav;
  nav = (fila);
  while (nav != NULL) {
    cont++;
    nav = nav->next;
  }
  temp->tid = cont;
  insert(&fila, temp);
}

// invoke the scheduler
void schedule() {
  struct node *nav;
  int i = 0;
  while (fila != NULL) {
    nav = fila;
    while (nav->task->tid != i) {
      nav = nav->next;
    }
    while (nav->task->burst > 0) {
      run(nav->task, QUANTUM);
      nav->task->burst -= QUANTUM;
      if (nav->task->burst > 0) {
        remaining(nav->task);
      }
    }
    finish(nav->task);
    delete (&fila, nav->task);
    free(nav->task);
    i++;
  }
}