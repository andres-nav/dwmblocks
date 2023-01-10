//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/   /*Command*/		                             /*Update Interval*/    /*Update Signal*/
	{"",       "sh ~/.config/dwmblocks/scripts/battery.sh",    120,                   0},
	{"",       "sh ~/.config/dwmblocks/scripts/volume.sh",       0,                  10},
	{"",       "sh ~/.config/dwmblocks/scripts/clock.sh",       30,		    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
