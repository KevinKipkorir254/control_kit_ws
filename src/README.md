# GUIDE TO RUNNING THE KIT FOR MY PC AT THE MOMENT.
1. Mae sure everything on the hardware is connected properly.
2. Connect the Motor Kit to the PC.
3. Upload any code you want from arduino IDE on windows.

## SETTING UP WSL TO ACCESS THE USB PORT.
1. Open an ubuntu terminal and a windows terminal.
2. On the windows terminal run 'usbipd list' with this you will know the avaible connected devices.
3. Then run 'usbipd bind --busid 4-4', the 4-4 should be the appropriate bus ID.
4. Run 'usbipd attach --wsl --busid <busid>'.
5. On WSL command prompt run 'lsusb' this will ensure you have the USB can be accessed properly.
6. In case we are to dettach for example to run some arduino code from windows run 'usbipd detach --busid <busid>'.
7. Run 'dmesg | grep tty' to see the available ports.
8. To test the data feed from the port run 'screen /dev/ttyUSB0 115200'.

## RUNNING THE KIT WITH THE RVIZ VISUALISATION.
1. Go to the 'control_kit_ws'.
2. Run 'source install/setup.bash'.
3. Run 'ros2 launch encoded_dc_motor_kit_description rviz.launch.py.

If it fails just rerun it before I correct the error with receiving
the wrong data format.
