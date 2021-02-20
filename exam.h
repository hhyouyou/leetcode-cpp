#ifndef EXAM_H
#define EXAM_H

#include <set>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr) {}
};

class Exam {
public:
    static vector<string> output(const string &input) {
        vector<string> res;
        res.push_back(input);
        if (input.length() < 2) {
            return res;
        }
        int pos = 0;
        while (pos < input.length() - 1) {
            int size = res.size();
            for (int i = 0; i < size; i++) {
                for (int j = pos + 1; j < res[i].length(); j++) {
                    string v = res[i];
                    char t = v[j];
                    v[j] = v[pos];
                    v[pos] = t;
                    res.push_back(v);
                }
            }
            pos++;
        }
        sort(res.begin(), res.end());
        return res;
    }

    static vector<string> output2(const string &input) {
        vector<string> resultVector;
        resultVector.push_back(input);
        if (input.length() < 2) {
            return resultVector;
        }

        for (int i = 0; i < input.length() - 1; i++) {
            int size = resultVector.size();
            for (int j = 0; j < size; j++) {
                string newString = resultVector[j];
                for (int k = i + 1; k < input.length(); k++) {
                    char temp = newString[i];
                    newString[i] = newString[k];
                    newString[k] = temp;
                    resultVector.push_back(newString);
                }
            }
        }
        sort(resultVector.begin(), resultVector.end());
        return resultVector;
    }


    static bool isBalanced(TreeNode *root) {

        if (!root) {
            return true;
        }

        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);

        if (leftHeight - rightHeight > 1 || rightHeight - leftHeight > 1) {
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);

    }

    static int getHeight(TreeNode *root) {
        if (!root) {
            return 0;
        }

        int leftHeight = getHeight(root->left) + 1;
        int rightHeight = getHeight(root->right) + 1;

        return leftHeight > rightHeight ? leftHeight : rightHeight;
    }

    static void duplicateZeros(vector<int> &arr) {
        vector<int> newArr;

        for (int i = 0, j = 0; i < arr.size();) {
            int num = arr[j++];
            newArr.push_back(num);
            i++;
            if (num == 0) {
                newArr.push_back(num);
                i++;
            }
        }

        for (int i = 0; i < newArr.size(); i++) {
            arr[i] = newArr[i];
        }
    }

    static ListNode *getKthFromEnd(ListNode *head, int k) {
        int length = getListNodeLength(head);

        for (int i = 0; i < length - k; i++) {
            head = head->next;
        }

        return head;
    }

    static int getListNodeLength(ListNode *head) {
        if (!head) {
            return 0;
        }
        return getListNodeLength(head->next) + 1;
    }


    static vector<int> fraction(vector<int> &cont) {
        int molecule = 1;
        int denominator = 0;
        for (int i = cont.size() - 1; i >= 0; i--) {
            int endFr = cont[i];

            swap(molecule, denominator);
            molecule += endFr * denominator;
        }
        reduce(molecule, denominator);
        vector<int> result;
        result.push_back(molecule);
        result.push_back(denominator);
        return result;
    }

    static void reduce(int &molecule, int &denominator) {
        int left = molecule;
        int right = denominator;
        int temp;

        while (right != 0) {
            temp = left % right;
            left = right;
            right = temp;
        }

        molecule = molecule / left;
        denominator = denominator / left;
    }

    static void swap(int &molecule, int &denominator) {
        int temp = molecule;
        molecule = denominator;
        denominator = temp;
    }

};

#endif // EXAM_H
