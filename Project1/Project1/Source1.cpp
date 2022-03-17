#include<stdio.h>
#include<Windows.h>


int main() {
	HKEY hkey;
	LONG error=RegOpenKeyEx(HKEY_CURRENT_USER, L"SOFTWARE\\CoolThing",NULL,KEY_QUERY_VALUE|KEY_WOW64_64KEY,&hkey);

	if (error == ERROR_SUCCESS) 
	{
		wchar_t buffer[MAX_PATH];
		DWORD buffersize = MAX_PATH;

		LONG result = RegQueryValueEx(hkey,L"Counter",NULL,NULL,(LPBYTE)&buffer,&buffersize);
		
		if (result == ERROR_SUCCESS) {
			printf_s("The reg key of \Counter\ is %d", *buffer);
		}
		else printf_s("ERROR");
	}
}