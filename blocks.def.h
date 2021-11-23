//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	/*System State*/
	{"",		"sysstate.sh",							5,             0},

	/*Kernel verison*/
	{"  :",    "uname -a | awk '{print $3}'",					3600,             0},

	/*Date*/
	{"", 		"date '+%b %d (%a) %I:%M%p'",					30,		0},


};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = ";";
static unsigned int delimLen = 5;
