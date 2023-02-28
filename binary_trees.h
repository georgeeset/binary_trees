#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include "structs.h"
#include <stdlib.h>

void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

#endif
