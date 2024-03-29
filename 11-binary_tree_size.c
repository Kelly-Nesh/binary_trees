#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: 0 if tree is null else size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 1;

	if (!tree)
		return (0);
	if (tree->left)
		count += binary_tree_size(tree->left);
	if (tree->right)
		count += binary_tree_size(tree->right);
	return (count);
}
