#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node at the right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node or NULL if failed or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return NULL;

	new_node = binary_tree_node(parent, value);
	if (parent->right)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
