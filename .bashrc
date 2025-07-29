# Prompt: user@host folder
PS1='\[\e[1;36m\]\u@\h \[\e[1;32m\]\W\[\e[0m\] '

# Enable color support for ls and grep
alias ls='ls --color=auto'
alias l='ls --color=auto -litha'
alias grep='grep --color=auto'
alias ..='cd ..'
alias ...='cd ../..'
alias vim='nvim'
alias dvim='doas nvim'
alias emerge='doas emerge'
alias reboot='doas reboot'
alias poweroff='doas poweroff'
alias makeconf='doas nvim /etc/portage/make.conf'
alias dispatch-conf='doas dispatch-conf'

# History settings
HISTFILE=~/.bash_history
HISTSIZE=5000
HISTCONTROL=ignoredups:erasedups
shopt -s histappend
PROMPT_COMMAND="history -a; history -c; history -r; $PROMPT_COMMAND"

# Enable tab completion
if [ -f /etc/bash_completion ]; then
    . /etc/bash_completion
fi

# Use vim as default editor
export EDITOR=vim

# Nice readable prompt even as root
if [[ $EUID -eq 0 ]]; then
    PS1='\[\e[1;31m\]\u@\h \[\e[1;33m\]\W\[\e[0m\] '
fi

# env
export QT_QPA_PLATFORMTHEME='qt6ct'
