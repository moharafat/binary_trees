#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as left child
 *@parent: a pointer to the new_node's parent
 * @value: the value to be put in new_nnode
 * Return: pointer to newnode or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

    parent->left = binary_tree_node(parent, value);
    
	return (parent->left);
}
