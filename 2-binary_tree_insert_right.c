#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as right child
 *@parent: a pointer to the new_node's parent
 * @value: the value to be put in new_nnode
 * Return: pointer to newnode or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (parent->right);
}
