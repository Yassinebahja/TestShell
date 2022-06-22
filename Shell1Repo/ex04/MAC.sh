#!/bin/sh
ifconfig -a | grep ether | sed 's/[[:blank:]]ether //'

