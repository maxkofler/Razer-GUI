#!/bin/bash -e
pacman --needed --noconfirm -S  make qt5-base gcc

qmake
make
make clean

mkdir /opt/razer-gui
cp ./Razer-GUI /opt/razer-gui/razer-gui
chmod -R 777 /opt/razer-gui
chmod +x /opt/razer-gui/razer-gui
cp ./Razer-GUI.desktop /usr/share/applications/