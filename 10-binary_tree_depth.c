#include "binary_trees.h"

/**
 * binary_tree_depth - function
 *	- measures the depth of a node in a binary tree
 * @tree: Argument pf type 'const binary_tree_t *'
 *	- pointer to the node to measure the depth
 * Return: 0 if tree is NULL
 *	else, depth of node of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	binary_tree_t *temp;

	if (tree == NULL)
	{
		return (0);
	}

	depth = 0;
	temp = (binary_tree_t *)tree;

	while (temp->parent != NULL)
	{
		depth++;
		temp = temp->parent;
	}

	return (depth);
}
