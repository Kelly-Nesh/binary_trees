#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int height(binary_tree_t *tree);
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 If tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if ((!(tree->left) && tree->right) || (tree->left && !(tree->right)))
		return (0);
	if (height(tree->left) != height(tree->right))
		return (0);
	return (1);
}
/**
 * height - get the height of binary tree
 * @tree: node to get height for
 * Return: height of tree
 */

int height(binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = right = 0;

	left = height(tree->left) + 1;
	right = height(tree->right) + 1;
	if (left > right)
		return (left);
	else
		return (right);
}
