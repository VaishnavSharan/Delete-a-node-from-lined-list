
#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;//copying the node value
        node->next=node->next->next;//deleting the next element

    }
};