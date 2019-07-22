#pragma once

#include <mach/mach_types.h>

namespace C001
{

// 제약 조건
// 주기억 장치의 양은 매우 적으며, 일반적으로 처리/생성할 데이터에 비해 매우 적다.
// 식별자가 없다. 즉, 변수명이나 참조할 꼬리표가 붙은 메모리 주소가 없으며, 숫자로 가리킬 수 있는 메모리만 있다.

void process()
{
    std::cout << "C001" << std::endl;
}

};
