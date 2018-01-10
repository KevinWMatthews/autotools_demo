#!/bin/sh

autoreconf --install --verbose
# Why does he invoke automake first?
#TODO remove this after we configure the project for Automake
automake --add-missing --copy
