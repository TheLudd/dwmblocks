//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "count-pacman-upgrades" , 60 * 60 * 5, 3},
	{"", "check-dotfiles-repo" , 60 * 60, 4},
	{"", "battery" , 60, 1},
	{"", "display-sound" , 0, 6},
	{"", "light" , 0, 2},
	{"", "date '+%a %b %d %H:%M%p'",					5,		0},
	{"", "count-dotfiles bar" , 3600, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
