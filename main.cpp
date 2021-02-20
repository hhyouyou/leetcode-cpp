#include <iostream>
#include "exam.h"

/***
 * -------------------------------------------------------------------------------------------------------------------
 * 题目
 * -------------------------------------------------------------------------------------------------------------------
 * 无重复字符串的排列组合。编写一种方法，计算某字符串的所有排列组合，字符串每个字符均不相同。并将结果按字符串从小到大排序
 *
 * 示例1:
 * - 输入：S = "qwe"
 * - 输出：["eqw", "ewq", "qew", "qwe", "weq", "wqe"]
 *
 * 示例2:
 * - 输入：S = "ab"
 * - 输出：["ab", "ba"]
 *
 * 要求：
 * 1. 仅修改exam.h文件，通过所有单元测试。
 * 2. 输出结果按照字典顺序排序
 * 3. exam.h以外的文件不得修改，修改会被覆盖。
 */


int main() {
//    auto tt = Exam::output2("qwe");
//    for (auto &i : tt) {
//        cout << i << endl;
//    }


//    TreeNode *root = new TreeNode(100);
//    root->left = new TreeNode(110);
//    root->right = new TreeNode(101);
//    root->left->left = new TreeNode(110);
//    root->left->left->right = new TreeNode(110);
//    auto result = Exam::isBalanced(root);
//
//    cout<< " isBalanced " << result << endl;

//    vector<int> arr = {1, 0, 2, 3};
//    Exam::duplicateZeros(arr);
//
//    for (auto &i : arr) {
//        cout << i << endl;
//    }

//    auto *head = new ListNode(1);
//    head->next = new ListNode(2);
//    head->next->next = new ListNode(3);
//    head->next->next->next = new ListNode(4);
//    head->next->next->next->next = new ListNode(5);
//    head->next->next->next->next->next = new ListNode(6);
//
//    auto result = Exam::getKthFromEnd(head, 6);
//
//    cout << result->val << endl;

//    int molecule = -10;
//    int denominator = 2;
//    Exam::reduce(molecule, denominator);
//    cout << molecule << "  " << denominator;

    vector<int> arr = {3, 2, 0, 2};
    auto result = Exam::fraction(arr);
    for (auto &i : result) {
        cout << i << endl;
    }
    return 0;
}