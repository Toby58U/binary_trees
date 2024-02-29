#include "binary_trees.h"

/**
 * binary_tree_node - create the binary tree node.
 * @parent: pointer to the node parent.
 * @value: pointer to the value of the node.
 *
 * Return: on failure - NULL, else - pointer to new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL); /* Return NULL on failure to allocate memory. */
	}
	(*new_node).n = value;
	(*new_node).parent = parent;
	(*new_node).left = NULL;
	(*new_node).right = NULL;

	return (new_node);
}
