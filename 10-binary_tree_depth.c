#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: depth of node
 * or 0 If tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree != NULL)
	{
		depth = binary_tree_depth(tree->parent);
		if (tree->parent != NULL)
			depth++;
	}
	return (depth);
}
