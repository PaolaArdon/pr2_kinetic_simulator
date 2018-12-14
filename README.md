# PR2 Simulator for Grasping

This repository provides the guidelines to install the PR2 simulator, for reaching and grasping purposes, in ROS kinetic and Ubuntu 16.04LTS environment.

### Pre-requisites

### To Grasp ###
* Install [Grasp-it] (https://github.com/vibe007/Grasping-ROS-Tutorial)
* Follow [these] instructions for the graspIt installation and then the previous link (https://github.com/graspit-simulator/graspit_interface)
* for errors with pyassimp https://launchpadlibrarian.net/263969718/patch.txt
* export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH
* export GRASPIT=~/.graspit

* To launch the working version: go to graspit_ws, source it and roslaunch system_launch pr2_mug.launch
* add the models and objects to the graspit folder in home and make it again
* rosrun rapid_pr2 torso 0.2
