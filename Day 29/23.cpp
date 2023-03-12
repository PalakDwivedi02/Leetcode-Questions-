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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        set<pair<int,int>>s;
        for(unsigned int i=0;i<lists.size();i++)
            if(lists[i]!=NULL)
                s.insert({lists[i]->val,i});
        if(s.empty()) return NULL;
        ListNode *nw = new (ListNode);
        ListNode *head = nw;
        while(true)
        {
            pair<int,int> pi = *(s.begin());
            s.erase(s.begin());
            nw->val = pi.first;
            int index = pi.second;
            if(lists[index]->next!=NULL)
            {
                lists[index] = lists[index]->next;
                s.insert({lists[index]->val,pi.second});
            }
            if(s.empty()) break;
            nw->next = new (ListNode);
            nw = nw->next;
        }
        return head;
    }
};