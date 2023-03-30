#include "binary_trees.h"

/**
 * binary_tree_nodes - function
 *	- counts the nodes with at least 1 child in a binary tree
 * @tree: argument of type 'const binary_tree_t *'
 *	- pointer to the root node of the tree to count the number of nodes
 * Return: 0 if tree is NULL
 *	else, nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
	{
		return (0);
	}

	count = 0;

	if (((tree->left == NULL) && (tree->right != NULL)) ||
				((tree->left != NULL) && (tree->right == NULL)) ||
				(tree->left && tree->right))
	{
		count = 1;
	}

	count += binary_tree_nodes(tree->left) +  binary_tree_nodes(tree->right);

	return (count);
}
