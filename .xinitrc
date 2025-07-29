# display
xrandr --output eDP-1 --mode 1920x1080 --rate 60.00 &
picom &

# audio
gentoo-pipewire-launcher &

# tools 
dwmblocks &
feh --bg-fill ~/pix/bg/gentoo.png &
light -U 60 &

# env
export QT_QPA_PLATFORMTHEME=qt6ct

exec dwm
