#!/bin/sh
groups $FT_USER | sed 's/[[:blank:]]\{1,\}/,/g' 
