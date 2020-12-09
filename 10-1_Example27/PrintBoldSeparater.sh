#!/bin/bash
# -*- coding: utf-8 -*-

# ターミナルの横幅
WIDTH=$(tput cols)

# ターミナルの横幅分、仕切りを表示する。
printf '\n%*s\n\n' ${WIDTH} | tr ' ' =
