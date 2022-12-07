#include<stdio.h>
#include<math.h>
#include<locale.h>

struct dimension
{
	int height;
	int depth;
	int width;
};

struct book
{
	char autor[15];
	char name[15];
	char izd[15];
	int year;
	int pages;
	int articul;
};

struct BJUK
{
	int bel;
	int fat;
	int ugl;
	float kall;
};

struct FIO
{
	char last_name[15];
	char first_name[15];
	char otchestvo[15];
};

struct notebook
{
	char autor[15];
	char type[15];
	int size;
	int sheets;
};

struct time
{
	int hour;
	int min;
	int sec;
};

struct jeans
{
	char autor[15];
	char type[25];
	int size;
};

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

struct body
{
	int massa;
	int chest;
	int waist;
	int butt;
};

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

struct food
{
	char autor[15];
	char season[15];
	char kitchen[15];
	char category[15];
	float hour;
	float massa;
};

struct student
{
	char last_name[15];
	char first_name[15];
	char otchestvo[15];
	float oklad;
	int number;
	int kurs;
};

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

void Input(struct TV* size) {
	printf("\nВведите длинну телевизора: ");
	scanf_s("%d", &(*size).width);

	printf("Введите высоту телевизора: ");
	scanf_s("%d", &(*size).height);

	printf("Введите ширину телевизора: ");
	scanf_s("%d", &(*size).depth);
}
void diag(struct TV* size) {
	int diagonal;
	int height = (*size).height;
	int width = (*size).width;

	diagonal = sqrt(pow(height, 2) + pow(width, 2));

	printf("Диагональ телевизора: %d", diagonal);
}
void S(struct TV* size) {
	int square;
	int height = (*size).height;
	int width = (*size).width;

	square = height * width;

	printf("\nПлощадь экрана: %d", square);
}
void V(struct TV* size) {
	int volume;
	int height = (*size).height;
	int width = (*size).width;
	int depth = (*size).depth;

	volume = height * width * depth;

	printf("\nОбъем телевизора: %d", volume);
}

void input(struct dimension* sizes) {
	printf("Enter cabinet width: ");
	scanf_s("%d", &(*sizes).width);

	printf("Enter cabinet height: ");
	scanf_s("%d", &(*sizes).height);

	printf("Enter cabinet depth : ");
	scanf_s("%d", &(*sizes).depth);
}

int calculS(struct dimension sizes) {
	int square_bokovoy, square_upndown, square_front, square;
	
	square_bokovoy = 2 * sizes.height * sizes.depth;
	
	square_upndown = 2 * sizes.width * sizes.depth;
	
	square_front = sizes.height * sizes.width;

	square = square_bokovoy + square_upndown + square_front;

	return square;
}

int calculV(struct dimension sizes) {
	int V = sizes.height * sizes.depth * sizes.width;
	return V;
}

float calculDye(struct dimension sizes, float consumption) {
	
	int square = calculS(sizes);
	
	float dye = square * consumption;

	return dye;
}
float calculPaintingCost(struct dimension sizes, float consumption, float
	workCost, float paintCost) {
	
	float paint_price = calculDye(sizes, consumption) * paintCost;

	float work_price = calculDye(sizes, consumption) * workCost;

	float cost = paint_price + work_price;

	return cost;
}
float calculCupboardCost(struct dimension sizes, float cupboardCost) {

	float cost = calculS(sizes) * cupboardCost;

	return cost;
}
float calculCabinetMass(struct dimension sizes, float weight) {

	float cabinet_mass = calculS(sizes) * weight;

	return cabinet_mass;
}
float calculLiftCost(struct dimension sizes, float weight, int floorsCount, float riseCost) {

	float LiftingCost = calculCabinetMass(sizes, weight) * floorsCount * riseCost;

	return LiftingCost;
}
float calculCost(struct dimension sizes, float cupboardCost, float consumption, float paintCost,
	float workCost, float weight, int floorsCount, float riseCost, float deliveryCost) {

	float full_cost = calculPaintingCost(sizes, consumption, workCost, paintCost) +
		calculCupboardCost(sizes, cupboardCost) + calculLiftCost(sizes, weight, floorsCount, riseCost) + deliveryCost;

	return full_cost;
}

int main()
{
	setlocale(LC_ALL, "rus");

	//3

	struct dimension one = { 74, 22, 1345 };
	struct FIO me = { "Nazarov", "Nikita", "Dmitriyvich" };
	struct time now = { 23, 22, 34 };


	printf("Gabariti: %d %d %d\n", one.depth, one.height, one.width);
	printf("FIO: %s %s %s\n", me.first_name, me.last_name, me.otchestvo);
	printf("time: %d %d %d\n", now.hour, now.min, now.sec);

	//4

	

	//5

	struct TV* size;
	Input(&size);
	diag(&size);
	S(&size);
	V(&size);

	//6

	
	float paintConsumption = 0.8, paintWorkCost = 35.00, paintCost = 50.00;
	
	float cupboardCost = 650;
	
	float weight = 0.9;
	
	int floorsCount = 5;
	float deliveryCost = 500.00;
	float riseCost = 2.50;

	struct dimension cupboard;

	printf("\n\nCUPBOARD PARAMETERS\n");
	input(&cupboard);

	float cost, cupboard_cost, painting_cost, delivery_cost;

	cost = calculCost(cupboard, cupboardCost, paintConsumption,
		paintCost, paintWorkCost, weight, floorsCount, riseCost, deliveryCost);

	cupboard_cost = calculCupboardCost(cupboard, cupboardCost);
	painting_cost = calculPaintingCost(cupboard, paintConsumption, paintWorkCost, paintCost);
	delivery_cost = calculLiftCost(cupboard, weight, floorsCount, riseCost) + deliveryCost;

	printf("Cost by position:\n  - cupboard cost:%.2f\n  - painting cost:%.2f\n  - delivery cost(with rise)%.2f:\nTotal cost: %.2f",
		cupboard_cost, painting_cost, delivery_cost, cost);

	return 0;
}