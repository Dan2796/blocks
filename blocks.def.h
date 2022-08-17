//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/dotfiles/status_scripts/task_status.sh",					   60,		10},
  {"", "~/dotfiles/status_scripts/program_work_hour_track.sh", 60,		9},
  {"", "~/dotfiles/status_scripts/deep_work_hour_track.sh",		 60,		8},
  {"", "~/dotfiles/status_scripts/shallow_work_hour_track.sh", 60,		7},
  {"", "~/dotfiles/status_scripts/email_status.sh",		         60,		6},
	{"", "~/dotfiles/status_scripts/volume.sh",					         60,		5},
	{"", "~/dotfiles/status_scripts/wifi.sh",					           60,		4},
	{"", "~/dotfiles/status_scripts/battery.sh",					       60,		3},
	{"", "~/dotfiles/status_scripts/khal_week.sh",					     600,	  2},
	{"", "~/dotfiles/status_scripts/date.sh",					           15,		1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
