# Copyright (c) 2019 Nordic Semiconductor ASA.
# Copyright (c) 2021 Laird Connectivity.
# SPDX-License-Identifier: Apache-2.0

if ((CONFIG_BOARD_BL5340_DVK_CPUAPP OR CONFIG_BOARD_BL5340_DVK_CPUAPP_NS OR
     CONFIG_BOARD_BL5340PA_DVK_CPUAPP OR CONFIG_BOARD_BL5340PA_DVK_CPUAPP_NS)
    AND CONFIG_BOARD_ENABLE_CPUNET)
zephyr_library()
zephyr_library_sources(bl5340_dvk_cpunet_reset.c)
endif()

if (CONFIG_BOARD_BL5340PA_DVK_CPUAPP AND CONFIG_BT AND NOT DEFINED
    CONFIG_CHECK_RADIO_POWER_LIMITED)
    message(WARNING "
        ************************ WARNING ************************
        * BL5340PA being configured (application core) with     *
        * Bluetooth and without CHECK_RADIO_POWER_LIMITED       *
        * being enabled, note that you are responsible for      *
        * ensuring that you do not breach regulatory limits on  *
        * radio transmit power. Laird Connectivity cannot be    *
        * held responsible for any liability for non-compliance *
        *********************************************************
        \r\n"
    )
endif()

if (CONFIG_BOARD_BL5340PA_DVK_CPUNET AND CONFIG_BT AND NOT DEFINED
    CONFIG_LIMIT_RADIO_POWER)
    message(WARNING "
        ************************ WARNING ************************
        * BL5340PA being configured (network core) with         *
        * Bluetooth and without LIMIT_RADIO_POWER being enabled *
        * note that you are responsible for ensuring that you   *
        * do not breach regulatory limits on radio transmit     *
        * power. Laird Connectivity cannot be held responsible  *
        * for any liability for non-compliance                  *
        *********************************************************
        \r\n"
    )
endif()

if ((CONFIG_BOARD_BL5340PA_DVK_CPUNET OR CONFIG_BOARD_BL5340PA_DVK_CPUAPP) AND
    (CONFIG_IEEE802154 OR CONFIG_ESB))
    message(WARNING "
        ************************ WARNING ************************
        * BL5340PA being configured with 802.15.4 or ESB, note  *
        * that you are responsible for ensuring regulatory      *
        * compliance and to not breach regulatory limits on     *
        * radio transmit power, none of the supplied 802.15.4   *
        * or ESB code does this. Laird Connectivity cannot be   *
        * held responsible for any liability for non-compliance *
        *********************************************************
        \r\n"
    )
endif()

