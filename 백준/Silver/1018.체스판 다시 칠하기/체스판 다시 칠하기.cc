#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
#include <stack>
#include <cstring>
#include <cmath>

using namespace std;

int num, num2;
char arr[51][51];
char change[51][51];
vector<int> min_;
int x = 1, y = 1;

void check() {
while (1) {
int cnt = 0;
for (int i = x; i <= x + 7; i++) {
for (int j = y; j <= y + 7; j++) {
if (arr[i][j] != change[i][j]) {
cnt++;
}
}
}
min_.push_back(cnt);
if (x == num - 7 && y == num2 - 7) {
break;
}
else if (y == num2 - 7) {
y = 1;
x++;
}
else y++;
}
x = 1, y = 1;
}
void change_chess(char a) {
for (int i = 1; i <= num; i++) {
for (int j = 1; j <= num2; j++) {
if (j % 2 == 1 && i % 2 == 1) {
if (change[i][j] != 'W') {
change[i][j] = 'W';
}
}
else if (j % 2 == 1 && i % 2 == 0) {
if (change[i][j] != 'B') {
change[i][j] = 'B';
}
}
else if (j % 2 == 0 && i % 2 == 1) {
if (change[i][j] != 'B') {
change[i][j] = 'B';
}
}
else if (j % 2 == 0 && i % 2 == 0) {
if (change[i][j] != 'W') {
change[i][j] = 'W';
}
}
}
}
check();
for (int i = 1; i <= num; i++) {
for (int j = 1; j <= num2; j++) {
if (j % 2 == 1 && i % 2 == 1) {
if (change[i][j] != 'B') {
change[i][j] = 'B';
}
}
else if (j % 2 == 1 && i % 2 == 0) {
if (change[i][j] != 'W') {
change[i][j] = 'W';
}
}
else if (j % 2 == 0 && i % 2 == 1) {
if (change[i][j] != 'W') {
change[i][j] = 'W';
}
}
else if (j % 2 == 0 && i % 2 == 0) {
if (change[i][j] != 'B') {
change[i][j] = 'B';
}
}
}
}
check();
}


int main() {

cin.tie(0);
cout.tie(0);
cin >> num >> num2;
for (int i = 1; i <= num; i++) {
for (int j = 1; j <= num2; j++) {
cin >> arr[i][j];
change[i][j] = arr[i][j];
}
}
change_chess(arr[1][1]);
sort(min_.begin(), min_.end());
cout << min_[0];
return 0;
}