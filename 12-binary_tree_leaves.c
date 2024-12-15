#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_trees_leaves - It counts the number of leaves in a binary tree
 * @tree: A pointer to the root node of the tree
 * return: Returns the number of leaves in the tree, 0 if the tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
