#pragma once
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <WinSock2.h>
//加这个是为了使用inet_pton()函数
#include <WS2tcpip.h>



//启动客户端的socket，
//成功返回客户端的通讯fd，失败返回-1
SOCKET StartClient();

//接收数据



//发送数据

