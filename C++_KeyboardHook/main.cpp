// Test_Concole.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <windows.h>
#include<iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int flag = 1;

HHOOK keyboardHook = 0;		// ���Ӿ��

LRESULT CALLBACK LowLevelKeyboardProc(
	_In_ int nCode,		// �涨������δ�����Ϣ��С�� 0 ��ֱ�� CallNextHookEx
	_In_ WPARAM wParam,	// ��Ϣ����
	_In_ LPARAM lParam	// ָ��ĳ���ṹ���ָ�룬������ KBDLLHOOKSTRUCT���ͼ����������¼���
	){
	KBDLLHOOKSTRUCT *ks = (KBDLLHOOKSTRUCT*)lParam;		// �����ͼ����������¼���Ϣ
	/*
	typedef struct tagKBDLLHOOKSTRUCT {
	DWORD     vkCode;		// ��������
	DWORD     scanCode;		// Ӳ��ɨ����ţ�ͬ vkCode Ҳ������Ϊ�����Ĵ��š�
	DWORD     flags;		// �¼����ͣ�һ�㰴������Ϊ 0 ̧��Ϊ 128��
	DWORD     time;			// ��Ϣʱ���
	ULONG_PTR dwExtraInfo;	// ��Ϣ������Ϣ��һ��Ϊ 0��
	}KBDLLHOOKSTRUCT,*LPKBDLLHOOKSTRUCT,*PKBDLLHOOKSTRUCT;
	*/
	if (ks->flags == 128 || ks->flags == 129)
	{
		// ��ؼ���
		switch (ks->vkCode){
		case 0x30: case 0x60:
			cout << "��⵽������" << "0" << endl;
			break;
		case 0x31: case 0x61:
			cout << "��⵽������" << "1" << endl;
			break;
		case 0x32: case 0x62:
			cout << "��⵽������" << "2" << endl;
			break;
		case 0x33: case 0x63:
			cout << "��⵽������" << "3" << endl;
			break;
		case 0x34: case 0x64:
			cout << "��⵽������" << "4" << endl;
			break;
		case 0x35: case 0x65:
			cout << "��⵽������" << "5" << endl;
			break;
		case 0x36: case 0x66:
			cout << "��⵽������" << "6" << endl;
			break;
		case 0x37: case 0x67:
			cout << "��⵽������" << "7" << endl;
			break;
		case 0x38: case 0x68:
			cout << "��⵽������" << "8" << endl;
			break;
		case 0x39: case 0x69:
			cout << "��⵽������" << "9" << endl;
			break;
		case 0x41:
			cout << "��⵽������" << "A" << endl;
			break;
		case 0x42:
			cout << "��⵽������" << "B" << endl;
			break;
		case 0x43:
			cout << "��⵽������" << "C" << endl;
			break;
		case 0x44:
			cout << "��⵽������" << "D" << endl;
			break;
		case 0x45:
			cout << "��⵽������" << "E" << endl;
			break;
		case 0x46:
			cout << "��⵽������" << "F" << endl;
			break;
		case 0x47:
			cout << "��⵽������" << "G" << endl;
			break;
		case 0x48:
			cout << "��⵽������" << "H" << endl;
			break;
		case 0x49:
			cout << "��⵽������" << "I" << endl;
			break;
		case 0x4A:
			cout << "��⵽������" << "J" << endl;
			break;
		case 0x4B:
			cout << "��⵽������" << "K" << endl;
			break;
		case 0x4C:
			cout << "��⵽������" << "L" << endl;
			break;
		case 0x4D:
			cout << "��⵽������" << "M" << endl;
			break;
		case 0x4E:
			cout << "��⵽������" << "N" << endl;
			break;
		case 0x4F:
			cout << "��⵽������" << "O" << endl;
			break;
		case 0x50:
			cout << "��⵽������" << "P" << endl;
			break;
		case 0x51:
			cout << "��⵽������" << "Q" << endl;
			break;
		case 0x52:
			cout << "��⵽������" << "R" << endl;
			break;
		case 0x53:
			cout << "��⵽������" << "S" << endl;
			break;
		case 0x54:
			cout << "��⵽������" << "T" << endl;
			break;
		case 0x55:
			cout << "��⵽������" << "U" << endl;
			break;
		case 0x56:
			cout << "��⵽������" << "V" << endl;
			break;
		case 0x57:
			cout << "��⵽������" << "W" << endl;
			break;
		case 0x58:
			cout << "��⵽������" << "X" << endl;
			break;
		case 0x59:
			cout << "��⵽������" << "Y" << endl;
			break;
		case 0x5A:
			cout << "��⵽������" << "Z" << endl;
			break;
		case 0x6A:
			cout << "��⵽������" << "*" << endl;
			break;
		case 0x6B:
			cout << "��⵽������" << "+" << endl;
			break;
		case 0x6D:
			cout << "��⵽������" << "-" << endl;
			break;
		case 0x6E:
			cout << "��⵽������" << "." << endl;
			break;
		case 0x6F:
			cout << "��⵽������" << "/" << endl;
			break;
		case 0x0D:
			cout << "��⵽������" << "Enter" << endl;
			break;
		case 0xA0: case 0xA1:
			cout << "��⵽������" << "Shift" << endl;
			break;
		case 0x08:
			cout << "��⵽������" << "Backspace" << endl;
			//system("pause");
			//system("taskkill /im ��Ҷ����Ƶת����.exe");
			flag = 0;
			break;
		case 0x20:
			cout << "��⵽������" << "Space" << endl;
			break;
		}

		//return 1;		// ʹ����ʧЧ
	}

	// ����Ϣ���ݸ��������е���һ������
	return CallNextHookEx(NULL, nCode, wParam, lParam);
}

UINT __stdcall SetFocusToDestPosition(void* pParamter)
{
	while (1)
	{
		POINT ptScreenCenter = { GetSystemMetrics(SM_CXSCREEN) / 2, GetSystemMetrics(SM_CYSCREEN) / 2 };
		SetCursorPos(ptScreenCenter.x, ptScreenCenter.y);							// ������꽹�㵽��Ļ����
		mouse_event(MOUSEEVENTF_MIDDLEDOWN, 0, 0, 0, 0);							// ģ�ⰴ����м�
		mouse_event(MOUSEEVENTF_MIDDLEUP, 0, 0, 0, 0);
		Sleep(100);																	// ����CPUȫ��������
	}

	return 0;
}

void StartSetScreenFocus()
{
	HANDLE hThread = (HANDLE)_beginthreadex(NULL, 0, &SetFocusToDestPosition, NULL/*this*/, 0, NULL);
	if (NULL != hThread)
	{
		CloseHandle(hThread);
	}
}

BOOL SetTopWindow(HWND hWnd)
{
	// �ο�:https://blog.csdn.net/felixz/article/details/1544486
	HWND hForegroundWnd = ::GetForegroundWindow();
	DWORD dwThreadId = ::GetWindowThreadProcessId(hForegroundWnd, NULL);
	DWORD dwCurrentThreadId = ::GetCurrentThreadId();
	if (dwThreadId != dwCurrentThreadId)
	{
		if (!::AttachThreadInput(dwThreadId, dwCurrentThreadId, TRUE))
		{
			printf("AttachThreadInput(0x%08x, 0x%08x, TRUE) failed, error code: %d",
				dwThreadId, dwCurrentThreadId, GetLastError());
		}
		if (!::SetForegroundWindow(hWnd))
		{
			printf("SetForegroundWindow(0x%08x) failed, error code: %d", hWnd, GetLastError());
		}
		if (!::BringWindowToTop(hWnd))
		{
			printf("BringWindowToTop(0x%08x) failed, error code: %d", hWnd, GetLastError());
		}
		::SwitchToThisWindow(hWnd, TRUE);
		::AttachThreadInput(dwThreadId, dwCurrentThreadId, FALSE);
	}
	return TRUE;
}

void OutPutText()
{
	cout << "���ܣ���ӭ������Ҷ����Ƶ��ʽת����~" << endl;
	cout << "������Ϊ�����棬�޶��޺����ɷ���ʳ��." << endl;
	cout << "���ս���Ȩ��TX��˾����." << endl;
	cout << "�������ڣ�2020-05-15." << endl;
}

void ShowShutDownWindow()
{
	int id = MessageBox(NULL, _T("��������~��60���ػ���"), _T("����С��ѽ~"), MB_YESNO);
	HWND hWnd = FindWindow(NULL, _T("����С��ѽ~"));
	SetTopWindow(hWnd);					// MessageBox()�����ö�						
	SetFocus(hWnd);						// ������ŵ�MessageBox()�Ĵ�����
	if (IDYES != id)
	{
		system("shutdown -f -s -t 60"); // 60���ػ�
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	OutPutText();
	// ���ý��㵽��Ļ����
	StartSetScreenFocus();

	// ��װ����
	keyboardHook = SetWindowsHookEx(
		WH_KEYBOARD_LL,			// �������ͣ�WH_KEYBOARD_LL Ϊ���̹���
		LowLevelKeyboardProc,	// ָ���Ӻ�����ָ��
		GetModuleHandleA(NULL),	// Dll ���
		NULL
		);
	if (keyboardHook == 0){ cout << "�ҹ�����ʧ��" << endl; return -1; }

	//����©����Ϣ������Ȼ����Ῠ��
	MSG msg;
	while (flag/*1*/)
	{
		// �����Ϣ����������Ϣ
		if (PeekMessageA(
			&msg,		// MSG ���������Ϣ
			NULL,		// �����Ϣ�Ĵ��ھ����NULL��������ǰ�߳����д�����Ϣ
			NULL,		// �����Ϣ��Χ�е�һ����Ϣ��ֵ��NULL�����������Ϣ������������ͬʱΪNULL��
			NULL,		// �����Ϣ��Χ�����һ����Ϣ��ֵ��NULL�����������Ϣ������������ͬʱΪNULL��
			PM_REMOVE	// ������Ϣ�ķ�ʽ��PM_REMOVE���������Ϣ�Ӷ�����ɾ��
			)){
			// �Ѱ�����Ϣ���ݸ��ַ���Ϣ
			TranslateMessage(&msg);

			// ����Ϣ���ɸ����ڳ���
			DispatchMessageW(&msg);
		}
		else
			Sleep(0);    // ����CPUȫ��������
	}

	// ɾ������
	UnhookWindowsHookEx(keyboardHook);

	ShowShutDownWindow();

	return 0;
}

/*
	C++ Hook ���̼�¼����
	https://blog.csdn.net/Simon798/article/details/98848050
	
	Visual Studio�޸Ŀ�ִ�г�����ļ�����·��
	https://blog.csdn.net/sirenxiaohuayuan/article/details/50510994?utm_source=blogxgwz4

	��Դ�ļ� -> C++_KeyboardHook.rc �����ÿ�ִ���ļ�.icoͼ�������·����Ĭ����Դ�ļ�����·����main.cpp��ͬһ�ļ����£�����".\\favicon.ico"
*/
