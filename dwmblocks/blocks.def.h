static const Block blocks[] = {
    /*Icon*/    /*Command*/    /*Update Interval*/    /*Update Signal*/
    {"│",       "echo",                                                         0,      0},  
    {"Cpu: ",   "top -bn1 | grep 'Cpu(s)' | awk '{print $2 + $4\"%\"}'",        1,     10},
    {"│",       "echo",                                                         0,      0},
    {"Mem: ",   "free -h | awk '/^Mem/ {print $3}'",                            1,     11},
    {"│",       "echo",                                                         0,      0},
    {"Batt: ",  "acpi -b | awk '{print $4}' | tr -d ','",                       2,     12},
    {"│",       "echo",                                                         0,      0},
    {"Vol: ",   "pactl get-sink-volume @DEFAULT_SINK@ | awk '{print $5}'",      1,     13},
    {"│",       "echo",                                                         0,      0},
    {"Date: ",  "date '+%d %b %a %I:%M %p'",                                   60,     17},
    {"│",       "echo",                                                         0,      0},    
};

// Sets delimiter between status commands. Using a space for minimal separation.
static char delim[] = " ";
static unsigned int delimLen = 1;
