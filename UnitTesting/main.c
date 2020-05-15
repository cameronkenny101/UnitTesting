#include <stdio.h>
#include <Cunit/CUnit.h>
#include <CUnit/Basic.h>

#include "avg_and_max.h"

double array1[] = {4, 2, 6}; // small quantity of small natural numbers
double array2[] = {514, 271, 91}; // small quantity of large natural numbers
double array3[] = {21022, 90419, 72312}; // small quantity of very large natural numbers
double array4[] = {2, 4, 6, 12, 8, 7, 9, 13, 24, 3, 11}; // large quantity of small natural numbers
double array5[] = {234, 545, 231, 871, 902, 112, 234, 532, 643, 653, 191}; // large quantity of large natural numbers
double array6[] = {12231, 32123, 56758, 9051, 12334, 99099, 10000, 1246, 43566, 948954, 102934}; // large quantity of very large natural numbers
double array7[] = {-4, -2, -6}; // small quantity of small negative numbers
double array8[] = {-514, -271, -91}; // small quantity of large negative numbers
double array9[] = {-21022, -90419, -72312}; // small quantity of very large negative numbers
double array10[] = {-2, -4, -6, -12, -8, -7, -9, -13, -24, -3, -11}; // large quantity of small negative numbers
double array11[] = {-234, -545, -231, -871, -902, -112, -234, -532, -643, -653, -191}; // large quantity of large negative numbers
double array12[] = {-12231, -32123, -56758, -9051, -12334, -99099, -10000, -1246, -43566, -948954, -102934}; // large quantity of very large negative numbers
double array13[] = {4.128, 2.565, 6.795}; // small quantity of small real numbers
double array14[] = {512.2121, 271.9091, 91.2345}; // small quantity of large real numbers
double array15[] = {21021.12, 90419.6421, 72312.6565}; // small quantity of very large real numbers
double array16[] = {2.34, 4.43, 6.53, 12.123, 8.676, 7.76, 9.4313, 13.12, 2.2344, 3.12, 8.99}; // large quantity of small real numbers
double array17[] = {234.3312, 545.123, 231.23, 871.23, 902.9, 112.23, 234.8, 532.7, 643.6, 653.2, 191.23}; // large quantity of large real numbers
double array18[] = {12231.12, 32123.77, 56758.21, 9051.23, 12334.21, 99099.14, 10000.32, 1246.12, 43566.45, 948954.6, 102934.87}; // large quantity of very large real numbers
double array19[] = {-4.128, -2.565, -6.795}; // small quantity of small negative real numbers
double array20[] = {-512.2121, -271.9091, -91.2345}; // small quantity of large negative real numbers
double array21[] = {-21021.12, -90419.6421, -72312.6565}; // small quantity of very large negative real numbers
double array22[] = {-2.34, -4.43, -6.53, -12.123, -8.676, -7.76, -9.4313, -13.12, -2.2344, -3.12, -8.99}; // large quantity of small negative real numbers
double array23[] = {-234.3312, -545.123, -231.23, -871.23, -902.9, -112.23, -234.8, -532.7, -643.6, -653.2, -191.23}; // large quantity of large negative real numbers
double array24[] = {-12231.12, -32123.77, -56758.21, -9051.23, -12334.21, -99099.14, -10000.32, -1246.12, -43566.45, -948954.6, -102934.87}; // large quantity of very large negative real numbers
double array25[] = {}; // empty array
double array26[] = {3, 3, 3, 3}; // positive numbers that are all the same
double array27[] = {-3, -3, -3, -3}; // negative numbers that are all the smae


void test_max(void){
    CU_ASSERT(max(array1,3) == 6);
    CU_ASSERT(max(array2,3) == 514);
    CU_ASSERT(max(array3,3) == 90419);
    CU_ASSERT(max(array4,11) == 24);
    CU_ASSERT(max(array5,11) == 902);
    CU_ASSERT(max(array6,11) == 948954);
    CU_ASSERT(max(array7,3) == -2);
    CU_ASSERT(max(array8,3) == -91);
    CU_ASSERT(max(array9,3) == -21022);
    CU_ASSERT(max(array10,11) == -2);
    CU_ASSERT(max(array11,11) == -112);
    CU_ASSERT(max(array12,11) == -1246);
    CU_ASSERT(max(array13,3) == 6.795);
    CU_ASSERT(max(array14,3) == 512.2121);
    CU_ASSERT(max(array15,3) == 90419.6421);
    CU_ASSERT(max(array16,11) == 13.12);
    CU_ASSERT(max(array17,11) == 902.9);
    CU_ASSERT(max(array18,11) == 948954.6);
    CU_ASSERT(max(array19,3) == -2.565);
    CU_ASSERT(max(array20,3) == -91.2345);
    CU_ASSERT(max(array21,3) == -21021.12);
    CU_ASSERT(max(array22,11) == -2.34);
    CU_ASSERT(max(array23,11) == -112.23);
    CU_ASSERT(max(array24,11) == -1246.12);
    CU_ASSERT(max(array25,1) == 0);
    CU_ASSERT(max(array26,4) == 3);
    CU_ASSERT(max(array27,4) == -3);
}

void test_avg(void){
    CU_ASSERT(average(array1,3) == 4);
    CU_ASSERT(average(array2,3) == 292);
    CU_ASSERT(average(array3,3) == 61251);
    CU_ASSERT(average(array4,11) == 9);
    CU_ASSERT(average(array5,11) == 468);
    CU_ASSERT(average(array6,11) == 120754.181818182);
    CU_ASSERT(average(array7,3) == -4);
    CU_ASSERT(average(array8,3) == -292);
    CU_ASSERT(average(array9,3) == -61251);
    CU_ASSERT(average(array10,11) == -9);
    CU_ASSERT(average(array11,11) == -468);
    CU_ASSERT(average(array12,11) == -120754.181818182);
    CU_ASSERT(average(array13,3) == 4.496);
    CU_ASSERT(average(array14,3) == 291.785233333333);
    CU_ASSERT(average(array15,3) == 61251.1395333333);
    CU_ASSERT(average(array16,11) == 7.15951818181818);
    CU_ASSERT(average(array17,11) == 468.415836363636);
    CU_ASSERT(average(array18,11) == 120754.549091);
    CU_ASSERT(average(array19,3) == -4.496);
    CU_ASSERT(average(array20,3) == -291.785233333333);
    CU_ASSERT(average(array21,3) == -61251.1395333333);
    CU_ASSERT(average(array22,11) == -7.15951818181818);
    CU_ASSERT(average(array23,11) == -468.415836363636);
    CU_ASSERT(average(array24,11) == -120754.549091);
    CU_ASSERT(average(array25,1) == 0);
    CU_ASSERT(average(array26,4) == 3);
    CU_ASSERT(average(array27,4) == -3);
}

int main() {
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("test_for_maximum", 0, 0);

    CU_add_test(suite, "maximum_test", test_max);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    CU_initialize_registry();
    CU_pSuite suite2 = CU_add_suite("test_for_average", 0, 0);

    CU_add_test(suite2, "average_test", test_avg);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}




