#include <gb/gb.h>
#include <string.h>

#define LEN(arr) sizeof(arr)/sizeof(arr[0])

#define PRINT(line, message) set_win_tiles(1, line, strlen(message), 1, message)

#define CLEAR "                  "

const char* credits[] = {

	"LEAD PROGRAMMER",
	"BILLY REBECCHI",

	"PROGRAMMER",
	"LUKE WOOD",

	"PROGRAMMER",
	"AMITAI GAUNT",

	"STORY CONCEPT",
	"ADAM KIRKUP",

	"NARRATIVE",
	"JUSTYNA CHOROSZ.",

	"ARTIST",
	"M BOGDANIS",

	"ARTIST",
	"LIZA SARATOVA",

	"MUSIC",
	"JOSH HERBERT",

	" ",
	" ",

	"GLOBAL GAME",
	"JAM 2019",

	"SKAZKA",
	" "

};