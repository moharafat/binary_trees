#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate binary tree right
 *
 * Return: pointer to the root of the function
 *
 * @tree: a pointer to the root node of the tree
 *
*/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	new_root = tree->left;
	tree->left = new_root->right;
	if (new_root->right != NULL)
		new_root->right->parent = tree;
	new_root->parent = tree->parent;
	tree->parent = new_root;
	new_root->right = tree;

	return (new_root);
}
