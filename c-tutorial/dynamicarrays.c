#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *elements;
    int size;
    int cap;
} dyn_array;

void init_array(dyn_array *arr);
void increase_array(dyn_array *arr, int num_elements);

int main() {
    dyn_array arr;
    int i;

    /* initialize array */
    init_array(&arr);
    printf("%d\n", arr.size);

    /* expand by 5 more elements */
    increase_array(&arr, 5);

    /* add an element and increase size */
    if (arr.size < arr.cap) {
        arr.elements[arr.size] = 50;    /* add element to array */
        arr.size++;
    }
    else
        printf("Need to expand array.");

    /* display array elements */
    for (i=0; i < arr.cap; i++)
        printf("Element %d: %d\n", i, arr.elements[i]);

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
