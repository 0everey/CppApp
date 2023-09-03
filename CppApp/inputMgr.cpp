#include"inputMgr.h"
bool inputMgr::isEscPressed()
{
	char ch = _getch();
	if ((int)ch == 27)return true;
	return false;
}