static const Block blocks[] = {
    /*Icon*/    /*Command*/    /*Update Interval*/    /*Update Signal*/
    {"🖥 ",     "top -bn1 | grep 'Cpu(s)' | awk '{print $2 + $4\"%\"}'",        1,     10},
    {"🧠 ",     "free -h | awk '/^Mem/ {print $3}'",                            1,     11},
    {"🔋 ",     "acpi -b | awk '{print $4}' | tr -d ','",                       1,     12},
    {"🔊 ",     "amixer sget Master | awk -F\"[][]\" '/%/ { print $2 }'",       1,     13},
    {"💡 ",     "brightnessctl -m | cut -d',' -f4 | tr -d '%'",                 1,     14},
    {"📅 ",     "date '+%d %b %a'",                                             1,     15},
    {"🕒 ",     "date '+%I:%M %p'",                                             1,     16},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " ";
static unsigned int delimLen = 2;
