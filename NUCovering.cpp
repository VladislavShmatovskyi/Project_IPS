#include "fragmentation.h"
#include <locale.h>
#include <conio.h>
#include <chrono>
#include <iostream>

using namespace std;
using namespace chrono;
/// параметры начальной прямоугольной области
const double g_l1_max = 12.0;
const double g_l2_max = g_l1_max;
const double g_l1_min = 8.0;
const double g_l2_min = g_l1_min;
const double g_l0 = 5.0;

/// точность аппроксимации рабочего пространства
const double g_precision = 0.25;


int main()
{
	setlocale(LC_ALL, "Rus");

	double a = -10, b = 0, c = 24, d = 16;

	high_resolution_clock::time_point stime, etime;
	stime = high_resolution_clock::now(); //засекли время
	high_level_analysis main_object(a, b, c, d);

	main_object.GetSolution();
	etime = high_resolution_clock::now();
	duration<double> duration = (etime - stime);

	cout << "Общее время работы программы составляет: " << duration.count() << " секунд" << std::endl;

	// Внимание! здесь необходимо определить пути до выходных файлов!
	/*const char* out_files[3] = {"sol.txt", "nsol.txt", "bound.txt" };
	WriteResults( out_files );

	_getch()*/
	return 0;
}