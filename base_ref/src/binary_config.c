/*
* This file is automatically generated by Slamware Config Tool
* The encoded config is
{
    "base": {
        "manufacture_id": 255,
        "manufacture_name": "Slamtec",
        "model_id": 4096,
        "model_name": "Slamware SDP",
        "hardware_version": 1,
        "robot_size": 0.36,
        "low_battery_percentage_for_charging": 0.3,
        "high_battery_percentage_for_charging": 0.7,
        "low_battery_auto_homing": true,
        "sensors": [
            {
                "id": 0,
                "type": "bumper",
                "installation_pose": {
                    "x": 0.12,
                    "y": 0.12,
                    "z": 0.05,
                    "yaw": 0.785398
                }
            },
            {
                "id": 1,
                "type": "bumper",
                "installation_pose": {
                    "x": 0.12,
                    "y": -0.12,
                    "z": 0.05,
                    "yaw": 5.497787
                }
            },
            {
                "id": 2,
                "type": "cliff",
                "installation_pose": {
                    "x": 0.044,
                    "y": 0.1642,
                    "z": -0.02,
                    "yaw": 4.974188
                }
            },
            {
                "id": 3,
                "type": "cliff",
                "installation_pose": {
                    "x": 0.147,
                    "y": 0.085,
                    "z": -0.02,
                    "yaw": 5.759587
                }
            },
            {
                "id": 4,
                "type": "cliff",
                "installation_pose": {
                    "x": 0.147,
                    "y": -0.085,
                    "z": -0.02,
                    "yaw": 0.523599
                }
            },
            {
                "id": 5,
                "type": "cliff",
                "installation_pose": {
                    "x": 0.044,
                    "y": -0.1642,
                    "z": -0.02,
                    "yaw": 1.308997
                }
            }
        ]
    },
    "lidar": {
        "installation_pose": {
            "x": -0.0304,
            "yaw": 3.141592653589793
        }
    },
    "feature": {
        "has_ir_docking_tower": true
    },
    "motion_plan": {
        "side_margin": 0.01,
        "bump_handle_strategy": "default"
    }
}

* Please DO NOT modify this by hand
*/

#include <stdint.h>
#include <stdlib.h>

const unsigned char slamware_config[] = {
0x50,0x04,0x00,0x50,0x0a,0x01,0x10,0xff,0x02,0x30,0x07,0x53,0x6c,0x61,0x6d,0x74,
0x65,0x63,0x03,0x11,0x00,0x10,0x04,0x30,0x0c,0x53,0x6c,0x61,0x6d,0x77,0x61,0x72,
0x65,0x20,0x53,0x44,0x50,0x05,0x10,0x01,0x06,0x20,0xec,0x51,0xb8,0x3e,0x07,0x20,
0x9a,0x99,0x99,0x3e,0x08,0x20,0x33,0x33,0x33,0x3f,0x09,0x60,0x0a,0x40,0x06,0x50,
0x03,0x19,0x10,0x00,0x0b,0x31,0x0c,0x0d,0x50,0x04,0x0e,0x20,0x8f,0xc2,0xf5,0x3d,
0x0f,0x20,0x8f,0xc2,0xf5,0x3d,0x10,0x20,0xcd,0xcc,0x4c,0x3d,0x11,0x20,0xd8,0x0f,
0x49,0x3f,0x50,0x03,0x19,0x10,0x01,0x0b,0x31,0x0c,0x0d,0x50,0x04,0x0e,0x20,0x8f,
0xc2,0xf5,0x3d,0x0f,0x20,0x8f,0xc2,0xf5,0xbd,0x10,0x20,0xcd,0xcc,0x4c,0x3d,0x11,
0x20,0xdf,0xed,0xaf,0x40,0x50,0x03,0x19,0x10,0x02,0x0b,0x31,0x14,0x0d,0x50,0x04,
0x0e,0x20,0x58,0x39,0x34,0x3d,0x0f,0x20,0x0b,0x24,0x28,0x3e,0x10,0x20,0x0a,0xd7,
0xa3,0xbc,0x11,0x20,0x8c,0x2c,0x9f,0x40,0x50,0x03,0x19,0x10,0x03,0x0b,0x31,0x14,
0x0d,0x50,0x04,0x0e,0x20,0x2b,0x87,0x16,0x3e,0x0f,0x20,0x7b,0x14,0xae,0x3d,0x10,
0x20,0x0a,0xd7,0xa3,0xbc,0x11,0x20,0x89,0x4e,0xb8,0x40,0x50,0x03,0x19,0x10,0x04,
0x0b,0x31,0x14,0x0d,0x50,0x04,0x0e,0x20,0x2b,0x87,0x16,0x3e,0x0f,0x20,0x7b,0x14,
0xae,0xbd,0x10,0x20,0x0a,0xd7,0xa3,0xbc,0x11,0x20,0x96,0x0a,0x06,0x3f,0x50,0x03,
0x19,0x10,0x05,0x0b,0x31,0x14,0x0d,0x50,0x04,0x0e,0x20,0x58,0x39,0x34,0x3d,0x0f,
0x20,0x0b,0x24,0x28,0xbe,0x10,0x20,0x0a,0xd7,0xa3,0xbc,0x11,0x20,0x37,0x8d,0xa7,
0x3f,0x18,0x50,0x01,0x0d,0x50,0x02,0x0e,0x20,0x6c,0x09,0xf9,0xbc,0x11,0x20,0xdb,
0x0f,0x49,0x40,0x16,0x50,0x01,0x17,0x60,0x1a,0x50,0x02,0x1e,0x20,0x0a,0xd7,0x23,
0x3c,0x1b,0x31,0x1c
};
const size_t slamware_config_size = 308;
