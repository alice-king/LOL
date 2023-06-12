#ifndef LOL_H
#define LOL_H

static const char *const luaX_tokens [] = {
    "and", "break", "do", "else", "elseif",
    "end", "false", "for", "function", "goto", "if",
    "in", "local", "nil", "not", "or", "repeat",
    "return", "then", "true", "until", "while",
    "//", "..", "...", "==", ">=", "<=", "~=",
    "<<", ">>", "::", "<eof>",
    "<number>", "<integer>", "<name>", "<string>"
};

#define luaS_assert "assert"
#define luaS_collectgarbage "collectgarbage"
#define luaS_dofile "dofile"
#define luaS_error "error"
#define luaS_getmetatable "getmetatable"
#define luaS_ipairs "ipairs"
#define luaS_loadfile "loadfile"
#define luaS_load "load"
#define luaS_next "next"
#define luaS_pairs "pairs"
#define luaS_pcall "pcall"
#define luaS_print "print"
#define luaS_warn "warn"
#define luaS_rawequal "rawequal"
#define luaS_rawlen "rawlen"
#define luaS_rawget "rawget"
#define luaS_rawset "rawset"
#define luaS_select "select"
#define luaS_setmetatable "setmetatable"
#define luaS_tonumber "tonumber"
#define luaS_tostring "tostring"
#define luaS_type "type"
#define luaS_xpcall "xpcall"

#define LUA_COLIBNAME	"coroutine"
#define LUA_TABLIBNAME	"table"
#define LUA_IOLIBNAME	"io"
#define LUA_OSLIBNAME	"os"
#define LUA_STRLIBNAME	"string"
#define LUA_UTF8LIBNAME	"utf8"
#define LUA_MATHLIBNAME	"math"
#define LUA_DBLIBNAME	"debug"
#define LUA_LOADLIBNAME	"package"

#endif
