#include "binary_trees.h"

/**
 * binary_tree_inorder - print elements of tree using in-order traversal
 * @tree: pointer to the tree to go through
 * @func: pointer to the function to use
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return; /* Do nothing if tree or func is NULL */
	}

	/* Recursively traverse the left subtree in in-order */
	binary_tree_inorder(tree->left, func);
	/* Call the function for the current node */
	func(tree->n);
	/* Recursively traverse the right subtree in in-order */
	binary_tree_inorder(tree->right, func);
}
