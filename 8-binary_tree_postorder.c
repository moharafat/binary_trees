#include "binary_trees.h"

/**
 * binary_tree_postorder -using post-order traversal going throgh the tree.
 * @tree: A pointer to the root node
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
		func(tree->n);
	}
}
