#pragma once

// ������ ����
extern int status;

// �Լ��� ����
extern int add(int a, int b);
void print_status();
void print_address();

// ���� ������ ����
static int int_static = 0;

// ���� �Լ��� ����
static int multiply_static(int a, int b)
{
	return a * b;
};