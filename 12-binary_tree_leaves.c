#include "binary_trees.h"

/**
 * binary_tree_leaves - function
 *	- counts the leaves in a binary tree
 * @tree: agument of type 'const binary_tree_t *'
 *	- pointer to the root node of the tree to count the number of leaves
 * Return: 0 if tree is NULL
 *	else, number of leaves in tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (1);
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
