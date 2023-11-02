#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 If tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int c, r, l;

	c = r = l = 0;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	if (tree->left && tree->right)
		c = 1;
	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);

	if (c == 1 && l == 1 && r == 1)
		return (1);
	return (0);
}
