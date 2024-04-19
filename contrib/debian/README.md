# Debian

This directory contains files used to package tequichaind/tequichain-qt
for Debian-based Linux systems. If you compile tequichaind/tequichain-qt yourself, there are some useful files here.

## tequichain: URI support

tequichain-qt.desktop (Gnome / Open Desktop)
To install:

    sudo desktop-file-install tequichain-qt.desktop
    sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your tequichain-qt binary to `/usr/bin`
and the `../../share/pixmaps/tequichain128.png` to `/usr/share/pixmaps`

tequichain-qt.protocol (KDE)

