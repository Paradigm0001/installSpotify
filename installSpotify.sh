#!/bin/sh
cd /tmp
sudo xbps-install -Syu
sudo xbps-install -Syu
sudo xbps-install git xtools
sudo -u nobody git clone https://github.com/void-linux/void-packages.git
cd void-packages
sudo -u nobody ./xbps-src binary-bootstrap
echo XBPS_ALLOW_RESTRICTED=yes > etc/conf
sudo -u nobody ./xbps-src pkg spotify
sudo xbps-install --repository=hostdir/binpkgs/nonfree spotify
