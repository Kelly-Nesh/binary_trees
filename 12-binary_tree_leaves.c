#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: NULL if not leaf else count
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);
	if (tree->left)
		count += binary_tree_leaves(tree->left);
	if (tree->right)
		count += binary_tree_leaves(tree->right);
	return (count);
}
