#pragma once

#include <stdio.h>
#include <stdbool.h>

void PrintArr(int* nums, int n);

// ֱ�Ӳ�������
void InsertSort(int* a, int n);

// ϣ������
void ShellSort(int* a, int n);

//ֱ��ѡ������
void SelectSort(int* a, int n);

//������
void HeapSort(int* a, int n);

//ð������
void BubbleSort(int* a, int n);

// ��������ݹ�ʵ��
// ��������hoare�汾
int PartSort1(int* a, int left, int right);
// ���������ڿӷ�
int PartSort2(int* a, int left, int right);
// ��������ǰ��ָ�뷨
int PartSort3(int* a, int left, int right);
void QuickSort(int* a, int left, int right);

// �������� �ǵݹ�ʵ��
void QuickSortNonR(int* a, int left, int right);