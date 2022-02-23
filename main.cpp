#include <iostream>

extern "C" {
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

int main(int ar)
{
	printf("test\n");
	lua_State* L = lua_open();

	luaL_openlibs(L);
	luaL_dofile(L, "my.lua");
	return 0;
}