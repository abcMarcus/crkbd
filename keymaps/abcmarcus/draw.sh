#!/bin/bash
set -e

python3 -m venv venv
source venv/bin/activate
pip list | grep keymap-drawer > /dev/null || pip install keymap-drawer
keymap draw <(keymap parse -q <(qmk c2json keymap.c)) > my_keymap.svg
echo Drawed

