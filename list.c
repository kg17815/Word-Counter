#include "list.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

struct node {
    struct node *prev;
    item x;
    struct node *next;
    bool sentinel;
};

typedef struct node node;

struct list {
    node *start;
    node *end;
    node *position;
    int length;
};

//------------------------------------------------------------------------------

//start is set at the first real item
//end is set at senEnd
list *newList() {
    list *l = malloc(sizeof(list));
    node *senStart = malloc(sizeof(node));
    node *senEnd = malloc(sizeof(node));
    *senStart = (node) {NULL,0,senEnd,true};
    *senEnd = (node) {senStart,0,NULL,true};
    l->start = senStart->next;
    l->end = senEnd;
    l->length = 0;
    return l;
}

void start(list *l) {
    l->position = l->start;
}

void end(list *l) {
    l->position = l->end;
}

bool atStart(list *l) {
    return (l->position == l->start);
}

bool atEnd(list *l) {
    return (l->position == l->end);
}

void forward(list *l) {

}

void backward(list *l) {

}

void insertBefore(list *l, item x) {

}

void insertAfter(list *l, item x) {

}

item getBefore(list *l) {
    return 0;
}

item getAfter(list *l) {
    return 0;
}

void setBefore(list *l, item x) {

}

void setAfter(list *l, item x) {

}

void deleteBefore(list *l) {

}

void deleteAfter(list *l) {

}

//------------------------------------------------------------------------------

void testNew() {
    list *l = newList();
    assert(l->start->prev == NULL);
    assert(l->end->next == NULL);
    assert(l->start->next != NULL);
    assert(l->end->prev != NULL);
}

void testStart() {
    list *l = newList();
    start(l);
    assert(l->position == l->start);
}

void testEnd() {
    list *l = newList();
    end(l);
    assert(l->position == l->end);
}

void testAtStart {
    list *l = newList();
    start(l);
    assert(atStart(l) == true);
}

void testAtEnd {
    list *l = newList();
    end(l);
    assert(atEnd(l) == true);
}

int listMain() {
    testNew;
    testStart;
    testEnd;
    printf("All tests passed\n");
    return 0;
}
