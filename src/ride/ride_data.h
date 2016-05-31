#pragma region Copyright (c) 2014-2016 OpenRCT2 Developers
/*****************************************************************************
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 *
 * OpenRCT2 is the work of many authors, a full list can be found in contributors.md
 * For more information, visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * A full copy of the GNU General Public License can be found in licence.txt
 *****************************************************************************/
#pragma endregion

#ifndef _RIDE_DATA_H_
#define _RIDE_DATA_H_

#include "../common.h"
#include "ride.h"

typedef struct rct_ride_name_convention {
	rct_string_id vehicle_name;
	rct_string_id structure_name;
	rct_string_id station_name;
	rct_string_id unk_name;
} PACKED rct_ride_name_convention;

typedef struct rct_ride_entrance_definition {
	uint32 sprite_index;
	uint16 height;
	uint16 scrolling_mode;
	rct_string_id string_id;
	uint32 base_image_id;
	uint16 colour_use_flags;
} PACKED rct_ride_entrance_definition;

typedef struct rct_shop_item_string_types {
	rct_string_id singular;			// Balloon
	rct_string_id plural;			// Balloons
	rct_string_id indefinite;		// a Balloon
	rct_string_id display;			// "Diamond Heights" Balloon
} PACKED rct_shop_item_string_types;

typedef struct rct_ride_data_4 {
	uint8 price;
	uint8 price_secondary;
	uint16 flags;
	uint8 default_music;
	uint8 var_3;
	uint8 pad[2];
} PACKED rct_ride_data_4;

typedef struct ride_cost {
	uint16 track_price;
	uint16 support_price;
} PACKED ride_cost;

typedef struct rct_ride_data_5 {
	uint8 max_height;
	uint8 clearance_height;
	sint8 z_offset;
	uint8 max_friction;
	uint8 z;
	uint8 price;
	uint8 bonus_value;		// Deprecated. Use rideBonusValue instead
	uint8 pad;
} PACKED rct_ride_data_5;

typedef struct rct_ride_lift_data {
	uint8 sound_id;
	uint8 minimum_speed;
	uint8 maximum_speed;
} PACKED rct_ride_lift_data;

enum {
	RIDE_TYPE_FLAG4_0 = (1 << 0),
	RIDE_TYPE_FLAG4_MUSIC_ON_DEFAULT = (1 << 1),
	RIDE_TYPE_FLAG4_ALLOW_MUSIC = (1 << 2),
	RIDE_TYPE_FLAG4_3 = (1 << 3),
	RIDE_TYPE_FLAG4_PEEP_CHECK_GFORCES = (1 << 4),
	RIDE_TYPE_FLAG4_HAS_ENTRANCE_EXIT = (1 << 5),
	RIDE_TYPE_FLAG4_6 = (1 << 6),
	RIDE_TYPE_FLAG4_HAS_AIR_TIME = (1 << 7),
	RIDE_TYPE_FLAG4_SINGLE_SESSION = (1 << 8),
	RIDE_TYPE_FLAG4_ALLOW_MULTIPLE_CIRCUITS = (1 << 9),
	RIDE_TYPE_FLAG4_10 = (1 << 10),
	RIDE_TYPE_FLAG4_11 = (1 << 11),
	RIDE_TYPE_FLAG4_TRANSPORT_RIDE = (1 << 12),
	RIDE_TYPE_FLAG4_13 = (1 << 13),
	RIDE_TYPE_FLAG4_14 = (1 << 14),
	RIDE_TYPE_FLAG4_15 = (1 << 15),
};

extern const bool hasRunningTrack[0x60];
extern const uint8 initialUpkeepCosts[0x60];
extern const uint8 costPerTrackPiece[0x60];

extern const uint8 rideUnknownData1[0x60];
extern const bool rideUnknownData2[0x60];
extern const uint8 rideUnknownData3[0x60];
extern const uint8 rideBonusValue[0x60];

extern const rct_ride_name_convention RideNameConvention[96];
extern const uint8 RideAvailableModes[];
extern const uint8 AllRideModesAvailable[];
extern const uint8 RideAvailableBreakdowns[];

extern const rct_ride_entrance_definition RideEntranceDefinitions[RIDE_ENTRANCE_STYLE_COUNT];
extern const rct_ride_lift_data RideLiftData[91];

extern const rct_ride_data_4 RideData4[91];
extern const ride_cost RideTrackCosts[91];
extern const rct_ride_data_5 RideData5[91];

extern const money8 DefaultShopItemPrice[SHOP_ITEM_COUNT];
extern const rct_shop_item_string_types ShopItemStringIds[SHOP_ITEM_COUNT];
extern const uint32 ShopItemImage[SHOP_ITEM_COUNT];

extern const rct_ride_entry_vehicle CableLiftVehicle;

extern const uint16 RideFilmLength[3];
extern const uint16 RideCrookedHouseLength[1];

extern const rating_tuple RideRatings[91];

#endif
