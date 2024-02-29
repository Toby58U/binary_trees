#include "binary_trees.h"

/**
 * binary_tree_insert_left - adds a node to the left of parent.
 * If node exists, it move down one level and add the new node first.
 * @parent: pointer to the parent node.
 * @value: value of specified node.
 * Return: NULL when it fails, else - new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL); /* Cannot insert left child if parent is NULL. */
	}

	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return (NULL); /* Return NULL on failure to allocate memory. */
	}
	
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}

	parent->left = new_node;
	return (new_node);
}
