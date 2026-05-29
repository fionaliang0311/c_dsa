#include "tbt.h"
#include <assert.h>
#include <stdio.h>

void test_insert_success()
{
    TBTnode* root = NULL;

    assert(insert_node_tbt(&root, 10) == 1);
    assert(insert_node_tbt(&root, 5) == 1);
    assert(insert_node_tbt(&root, 15) == 1);
    assert(insert_node_tbt(&root, 19) == 1);

    destroy_tbt(root);

    printf("TBT insert success test passed\n");
}

void test_duplicate_insert()
{
    TBTnode* root = NULL;

    assert(insert_node_tbt(&root, 10) == 1);
    assert(insert_node_tbt(&root, 10) == -1);

    destroy_tbt(root);

    printf("TBT duplicate insert test passed\n");
}

void test_invalid_input()
{
    assert(insert_node_tbt(NULL, 10) == -3);

    printf("TBT invalid input test passed\n");
}

void test_leftmost()
{
    TBTnode* root = NULL;

    insert_node_tbt(&root, 10);
    insert_node_tbt(&root, 5);
    insert_node_tbt(&root, 15);
    insert_node_tbt(&root, 3);
    insert_node_tbt(&root, 7);

    TBTnode* min_node = leftmost(root);

    assert(min_node != NULL);
    assert(min_node->data == 3);

    destroy_tbt(root);

    printf("TBT leftmost node test passed\n");
}

void test_empty_tree()
{
    TBTnode* root = NULL;

    assert(leftmost(root) == NULL);

    destroy_tbt(root);

    printf("TBT empty tree test passed\n");
}

int main()
{
    test_insert_success();
    test_duplicate_insert();
    test_invalid_input();
    test_leftmost();
    test_empty_tree();

    printf("All TBT tests passed\n");
    return 0;
}