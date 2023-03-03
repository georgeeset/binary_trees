#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using post ordertraversal
 *
 * @tree: a pointer to the root node of the tree to traversw
 * @func: a pointer to a function to call for each node.
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/*reason to exit*/
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	/*call the function*/
	func(tree->n);
}
