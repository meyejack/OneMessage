#include "om_color.h"

// Formatting codes
const char* OM_COLOR_FORMAT[] = {
    "",        "\033[m",  "\033[1m", "\033[2m", "\033[4m",
    "\033[5m", "\033[7m", "\033[8m", "\033[K",
};

// Foreground colors
const char* OM_COLOR_FONT[] = {
    "",         "\033[30m", "\033[31m", "\033[32m", "\033[33m",
    "\033[34m", "\033[35m", "\033[36m", "\033[37m",
};

/// Background colors
const char* OM_COLOR_BG[] = {
    "",         "\033[40m", "\033[41m", "\033[42m", "\033[43m",
    "\033[44m", "\033[45m", "\033[46m", "\033[47m",
};

/// Bold colors
const char* OM_COLOR_BOLD[] = {
    "",
    "\033[33m\033[1m",
    "\033[31m\033[1m",
    "\033[1m\033[41m",
};
