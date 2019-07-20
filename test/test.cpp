// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "../MiniLogger.h"

using namespace std;

MiniLogger build_exe_logger(cout, true);
MiniLogger build_exe_summay_logger(cout, true, &build_exe_logger);
MiniLogger build_exe_detail_logger(cout, true, &build_exe_logger);

int main()
{
	string name = "hello.exe";
	MINILOG(build_exe_summay_logger, "linking " << name);
	_MINILOG(build_exe_detail_logger, "cl "); // 带下划线的输出完毕后不换行
	MINILOG(build_exe_detail_logger, " -o");

	return 0;
}

