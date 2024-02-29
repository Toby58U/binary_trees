#include "binary_trees.h"

/**
 * binary_tree_preorder - print elements of tree using pre-order traversal
 * @tree: tree to go through
 * @func: function to use
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return; /* Do nothing if tree or func is NULL */
	}

	func(tree->n); /* Call the function for the current node */
	/* Recursively traverse the left and right subtrees in pre-order */
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
