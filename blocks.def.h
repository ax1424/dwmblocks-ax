//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/				/*Command*/						/*Update Interval*/		/*Update Signal*/
	{"🐧 ", "~/.suckless/dwmblocks-ax/scripts/kernel",				360,					2},
	
	{"📦 ", "~/.suckless/dwmblocks-ax/scripts/pacupdate",			360,					9},
	
	{"🔺 ",	 "~/.suckless/dwmblocks-ax/scripts/upt",				60,						2},
	
	{"💻 Mem:", "~/.suckless/dwmblocks-ax/scripts/memory",			6,						1},
	
	{"💾 ", "~/.suckless/dwmblocks-ax/scripts/disk",				60,						1},
	
	{"🔊 ", "~/.suckless/dwmblocks-ax/scripts/volume",   			0,						10},
	
	{"🔋 Bat: ", "~/.suckless/dwmblocks-ax/scripts/bat",			60,						0},

	{"🕑 ", "~/.suckless/dwmblocks-ax/scripts/clock",				60,						0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
