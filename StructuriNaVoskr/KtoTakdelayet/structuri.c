#include<stdio.h>
//��������(������, ��������, �����) � 3 ����� �����(������, �������, ������).
struct dimension 
{
	int height;
	int depth;
	int width;
}; 
/*����� � �������� �������� � ��� 3 ������(�����(�), ��������, ������������), 3 ����� �����
	(��� �������, ���������� �������, �������).*/
struct book
{
	char autor[15];
	char name[15];
	char izd[15];
	int year;
	int pages;
	int articul;
};
//���� � ��� 3 ����� �����(�����, ����, ��������), ������������ �����(�������).
struct BJUK 
{
	int bel;
	int fat;
	int ugl;
	float kall;
};
//��� � ��� 3 ������(�������, ���, ��������).
struct FIO 
{
	char last_name[15];
	char first_name[15];
	char otchestvo[15];
};
//������� � ��� 2 ������ (�����(��������), ���(� ������, � �������)), 2 ����� ����� (������(�4,�5 � �.�.), ���-�� ������)
struct notebook 
{
	char autor[15];
	char type[15];
	int size;
	int sheets;
};
//����� � ��� 3 ����� �����(���� ������ � �������)
struct time 
{
	int hour;
	int min;
	int sec;
};
//������ � ��� 2 ������ (�����(��������), ���), ����� ����� (������)
struct jeans 
{
	char autor[15];
	char type[25];
	int size;
};
/*��������� � ��� 3 ������(�����(��������), ���, ��������� ����������(����� ������ �� ����� ����� �����),
	3 ����� ����� (��������� ������, ���������� ������, ��������), 4 ����� �����(������, ������ ������, ���)*/
struct TV 
{
	char autor[15];
	char type[15];
	char tech[100];
	int diag;
	int resolution;
	int hz;
	int height;
	int depth;
	int width;
	int massa;
};
//��������� ���� � ��� 4 ����� �����(���, ������ �����, �����, �����)
struct body 
{
	int massa;
	int chest;
	int waist;
	int butt;
};
/*�������� � ��� ���(�������, ��� � �������� ���������, ��������� ����� ��������� ���
	������������� ���� - ���), ���� (���� ��������), ������������ ����� (�����), �����
	����� (���������� ����� / ����� ������� ����), ������ (���������).*/
struct worker 
{
	char last_name[15];
	char first_name[15];
	char otchestvo[15];
	int year;
	int day;
	int month;
	float oklad;
	int number;
	char post[50];
};
//����� (����������) � ��� 4 ������( ����������, �����, ��� �����, ���������), 2 ������������ ����� (����� �������������, ���)
struct food 
{
	char autor[15];
	char season[15];
	char kitchen[15];
	char category[15];
	float hour;
	float massa;
};
//������� � ��� ���, ���� ��������, ������������ ������ ���������,2 ����� �����( ���������� �����, ����)
struct student 
{
	char last_name[15];
	char first_name[15];
	char otchestvo[15];
	float oklad;
	int number;
	int kurs;
};
//������� � ��� ���, ���� ��������, ������ (�����������), ������ (�������� ����������), ��� �����(��)
struct patient
{
	char last_name[15];
	char first_name[15];
	char otchestvo[15];
	int year;
	int day;
	int month;
	char ill[50];
	char last_name_doc[15];
	char first_name_doc[15];
	char patronymic_doc[15];
};
int main() 
{
	struct Dimension one = { 74, 22, 12345 };
	struct FIO me = { "Nazarov", "Nikita", "Dmitriyvich" };
	struct time now = {23, 22, 34};

	printf("Gabariti: %d %d %d\n", one.depth, one.height, one.width);
	printf("FIO: %s %s %s\n", me.first_name, me.last_name, me.otchestvo);
	printf("time: %d %d %d\n", now.hour, now.min, now.sec);

	return 0;
}