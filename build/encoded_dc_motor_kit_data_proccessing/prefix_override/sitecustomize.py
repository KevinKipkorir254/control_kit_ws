import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/kevo/robotics_inc/control_kit_ws/install/encoded_dc_motor_kit_data_proccessing'
