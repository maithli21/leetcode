/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode*start=NULL;
        ListNode*end=NULL;
        for(int i=0;i<a-1;i++){
            temp1=temp1->next;
        }
        start=temp1;
        temp1=list1;
        for(int i=0;i<=b;i++){
            temp1=temp1->next;
        }
        end=temp1;
        start->next=list2;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=end;
        return list1;
    }
};