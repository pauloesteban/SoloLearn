#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *elements;
    int size;
    int cap;
} dyn_array;

void init_array(dyn_array *arr);
void increase_array(dyn_array *arr, int num_elements);
void add_element(dyn_array *arr, int element);
void display_array(dyn_array arr);

int main() {
    dyn_array arr;

    /* initialize array */
    init_array(&arr);

    /* expand by 5 more elements */
    increase_array(&arr, 5);

    /* add an element and increase size */
    add_element(&arr, 50);

    /* display array elements */
    display_array(arr);

    return 0;
}

void init_array(dyn_array *arr) {
    arr->size = 0;
    arr->elements = calloc(1, sizeof(arr->elements));
    arr->cap = 1;    /* room for 1 element */
}

void increase_array(dyn_array *arr, int num_elements) {
    arr->elements = realloc(arr->elements, (num_elements + arr->cap)*sizeof(arr->elements));
    if (arr->elements != NULL)
        arr->cap += num_elements;
}

void add_element(dyn_array *arr, int element) {
    int i;

    if (arr->size < arr->cap) {
        arr->elements[arr->size] = element; /* add element to array */
    }
    else
        printf("Need to expand array.");
}

void display_array(dyn_array arr) {
    int i;

    for (i=0; i < arr.cap; i++)
        printf("Element %d: %d\n", i, arr.elements[i]);
}
