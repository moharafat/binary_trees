#include "binary_trees.h"
/**
 * binary_tree_node - func. that creates a binary tree node
 *@parent: a pointer to the new_node's parent
 * @value: the value to be put in new_nnode
 * Return: pointer to newnode or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;

	return (new_node);
}
