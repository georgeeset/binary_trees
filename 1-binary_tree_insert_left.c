#include "binary_trees.h"

/**
 * binary_tree *binary_tree_insert_left - inserts a node at the left of
 * another node
 *
 * @*parent: pointer to the node to insert the left_child
 * @value: the value to store in the new node
 * Return: NULL on failure or pointer to created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);

	if (parent->left)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
