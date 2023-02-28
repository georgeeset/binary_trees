#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_node - creates a binary tree node
 *
 * @parent: pointer to the parent node to create
 * @value: value to put in the new node
 * Return: pointer to new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_ptr = NULL;

	node_ptr = calloc (1, sizeof(binary_tree_t));
	if (!node_ptr)
		return NULL;
	node_ptr->parent = parent;
	node_ptr->n = value;
	return (node_ptr);
}
