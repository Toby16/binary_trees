#include "binary_trees.h"

/**
 * binary_tree_balance - function
 *	- measures the balance factor of a binary tree
 * @tree: argument of type 'const binary_tree_t *'
 *	- pointer to the root node of the tree
 *	- to measure the balance factor
 * Return: 0, if  tree is NULL
 *	else, the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
	{
		return (0);
	}

	left = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

	return (left - right);
}
