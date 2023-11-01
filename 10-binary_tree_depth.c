#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the height of a binary tree
 * @tree - pointer to the node to measure the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		count = binary_tree_depth(tree->parent) + 1;
	return (count);
}
