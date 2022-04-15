#include "pch.h"
#include <iostream>
#include "CorePch.h"

#include <thread>

void HelloThread()
{
	cout << "Hello Thread" << endl;
}

void HelloThread_2(int32 num)
{
	cout << num << endl;
}


int main(void)
{
	vector<std::thread> v;
	std::thread t(HelloThread);

	std::thread t1(HelloThread_2, 10);


	int32 count = t.hardware_concurrency();//CPU 코어 갯수는 얼마인지 힌트를 줌 BUT 100프로 정확하진 않음
	auto id = t.get_id(); // 쓰레드마다 주어지는 id가 있음
	
	t.detach(); // std::thread 객체엇 실제 쓰레드를 분리 = 백그라운드 쓰레드로 독립적으로 동작하게 함 => but 분리를 하게 되면 만들어준 쓰레드의 정보를 추출할 수가 없어짐
	if (t.joinable())
	{
		t.join();
	} // detach 상태나 쓰레드가 없는지에 대한 상황 판별을 가능하게 해줌 => 실질적으로 객체가 관리하고 있는 쓰레드가 있는지 없는지를 판별하게 해줌
 
} 