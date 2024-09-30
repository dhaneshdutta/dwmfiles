static const Block blocks[] = {
    /*Icon*/    /*Command*/    /*Update Interval*/    /*Update Signal*/
    {"│",       "echo",                                                         0,      0},  
    {"🖥 ",     "top -bn1 | grep 'Cpu(s)' | awk '{print $2 + $4\"%\"}'",        1,     10},
    {"│",       "echo",                                                         0,      0},
    {"🧠 ",     "free -h | awk '/^Mem/ {print $3}'",                            1,     11},
    {"│",       "echo",                                                         0,      0},
    {"🔋 ",     "acpi -b | awk '{print $4}' | tr -d ','",                       1,     12},
    {"│",       "echo",                                                         0,      0},
    {"🔊 ",     "amixer sget Master | awk -F\"[][]\" '/%/ { print $2 }'",       1,     13},
    {"💡 ",     "brightnessctl -m | cut -d',' -f4 | tr -d '%'",                 1,     14},
    {"│",       "echo",                                                         0,      0},
    {"📅 ",     "date '+%d %b %a %I:%M %p'",                                   60,    17},
    {"│",       "echo",                                                         0,      0},    
};

// Sets delimiter between status commands. Using a space for minimal separation.
static char delim[] = " ";
static unsigned int delimLen = 1;
