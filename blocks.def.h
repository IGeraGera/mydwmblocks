
# define SHSCRIPT(name) \
	("$HOME/.dwmblocks/"name)

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 	SHSCRIPT("network.sh"),		5,		9},
	{"", 	SHSCRIPT("nettraf.sh"),		1,		8},
	{"", 	SHSCRIPT("weather.sh"),		1800,		5},
	{"", 	SHSCRIPT("battery.sh"),		5,		6},
	{"", 	SHSCRIPT("cpu.sh"),		1,		7},
	{"", 	SHSCRIPT("memory.sh"),		5,		4},
	{"",	SHSCRIPT("volume.sh"),		0,		2},
	{"", 	SHSCRIPT("keyboard.sh"),	0,		1},
	{"", 	SHSCRIPT("time.sh"),		30,		3},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
