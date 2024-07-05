//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/					/*Command*/						/*Update Interval*/		/*Update Signal*/
	{"🐧 ", "/home/aston/suckless/dwmblocks/scripts/kernel",			360,					2},
	
	{"📦 ", "/home/aston/suckless/dwmblocks/scripts/pacupdate",			360,					9},
	
	{"🔺 ",	 "/home/aston/suckless/dwmblocks/scripts/upt",				60,						2},
	
	{"💻 Mem:", "/home/aston/suckless/dwmblocks/scripts/memory",		6,						1},
	
	{"🔊 ", "/home/aston/suckless/dwmblocks/scripts/volume",   			0,						10},
	
	{"🔋 Bat:", "/home/aston/suckless/dwmblocks/scripts/bat",			60,						0},

	{"🕑 ", "/home/aston/suckless/dwmblocks/scripts/clock",				60,						0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
