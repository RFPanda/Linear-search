#include "pch.h"
#include "stdio.h"
#include <iostream>

using namespace std;
int i, n;
int Search(int A[], int key){
  
  for (i = 0; i < n; i++)
    if (A[i] == key) return i;
  return 1;}
int main(){
  setlocale(LC_ALL, "Rus");
  int key, A[500];
  cout << "Введите размер массива до 500: "; cin >> n;
  if (n > 500)
  { cout << "Error!"; return 0; }
  cout << "Какой элемент искать: "; cin >> key;
  if (key > n) { 
  cout << "Массив меньше чем введённое число";
  return 0;    }
  cout << "Сам массив: ";
  for (i = 0; i < n; i++){  
    A[i] = i+1; cout << A[i]<< ";" ;}
  cout << "\nИндекс: " << Search(A, key)<<endl << endl << endl << endl << endl << endl;
  return 0;}
