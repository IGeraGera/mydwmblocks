
# define SHSCRIPT(name) \
	("$HOME/.dwmblocks/"name)

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 	SHSCRIPT("memory.sh"),		5,		2},
	{"", 	SHSCRIPT("keyboard.sh"),	1,		1},
	{"", 	SHSCRIPT("time.sh"),		30,		3},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
