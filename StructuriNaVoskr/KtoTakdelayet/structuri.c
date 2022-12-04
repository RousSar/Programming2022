#include<stdio.h>
//√абариты(мебели, например, шкафа) Ц 3 целых числа(высота, глубина, ширина).
struct dimension 
{
	int height;
	int depth;
	int width;
}; 
/* нига в интернет магазине Ц это 3 строки(автор(ы), название, издательство), 3 целых числа
	(год издани€, количество страниц, артикул).*/
struct book
{
	char autor[15];
	char name[15];
	char izd[15];
	int year;
	int pages;
	int articul;
};
//Ѕ∆”  Ц это 3 целых числа(белки, жиры, углеводы), вещественное число(калории).
struct BJUK 
{
	int bel;
	int fat;
	int ugl;
	float kall;
};
//‘»ќ Ц это 3 строки(фамили€, им€, отчество).
struct FIO 
{
	char last_name[15];
	char first_name[15];
	char otchestvo[15];
};
//“етрадь Ц это 2 строки (автор(издатель), тип(в клетку, в линейку)), 2 целых числа (размер(а4,а5 и т.п.), кол-во листов)
struct notebook 
{
	char autor[15];
	char type[15];
	int size;
	int sheets;
};
//¬рем€ Ц это 3 целых числа(часы минуты и секунды)
struct time 
{
	int hour;
	int min;
	int sec;
};
//ƒжинсы Ц это 2 строки (автор(издатель), тип), целое число (размер)
struct jeans 
{
	char autor[15];
	char type[25];
	int size;
};
/*“елевизор Ц это 3 строки(автор(издатель), тип, поддержка технологий(можно разить на очень много строк),
	3 целых числа (диагональ экрана, разрешение экрана, герцовка), 4 целых числа(длинна, ширина высота, вес)*/
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
//ѕараметры тела Ц это 4 целых числа(вес, обхват груди, талии, бедер)
struct body 
{
	int massa;
	int chest;
	int waist;
	int butt;
};
/*–аботник Ц это ‘»ќ(фамили€, им€ и отчество работника, описанные через структуру уже
	реализованную нами - ‘»ќ), дата (дата рождени€), вещественное число (оклад), целое
	число (уникальный номер / номер личного дела), строка (должность).*/
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
//Ѕлюдо (кулинарное) Ц это 4 строки( сезонность, автор, тип кухни, категори€), 2 вещественных числа (врем€ приготовлени€, вес)
struct food 
{
	char autor[15];
	char season[15];
	char kitchen[15];
	char category[15];
	float hour;
	float massa;
};
//—тудент Ц это ‘»ќ, дата рождени€, вещественный размер степендии,2 целых числа( уникальный номер, курс)
struct student 
{
	char last_name[15];
	char first_name[15];
	char otchestvo[15];
	float oklad;
	int number;
	int kurs;
};
//ѕациент Ц это ‘»ќ, дата рождени€, строка (заболевание), строка (название учреждени€), ‘»ќ врача(ей)
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