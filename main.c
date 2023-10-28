#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <windows.h>
int main(int argc, char* argv[])
{
    fflush(stdout);
    SetConsoleOutputCP(CP_UTF8);
    puts("\nRozmiary (w bajtach) typów zmiennoprzecinkowych, C17, x64)");
    printf("float\t\t%d\n", sizeof(float));
    printf("double\t\t%d\n", sizeof(double));
    printf("long double\t%d\n\n", sizeof(long double));
    puts("\nCharakterystyka typu float");
    printf("min\t\t%e\n", FLT_MIN);
    printf("max\t\t%e\n", FLT_MAX);
    printf("precyzja(10)\t%d\n", FLT_DIG);
    puts("\nCharakterystyka typu double");
    printf("min\t\t%e\n", DBL_MIN);
    printf("max\t\t%e\n", DBL_MAX);
    printf("precyzja(10)\t%d\n", DBL_DIG);
    puts("\nlong double - kompilator GCC/Język C");
    puts("Brak implementacji na platformie Windows");
    system("pause");
    return 0;
}