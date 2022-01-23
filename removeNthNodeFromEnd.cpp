#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *removeNthFromEnd(ListNode *head, int n)
{
	int c = 0;
	ListNode *t;
	for (t = head; t != NULL; t = t->next)
		c++;
	t = head;
	for (int i = 0; i < c - n - 1; i++)
		t = t->next;
	if (t == head && (c == n || c == 1))
	{
		head = head->next;
		delete t;
	}
	else
	{
		ListNode *temp = t->next;
		if (t->next)
			t->next = t->next->next;
		delete temp;
	}
	return head;
}

int main()
{
	int n, x, t, k;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		ListNode *temp;
		cin >> x;
		temp = new ListNode(x);
		ListNode *head = temp;
		for (int i = 1; i < n; i++)
		{
			cin >> x;
			temp->next = new ListNode(x);
			temp = temp->next;
		}
		head = removeNthFromEnd(head, k);
		cout << "[";
		for (ListNode *t = head; t != NULL; t = t->next)
			cout << t->val << " ";
		cout << "]\n";
	}
}