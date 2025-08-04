#include "gtest/gtest.h"

void testTshirtSize();
void testPrintColorMap();
void testWeatherReport();

TEST(TShirt, Size) {
    testTshirtSize();
}

TEST(ColorMap, Print) {
    testPrintColorMap();
}

TEST(WeatherReport, Report) {
    testWeatherReport();
}

void testTshirtSize() {
    std::cout << "\nTshirt size test\n";
    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');
    std::cout << "All is well (maybe!)\n";
}

void testPrintColorMap() {
    std::cout << "\nPrint color map test\n"; 
    int result = printColorMap();
    assert(result == 25);
    std::cout << "All is well (maybe!)\n";
}
