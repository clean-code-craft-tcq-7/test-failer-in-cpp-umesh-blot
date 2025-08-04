#include "gtest/gtest.h"
#include "main_header.h"

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
    EXPECT_EQ(size(37), 'S'); // Lower bound
    EXPECT_EQ(size(36), 'S'); // Below lower bound
    EXPECT_EQ(size(38), 'M'); // Edge case for M
    EXPECT_EQ(size(41), 'M'); // Upper bound for M
    EXPECT_EQ(size(42), 'L'); // Edge case for L
    EXPECT_EQ(size(50), 'L'); // Well above L
    EXPECT_EQ(size(0), 'S');  // Extreme low
    std::cout << "All is well (maybe!)\n";
}

void testPrintColorMap() {
    std::cout << "\nPrint color map test\n"; 
    int result = printColorMap();
    EXPECT_EQ(result, 25); // Should always be 25 pairs
    std::cout << "All is well (maybe!)\n";
}
