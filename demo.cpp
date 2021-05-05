//lambda表达式常与排序算法连用
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//int main()
//{
//	vector<int> arr = { 12,65,89,98,21,55,14,54,15,18};
//	sort(arr.begin(), arr.end(), [](int a, int b) {return a > b; });//降序排列
//	for (auto a : arr)
//	{
//		cout << a << " ";
//	}
//	return 0;
//}

//class Solution {
//public:
//    bool containsDuplicate(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        for (int i = 0; i < nums.size() - 1; ++i)
//        {
//            if (nums[i] == nums[i + 1])
//            {
//                return true;
//                break;
//            }
//        }
//        return false;
//    }
//};


//class Solution {
//public:
//    ListNode* oddEvenList(ListNode* head) {
//        if (!head)
//            return head;
//        ListNode* odd = head;
//        ListNode* even = head->next;
//        ListNode* evenHead = head->next;
//        while (even && even->next)
//        {
//            odd->next = even->next;
//            odd = odd->next;
//            even->next = odd->next;
//            even = even->next;
//        }
//        odd->next = evenHead;
//        return head;
//    }
//};

// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         stack<int> s;
//         ListNode* cur = head;
//         while(cur)
//         {
//             s.push(cur->val);
//             cur = cur->next;
//         }
//         while(head)
//         {
//             if(head->val != s.top())
//             return false;
//             head = head->next;
//             s.pop();
//         }
//         return true;
//     }
// };

//class Solution {
//public:
//    ListNode* removeElements(ListNode* head, int val) {
//      //删除头节点
//      while(head && head->val == val)
//      {
//          ListNode *t = head;
//          head = head->next;
//          delete t;
//      }
//      //删除非头节点
//      ListNode *cur = head;
//      while(cur && cur->next)
//      {
//          if(cur->next->val == val)
//          {
//              ListNode *t = cur->next;
//              cur->next = cur->next->next;
//              delete t;
//          }
//          cur = cur->next;
//      }
//      return head;
//    }
//};