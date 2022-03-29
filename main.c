#include <stdio.h>

#include "src/lua.h"
#include "src/lualib.h"
#include "src/lauxlib.h"

int main() {
    lua_State *L = lua_open();
    luaL_openlibs(L);
    luaL_dofile(L, "./test/hello.lua");
    return 0;
}
