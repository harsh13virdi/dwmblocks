//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	/*Kernel verison*/
	{"  :",    "uname -a | awk '{print $3}'",                                3600,             0},
	/*Ram Usage*/
	{" :", 	"free | awk '/^Mem/ { print int(($3/$2)*100) }' | sed s/$/%/",		10,		0},
	/*GPU Stats*/
	{" :",      "nvidia-smi | grep Default | awk '{print $13}'",                10,             0},

	{" :",      "nvidia-smi | grep Default | awk '{print $3}'",                 10,             0},

	/*CPU Usage*/
	{" :",	"top -bn1 | grep Cpu | awk '{print int($2)}' | sed s/$/%/",		10,             0},
	/*CPU Temp*/
	{" :",      "sensors | awk '/^Tdie:/ {print int($2)}' | sed s/+// | sed s/$/C/",	10,             0},
	/*Date*/
	{"", 		"date '+%b %d (%a) %I:%M%p'",					10,		0},


};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
