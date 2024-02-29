#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: A pointer to the node to find the uncle.
 *
 * Return: A pointer to the uncle node, or NULL if node is NULL,
 * has no parent, or the parent has no sibling.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);  /* Return NULL if node is NULL, has no parent, or the parent has no sibling */

	/* Determine if the parent is the left or right child of its parent */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);

	return (NULL);  /* Return NULL if the node has no uncle */
}
