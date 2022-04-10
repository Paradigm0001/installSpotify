#!/bin/sh
sudo xbps-install -Syu
sudo xbps-install -Syu
sudo xbps-install git xtools
cd void-packages
sudo -u nobody ./xbps-src binary-bootstrap
sudo -u nobody ./xbps-src pkg spotify
sudo xbps-install --repository=hostdir/binpkgs/nonfree spotify
