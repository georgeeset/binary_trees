#include "binary_trees.h"
/**
 * binary_tree_inorder - traverse tree inorder
 *
 * @tree: the tree
 * @func: a function call to make
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* exit function condition */
	if (!func || !tree)
		return;
	/* go left */
	binary_tree_inorder(tree->left, func);
	/* run function */
	func(tree->n);
	/* go right */
	binary_tree_inorder(tree->right, func);
}
