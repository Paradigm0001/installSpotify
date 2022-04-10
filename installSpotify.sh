#!/bin/sh
sudo xbps-install -Syu
sudo xbps-install -Syu
sudo xbps-install git xtools
cd void-packages
sudo -u '#1000' ./xbps-src binary-bootstrap
sudo -u '#1000' ./xbps-src pkg spotify
cd void-packages
xi -y spotify
