#include "binary_trees.h"

/**
 * binary_tree_height - function
 *	- measures the height of a binary tree
 * @tree: argument of type 'const binary_tree_t *'
 *	- pointer to the root node of the tree to measure the height
 * Return: 0 if 'tree' is NULL
 *	else, the height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
	{
		return (0);
	}

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h > right_h)
	{
		return (left_h + 1);
	}
	else
	{
		return (right_h + 1);
	}
}
