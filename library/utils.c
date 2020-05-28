#include "color.h"
#include "list.h"
#include "vector.h"
#include <assert.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

vector_t *list_get_vector(list_t *list, size_t index) {
    return (vector_t *)list_get(list, index);
}

void print_vec(char label[], vector_t vec) {
    printf("%s: (%+4.0f, %+4.0f)\n", label, vec.x, vec.y);
}

double modulo(double n, double m) {
    double r = fmod(n, m);
    if (r < 0) {
        r += m;
    }
    return r;
}

bool is_close(double d1, double d2) {
    return fabs(d1 - d2) < 1e-7;
}

int imax(int n1, int n2) {
    return n1 > n2 ? n1 : n2;
}

int imin(int n1, int n2) {
    return n1 < n2 ? n1 : n2;
}

double drand_range(double min, double max) {
    assert(max > min);
    return drand48() * (max - min) + min;
}

int irand_range(int min, int max) {
    assert(max >= min);
    return (rand() % (max - min + 1)) + min;
}

rgb_color_t rand_color(double min, double max) {
    return rgb(drand_range(min, max),
               drand_range(min, max),
               drand_range(min, max));
}

void init_random() {
    srand(time(NULL));
    srand48(time(NULL));
}