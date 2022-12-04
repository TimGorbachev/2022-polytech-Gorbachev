#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "MyList.h"
#include <iostream>

TEST_CASE("MyList") {
    MyList list(generate_random(10));
    MyList list2(list.get(0));
    MyList list3;
    list3.clone(list2);
    std::cout << list << "===========" << std::endl;
    reverse(&list.head);
    std::cout << list << "===========" << std::endl;

    CHECK_EQ(list.get(0)->data, list3.get(9)->data);
    CHECK_EQ(list.get(1)->data, list3.get(8)->data);
    CHECK_EQ(list.get(9)->data, list3.get(0)->data);

    reverse(&list2.head, 2, 5);
    std::cout << list2;
    CHECK_EQ(list2.get(0)->data, list3.get(0)->data);

    CHECK_EQ(list2.get(1)->data, list3.get(4)->data);
    CHECK_EQ(list2.get(2)->data, list3.get(3)->data);
    CHECK_EQ(list2.get(3)->data, list3.get(2)->data);
    CHECK_EQ(list2.get(4)->data, list3.get(1)->data);

    CHECK_EQ(list2.get(5)->data, list3.get(5)->data);
    CHECK_EQ(list2.get(9)->data, list3.get(9)->data);
}