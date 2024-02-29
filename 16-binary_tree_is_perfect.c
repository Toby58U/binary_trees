#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, nodes;

	if (tree == NULL)
		return (0);  /* Return 0 if tree is NULL */

	height = binary_tree_height(tree);
	nodes = binary_tree_nodes(tree);

	/* Check if the tree is perfect based on the number of nodes and height */
	return ((nodes == ((size_t)1 << height) - 1));
}

/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);  /* Return 0 if tree is NULL */

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_nodes - Counts the nodes in a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The number of nodes in the tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);  /* Return 0 if tree is NULL */

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
