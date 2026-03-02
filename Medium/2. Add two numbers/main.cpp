#include <iostream>
#include <string>

 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newList = new ListNode{};
        ListNode* temp = newList;

        int transfer{ 0 };
        while (l1 != nullptr || l2 != nullptr || transfer != 0) {
            int val1 = 0; int val2 = 0;
            if (l1 != nullptr)  val1 = l1->val;
            if (l2 != nullptr) val2 = l2->val;
            int sm = val1 + val2 + transfer;
            transfer = sm / 10;
            newList->next = new ListNode{ sm % 10 };
            newList = newList->next;

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        ListNode* returned = temp->next;
        delete temp;
        return returned;
    }
};

int main(){
 
    
}