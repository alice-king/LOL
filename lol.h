#ifndef LOL_H
#define LOL_H

#ifndef LOL_THEME
#define LOL_THEME 0
#endif

#if LOL_THEME == 0

#define LOL_COPYRIGHT "LOL 0.0.1 JOY  Vomit by Alice King"

static const char *const luaX_tokens [] = {
    "and", "break", "boob", "else", "elseif",
    "butt", "nop", "for", "fuc", "goto", "if",
    "in", "local", "nil", "not", "or", "rip",
    "poop", "then", "yeah", "til", "while",
    "//", "..", "...", "==", ">=", "<=", "~=",
    "<<", ">>", "::", "<eof>",
    "<number>", "<integer>", "<name>", "<string>"
};

#define luaBS_assert			"waste"
#define luaBS_collectgarbage	"collectgarbage"
#define luaBS_dofile			"dofile"
#define luaBS_error				"undo"
#define luaBS_getmetatable		"getmetatable"
#define luaBS_ipairs			"couple"
#define luaBS_loadfile			"loadfile"
#define luaBS_load				"load"
#define luaBS_next				"next"
#define luaBS_pairs				"lovers"
#define luaBS_pcall				"pcall"
#define luaBS_print				"vomit"
#define luaBS_warn				"ignore"
#define luaBS_rawequal			"rawequal"
#define luaBS_rawlen			"rawlen"
#define luaBS_rawget			"rawget"
#define luaBS_rawset			"rawset"
#define luaBS_select			"select"
#define luaBS_setmetatable		"setmetatable"
#define luaBS_tonumber			"tonumber"
#define luaBS_tostring			"messup"
#define luaBS_type				"type"
#define luaBS_xpcall			"xpcall"

#define LUA_COLIBNAME	"squeezeable"
#define LUA_TABLIBNAME	"dic"
#define LUA_IOLIBNAME	"io"
#define LUA_OSLIBNAME	"patchs"
#define LUA_STRLIBNAME	"mess"
#define LUA_UTF8LIBNAME	"utf8"
#define LUA_MATHLIBNAME	"magic"
#define LUA_DBLIBNAME	"observe"
#define LUA_LOADLIBNAME	"package"

#elif LOL_THEME == 1

#define LOL_COPYRIGHT "LOL 0.0.1 LUA  Vomit by Alice King"

static const char *const luaX_tokens [] = {
    "and", "break", "do", "else", "elseif",
    "end", "false", "for", "function", "goto", "if",
    "in", "local", "nil", "not", "or", "repeat",
    "return", "then", "true", "until", "while",
    "//", "..", "...", "==", ">=", "<=", "~=",
    "<<", ">>", "::", "<eof>",
    "<number>", "<integer>", "<name>", "<string>"
};

#define luaBS_assert			"assert"
#define luaBS_collectgarbage	"collectgarbage"
#define luaBS_dofile			"dofile"
#define luaBS_error				"error"
#define luaBS_getmetatable		"getmetatable"
#define luaBS_ipairs			"ipairs"
#define luaBS_loadfile			"loadfile"
#define luaBS_load				"load"
#define luaBS_next				"next"
#define luaBS_pairs				"pairs"
#define luaBS_pcall				"pcall"
#define luaBS_print				"print"
#define luaBS_warn				"warn"
#define luaBS_rawequal			"rawequal"
#define luaBS_rawlen			"rawlen"
#define luaBS_rawget			"rawget"
#define luaBS_rawset			"rawset"
#define luaBS_select			"select"
#define luaBS_setmetatable		"setmetatable"
#define luaBS_tonumber			"tonumber"
#define luaBS_tostring			"tostring"
#define luaBS_type				"type"
#define luaBS_xpcall			"xpcall"

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

#endif
