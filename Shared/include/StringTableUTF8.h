/*
Copyright (c) 1999 - 2010, Vodafone Group Services Ltd
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
    * Neither the name of the Vodafone Group Services Ltd nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef STRINGTABLE_UTF_8_H
#define STRINGTABLE_UTF_8_H

#include "config.h"

class StringTableUTF8 {
public :

   /**
    *   @name Supported languages.
    *   The languages that are supported in this string table. The
    *   languages must be in consecutive order and the value of the
    *   supported languages must be the same as in Item::language.
    *
    */



   enum languageCode {

      ENGLISH	= 0,

      SWEDISH	= 1,

      GERMAN	= 2,

      DANISH	= 3,

      FINNISH	= 4,

      NORWEGIAN	= 5,

      FRENCH	= 6,

      SPANISH	= 7,

      ITALIAN	= 8,

      DUTCH	= 9,

      PORTUGUESE	= 10,

      AMERICAN_ENGLISH	= 11,

      HUNGARIAN	= 12,

      CZECH	= 13,

      GREEK	= 14,

      POLISH	= 15,

      SLOVAK	= 16,

      RUSSIAN	= 17,

      SLOVENIAN	= 18,

      TURKISH	= 19,

      CHINESE	= 20,

      CHINESE_TRADITIONAL	= 21,

      SMSISH_ENG	= 22,

      SMSISH_SWE	= 23,

      SMSISH_GER	= 24,

      SMSISH_DAN	= 25,

      SMSISH_FIN	= 26,

      SMSISH_NOR	= 27,

      SMSISH_FRA	= 28,

      SMSISH_SPA	= 29,

      SMSISH_ITA	= 30,

      SMSISH_DUT	= 31,

      SMSISH_POR	= 32,

      SMSISH_AME	= 33,

      SMSISH_HUN	= 34,

      SMSISH_CZE	= 35,

      SMSISH_GRE	= 36,

      SMSISH_POL	= 37,

      SMSISH_SVK	= 38,

      SMSISH_RUS	= 39,

      SMSISH_SLV	= 40,

      SMSISH_TUR	= 41,

      SMSISH_CHI	= 42,

      SMSISH_ZHT	= 43,


   };


   enum stringCode {

      NOSTRING = 0,
      STREETSEGMENTITEM = 1,
      MUNICIPALITEM = 2,
      WATERITEM = 3,
      PARKITEM = 4,
      FORESTITEM = 5,
      BUILDINGITEM = 6,
      RAILWAYITEM = 7,
      ISLANDITEM = 8,
      STREETITEM = 9,
      COMPANYITEM = 10,
      CATEGORYITEM = 11,
      NULLITEM = 12,
      ZIPCODEITEM = 13,
      BUILTUPAREAITEM = 14,
      CITYPARTITEM = 15,
      ROUTEABLEITEM = 16,
      BUSROUTEITEM = 17,
      FERRYITEM = 18,
      MUNICIPAL = 19,
      BUILT_UP_AREA = 20,
      NOSTREETNUMBERS = 21,
      MIXEDSTREETNUMBERS = 22,
      LEFTEVENSTREETNUMBERS = 23,
      RIGHTEVENSTREETNUMBERS = 24,
      PAVED = 25,
      UNPAVED = 26,
      NORESTRICTIONS = 27,
      NOTHROUGHFARE = 28,
      NOENTRY = 29,
      NOWAY = 30,
      MAINCLASSROAD = 31,
      FIRSTCLASSROAD = 32,
      SECONDCLASSROAD = 33,
      THIRDCLASSROAD = 34,
      FOURTHCLASSROAD = 35,
      MAJORROAD = 36,
      UNKNOWN = 37,
      NOTSUPPORTED = 38,
      NOT = 39,
      OK = 40,
      NOTOK = 41,
      NOTFOUND = 42,
      ERROR_NO_VALID_START_ROUTING_NODE = 43,
      ERROR_NO_VALID_END_ROUTING_NODE = 44,
      ERROR_NO_ROUTE = 45,
      SINGLEPOINT_IN_ROUTE = 46,
      UNDEFINED_TURN = 47,
      MAPNOTFOUND = 48,
      INTERNAL_ERROR_IN_MAP = 49,
      NOT_UNIQUE = 50,
      SWEDEN = 51,
      NORWAY = 52,
      DENMARK = 53,
      FINLAND = 54,
      GERMANY = 55,
      ENGLAND = 56,
      PASSENGERCARS = 57,
      TRANSPORTATIONTRUCK = 58,
      PUBLICBUS = 59,
      BICYCLE = 60,
      TAXI = 61,
      EMERGENCYVEHICLE = 62,
      HIGHOCCUPANCYVEHICLE = 63,
      PEDESTRIAN = 64,
      RESIDENTIALVEHICLE = 65,
      CARWITHTRAILER = 66,
      PRIVATEBUS = 67,
      MILITARYVEHICLE = 68,
      DELIVERYTRUCK = 69,
      MOTORCYCLE = 70,
      MOPED = 71,
      FARMVEHICLE = 72,
      PRIVATEVEHICLE = 73,
      WATERPOLLUTINGLOAD = 74,
      EXPLOSIVELOAD = 75,
      DANGEROUSLOAD = 76,
      PUBLICTRANSPORTATION = 77,
      PREPOSITION_POST_TURN = 78,
      PREPOSITION_POST_OFF_RAMP = 79,
      PREPOSITION_POST_PARK_CAR = 80,
      PREPOSITION_POST_DRIVE_FINALLY = 81,
      RAMP = 82,
      LEFT_TURN = 83,
      LEFT_SERIALNUMBER_PRE_TURN = 84,
      LEFT_SERIALNUMBER_POST_TURN = 85,
      RIGHT_TURN = 86,
      RIGHT_SERIALNUMBER_PRE_TURN = 87,
      RIGHT_SERIALNUMBER_POST_TURN = 88,
      AHEAD_TURN = 89,
      U_TURN = 90,
      FOLLOWROAD_TURN = 91,
      ENTER_ROUNDABOUT_TURN = 92,
      EXIT_ROUNDABOUT_TURN = 93,
      EXIT_ROUNDABOUT_SERIALNUMBER_PRE_TURN = 94,
      EXIT_ROUNDABOUT_SERIALNUMBER_POST_TURN = 95,
      AHEAD_ROUNDABOUT_TURN = 96,
      RIGHT_ROUNDABOUT_TURN = 97,
      LEFT_ROUNDABOUT_TURN = 98,
      OFF_RAMP_TURN = 99,
      ON_RAMP_TURN = 100,
      ENTER_BUS_TURN = 101,
      EXIT_BUS_TURN = 102,
      CHANGE_BUS_TURN = 103,
      PARK_CAR = 104,
      TOTAL_DISTANCE = 105,
      TOTAL_STANDSTILL_TIME = 106,
      TOTAL_TIME = 107,
      DRIVE_FINALLY = 108,
      DRIVE_START = 109,
      DRIVE = 110,
      WALK = 111,
      METERS = 112,
      KILOMETERS = 113,
      FINALY = 114,
      FINALLY_WALK = 115,
      AVERAGE_SPEED = 116,
      KM_PER_HOUR = 117,
      PRE_ROUTE_NUMBER = 118,
      AT_SIGN_READING = 119,
      EXIT = 120,
      ROUTE = 121,
      ROUTE_INFO = 122,
      ROUTE_CONTINUES = 123,
      ROUTE_CONTINUED = 124,
      ORIGIN = 125,
      DESTINATION = 126,
      FIRST_NAME = 127,
      LAST_NAME = 128,
      INTERNAL_SERVER_ERROR = 129,
      METRIC = 130,
      IMPERIAL = 131,
      YES = 132,
      NO = 133,
      PHONE_NBR = 134,
      ACCESS_DENIED = 135,
      UNKNOWN_POSITION = 136,
      DATA_BASE_ERROR_PLEASE_TRY_AGAIN_LATER = 137,
      NAME = 138,
      NEW = 139,
      ADDRESS = 140,
      EOLTYPE_CR = 141,
      EOLTYPE_LF = 142,
      EOLTYPE_CRLF = 143,
      EOLTYPE_AlwaysCR = 144,
      EOLTYPE_AlwaysLF = 145,
      EOLTYPE_AlwaysCRLF = 146,
      EOLTYPE_NOT_DEFINED = 147,
      STREETS = 148,
      ENGLISH_STRING = 149,
      SWEDISH_STRING = 150,
      GERMAN_STRING = 151,
      SPEED_10 = 152,
      SPEED_20 = 153,
      SPEED_30 = 154,
      SPEED_50 = 155,
      SPEED_70 = 156,
      SPEED_90 = 157,
      SPEED_110 = 158,
      UNDEFINED_CROSSING = 159,
      NO_CROSSING = 160,
      CROSSING_3WAYS_T = 161,
      CROSSING_3WAYS_Y = 162,
      CROSSING_4WAYS = 163,
      CROSSING_5WAYS = 164,
      CROSSING_6WAYS = 165,
      CROSSING_7WAYS = 166,
      CROSSING_8WAYS = 167,
      CROSSING_2ROUNDABOUT = 168,
      CROSSING_3ROUNDABOUT = 169,
      CROSSING_4ROUNDABOUT = 170,
      CROSSING_5ROUNDABOUT = 171,
      CROSSING_6ROUNDABOUT = 172,
      CROSSING_7ROUNDABOUT = 173,
      DIR_NORTH = 174,
      DIR_NORTHNORTHEAST = 175,
      DIR_NORTHEAST = 176,
      DIR_EASTNORTHEAST = 177,
      DIR_EAST = 178,
      DIR_EASTSOUTHEAST = 179,
      DIR_SOUTHEAST = 180,
      DIR_SOUTHSOUTHEAST = 181,
      DIR_SOUTH = 182,
      DIR_SOUTHSOUTHWEST = 183,
      DIR_SOUTHWEST = 184,
      DIR_WESTSOUTHWEST = 185,
      DIR_WEST = 186,
      DIR_WESTNORTHWEST = 187,
      DIR_NORTHWEST = 188,
      DIR_NORTHNORTHWEST = 189,
      DIR_FACING = 190,
      DIR_AT = 191,
      SERIAL_EXTENSION_1 = 192,
      SERIAL_EXTENSION_2 = 193,
      SERIAL_EXTENSION_3 = 194,
      SERIAL_EXTENSION_DEFAULT = 195,
      MONTH_1 = 196,
      MONTH_2 = 197,
      MONTH_3 = 198,
      MONTH_4 = 199,
      MONTH_5 = 200,
      MONTH_6 = 201,
      MONTH_7 = 202,
      MONTH_8 = 203,
      MONTH_9 = 204,
      MONTH_10 = 205,
      MONTH_11 = 206,
      MONTH_12 = 207,
      WEEKDAY_1 = 208,
      WEEKDAY_2 = 209,
      WEEKDAY_3 = 210,
      WEEKDAY_4 = 211,
      WEEKDAY_5 = 212,
      WEEKDAY_6 = 213,
      WEEKDAY_7 = 214,
      POSTYPE_NO_POSITIONING = 215,
      ERROR_LOADING_MAP = 216,
      ERROR_MAP_LOADED = 217,
      BELGIUM = 218,
      NETHERLANDS = 219,
      LUXEMBOURG = 220,
      COMPANY = 221,
      AIRPORT = 222,
      AMUSEMENT_PARK = 223,
      ATM = 224,
      AUTOMOBILE_DEALERSHIP = 225,
      BANK = 226,
      BOWLING_CENTRE = 227,
      BUS_STATION = 228,
      BUSINESS_FACILITY = 229,
      CASINO = 230,
      CINEMA = 231,
      CITY_CENTRE = 232,
      CITY_HALL = 233,
      COMMUNITY_CENTRE = 234,
      COMMUTER_RAIL_STATION = 235,
      COURT_HOUSE = 236,
      EXHIBITION_OR_CONFERENCE_CENTRE = 237,
      FERRY_TERMINAL = 238,
      FRONTIER_CROSSING = 239,
      GOLF_COURSE = 240,
      GROCERY_STORE = 241,
      HISTORICAL_MONUMENT = 242,
      HOSPITAL = 243,
      HOTEL = 244,
      ICE_SKATING_RINK = 245,
      LIBRARY = 246,
      MARINA = 247,
      MOTORING_ORGANISATION_OFFICE = 248,
      MUSEUM = 249,
      NIGHTLIFE = 250,
      OPEN_PARKING_AREA = 251,
      PARK_AND_RIDE = 252,
      PARKING_GARAGE = 253,
      PETROL_STATION = 254,
      POLICE_STATION = 255,
      PUBLIC_SPORT_AIRPORT = 256,
      RAILWAY_STATION = 257,
      RECREATION_FACILITY = 258,
      RENT_A_CAR_FACILITY = 259,
      REST_AREA = 260,
      RESTAURANT = 261,
      SCHOOL = 262,
      SHOPPING_CENTRE = 263,
      SKI_RESORT = 264,
      SPORTS_ACTIVITY = 265,
      SPORTS_CENTRE = 266,
      THEATRE = 267,
      TOURIST_ATTRACTION = 268,
      TOURIST_OFFICE = 269,
      UNIVERSITY = 270,
      VEHICLE_REPAIR_FACILITY = 271,
      WINERY = 272,
      UNKNOWN_TYPE = 273,
      AIRPORTITEM = 274,
      AIRCRAFTROADITEM = 275,
      PEDESTRIANAREAITEM = 276,
      MILITARYBASEITEM = 277,
      OVERVIEW_OF_ROUTE = 278,
      KEEP_LEFT = 279,
      KEEP_RIGHT = 280,
      NO_RECIPIENT_PHONE = 281,
      NO_CONTACT_WITH_SMSC = 282,
      ERROR_FROM_SMSC = 283,
      WRONG_ANSWER_FROM_SMSC = 284,
      MESSAGE_TOO_LONG = 285,
      WRONG_FORMAT_FOR_ADDRESS = 286,
      CROSSING_4ROUNDABOUT_ASYM = 287,
      NOT_ALLOWED = 288,
      ONE_OR_MORE_INVALID_DESTS = 289,
      ONE_OR_MORE_INVALID_ORIGS = 290,
      TOO_FAR_TO_WALK = 291,
      U_TURN_ROUNDABOUT_TURN = 292,
      TRAM_STATION = 293,
      START_DIRECTION_NBR_UNKNOWN = 294,
      START_DIRECTION_NBR_INCREASING = 295,
      START_DIRECTION_NBR_DECREASING = 296,
      START_DIRECTION_ODDEVEN_UNKNOWN = 297,
      START_DIRECTION_ODDEVEN_LEFTODD = 298,
      START_DIRECTION_ODDEVEN_RIGHTODD = 299,
      INDIVIDUALBUILDINGITEM = 300,
      SUBWAYLINEITEM = 301,
      DRIVE_START_WITH_UTURN = 302,
      PREPOSITION_U_TURN = 303,
      PARK_BIKE = 304,
      PREPOSITION_POST_PARK_BIKE = 305,
      EXIT_ROUNDABOUT_TURN_WALK = 306,
      SHOPPING = 307,
      SPORT = 308,
      ACCOMMODATION = 309,
      MUSIC = 310,
      DIRECTIONS = 311,
      VEHICLE = 312,
      TIMEOUT_ERROR = 313,
      YOUR_LOCAL_MAP = 314,
      INDUSTRIAL_COMPLEX = 315,
      CEMETERY = 316,
      PUBLIC_INDIVIDUAL_BUILDING = 317,
      OTHER_INDIVIDUAL_BUILDING = 318,
      PROBLEM_WITH_ROUTE_DESCRIPTION_CLICK_HERE_STR = 319,
      PART = 320,
      PROBLEM_WITH_MESSAGE_CLICK_HERE_STR = 321,
      ENTER_FERRY_TURN = 322,
      EXIT_FERRY_TURN = 323,
      CHANGE_FERRY_TURN = 324,
      SUBWAYLINE = 325,
      CATEGORY = 326,
      LMLOCATION_AFTER = 327,
      LMLOCATION_BEFORE = 328,
      LMLOCATION_IN = 329,
      LMLOCATION_AT = 330,
      LMLOCATION_PASS = 331,
      LMLOCATION_INTO = 332,
      LMSIDE_LEFT = 333,
      LMSIDE_RIGHT = 334,
      LMSIDE_BOTH = 335,
      RIDE = 336,
      USA = 337,
      LMLOCATION_ARRIVE = 338,
      AIRLINE_ACCESS = 339,
      BEACH = 340,
      CAMPING_GROUND = 341,
      CAR_DEALER = 342,
      CONCERT_HALL = 343,
      TOLL_ROAD = 344,
      CULTURAL_CENTRE = 345,
      DENTIST = 346,
      DOCTOR = 347,
      DRIVE_THROUGH_BOTTLE_SHOP = 348,
      EMBASSY = 349,
      ENTRY_POINT = 350,
      GOVERNMENT_OFFICE = 351,
      MOUNTAIN_PASS = 352,
      MOUNTAIN_PEAK = 353,
      MUSIC_CENTRE = 354,
      OPERA = 355,
      PARK_AND_RECREATION_AREA = 356,
      PHARMACY = 357,
      PLACE_OF_WORSHIP = 358,
      RESTAURANT_AREA = 359,
      SCENIC_VIEW = 360,
      STADIUM = 361,
      SWIMMING_POOL = 362,
      TENNIS_COURT = 363,
      VETRINARIAN = 364,
      WATER_SPORTS = 365,
      YACHT_BASIN = 366,
      ZOO = 367,
      RENT_A_CAR_PARKING = 368,
      IRREGULARSTREETNUMBERS = 369,
      POOR_CONDITION = 370,
      SWITZERLAND = 371,
      ENDOFROAD_LEFT_TURN = 372,
      ENDOFROAD_RIGHT_TURN = 373,
      DANISH_STRING = 374,
      FINNISH_STRING = 375,
      NORWEGIAN_STRING = 376,
      SERIAL_EXTENSION_ALT = 377,
      LMLOCATION_ROADNAMECHANGE = 378,
      AUSTRIA = 379,
      PASSCARCLOSEDSEASON = 380,
      POST_OFFICE = 381,
      LM_PASS_STREET_NONAME = 382,
      FRANCE = 383,
      OUTSIDE_ALLOWED_AREA = 384,
      ORIGIN_OUTSIDE_ALLOWED_AREA = 385,
      DESTINATION_OUTSIDE_ALLOWED_AREA = 386,
      SPAIN = 387,
      ANDORRA = 388,
      LIECHTENSTEIN = 389,
      ITALY = 390,
      MONACO = 391,
      IRELAND = 392,
      PORTUGAL = 393,
      LEFT_OFF_RAMP_TURN = 394,
      RIGHT_OFF_RAMP_TURN = 395,
      CZECH_REPUBLIC = 396,
      UNITED_KINGDOM = 397,
      FRENCH_STRING = 398,
      CZECH_STRING = 399,
      ITALIAN_STRING = 400,
      PORTUGUESE_STRING = 401,
      SPANISH_STRING = 402,
      DUTCH_STRING = 403,
      WELCH_STRING = 404,
      AND_SIGN = 405,
      OFF_MAIN_TURN = 406,
      ON_MAIN_TURN = 407,
      MOBILE_PHONENUMBER = 408,
      DISTURED_ROUTE = 409,
      CANADA = 410,
      VIS_HOUSE_NBR = 411,
      FAX = 412,
      EMAIL = 413,
      URL = 414,
      BRANDNAME = 415,
      SHORT_DESCRIPTION = 416,
      LONG_DESCRIPTION = 417,
      STATE = 418,
      NEIGHBORHOOD = 419,
      OPEN_HOURS = 420,
      NEAREST_TRAIN = 421,
      START_DATE = 422,
      END_DATE = 423,
      START_TIME = 424,
      END_TIME = 425,
      ACCOMMODATION_TYPE = 426,
      CHECK_IN = 427,
      CHECK_OUT = 428,
      NBR_OF_ROOMS = 429,
      SINGLE_ROOM_FROM = 430,
      DOUBLE_ROOM_FROM = 431,
      TRIPLE_ROOM_FROM = 432,
      SUITE_FROM = 433,
      EXTRA_BED_FROM = 434,
      WEEKEND_RATE = 435,
      NONHOTEL_COST = 436,
      BREAKFAST = 437,
      HOTEL_SERVICES = 438,
      CREDIT_CARD = 439,
      SPECIAL_FEATURE = 440,
      CONFERENCES = 441,
      AVERAGE_COST = 442,
      BOOKING_ADVISABLE = 443,
      ADMISSION_CHARGE = 444,
      HOME_DELIVERY = 445,
      DISABLED_ACCESS = 446,
      TAKEAWAY_AVAILABLE = 447,
      ALLOWED_TO_BRING_ALCOHOL = 448,
      TYPE_FOOD = 449,
      DECOR = 450,
      IMAGE = 451,
      AMERICAN_STRING = 452,
      ACCIDENT_LM = 453,
      ROADWORK_LM = 454,
      CAMERA_LM = 455,
      SPEED_TRAP_LM = 456,
      OTHER_TRAFF_LM = 457,
      DETOUR_LM = 458,
      ENDOF_DETOUR_LM = 459,
      HUNGARY = 460,
      POLAND = 461,
      GREECE = 462,
      HUNGARIAN_STRING = 463,
      ISRAEL = 464,
      BORDERITEM = 465,
      OWNER = 466,
      PRICE_PETROL_SUPERPLUS = 467,
      PRICE_PETROL_SUPER = 468,
      PRICE_PETROL_NORMAL = 469,
      PRICE_DIESEL = 470,
      PRICE_BIODIESEL = 471,
      POI_SHOP = 472,
      WLAN = 473,
      POI_NOTYPE = 474,
      RIGHTS_AVAILABILITY_KEY = 475,
      RIGHTS_AVAILABILITY_PREFIX = 476,
      RIGHTS_AVAILABILITY_POSTFIX = 477,
      BRAZIL = 478,
      SLOVAKIA = 479,
      RUSSIA = 480,
      TURKEY = 481,
      SLOVENIA = 482,
      BULGARIA = 483,
      ROMANIA = 484,
      UKRAINE = 485,
      SERBIA_MONTENEGRO = 486,
      CROATIA = 487,
      BOSNIA = 488,
      MOLDOVA = 489,
      MACEDONIA = 490,
      ESTONIA = 491,
      LATVIA = 492,
      LITHUANIA = 493,
      BELARUS = 494,
      MALTA = 495,
      CYPRUS = 496,
      ICELAND = 497,
      GREEK_STRING = 498,
      POLISH_STRING = 499,
      SLOVAK_STRING = 500,
      RUSSIAN_STRING = 501,
      TURKISH_STRING = 502,
      SLOVENIAN_STRING = 503,
      BULGARIAN_STRING = 504,
      ROMANIAN_STRING = 505,
      UKRAINIAN_STRING = 506,
      SERBIAN_STRING = 507,
      CROATIAN_STRING = 508,
      BOSNIAN_STRING = 509,
      MOLDOVAN_STRING = 510,
      MACEDONIAN_STRING = 511,
      ESTONIAN_STRING = 512,
      LATVIAN_STRING = 513,
      LITHUANIAN_STRING = 514,
      BELARUSIAN_STRING = 515,
      MALTESE_STRING = 516,
      ICELANDIC_STRING = 517,
      HONG_KONG = 518,
      SINGAPORE = 519,
      BEST_GAS_PRICES = 520,
      SUPPLIER = 521,
      COUNTRY = 522,
      AUSTRALIA = 523,
      UNITED_ARAB_EMIRATES = 524,
      BAHRAIN = 525,
      FREE_OF_CHARGE = 526,
      AFGHANISTAN = 527,
      ALBANIA = 528,
      ALGERIA = 529,
      AMERICAN_SAMOA = 530,
      ANGOLA = 531,
      ANGUILLA = 532,
      ANTARCTICA = 533,
      ANTIGUA_AND_BARBUDA = 534,
      ARGENTINA = 535,
      ARMENIA = 536,
      ARUBA = 537,
      AZERBAIJAN = 538,
      BAHAMAS = 539,
      BANGLADESH = 540,
      BARBADOS = 541,
      BELIZE = 542,
      BENIN = 543,
      BERMUDA = 544,
      BHUTAN = 545,
      BOLIVIA = 546,
      BOTSWANA = 547,
      BRITISH_VIRGIN_ISLANDS = 548,
      BRUNEI_DARUSSALAM = 549,
      BURKINA_FASO = 550,
      BURUNDI = 551,
      CAMBODIA = 552,
      CAMEROON = 553,
      CAPE_VERDE = 554,
      CAYMAN_ISLANDS = 555,
      CENTRAL_AFRICAN_REPUBLIC = 556,
      CHAD = 557,
      CHILE = 558,
      CHINA = 559,
      COLOMBIA = 560,
      COMOROS = 561,
      CONGO = 562,
      COOK_ISLANDS = 563,
      COSTA_RICA = 564,
      CUBA = 565,
      DJIBOUTI = 566,
      DOMINICA = 567,
      DOMINICAN_REPUBLIC = 568,
      DR_CONGO = 569,
      ECUADOR = 570,
      EGYPT = 571,
      EL_SALVADOR = 572,
      EQUATORIAL_GUINEA = 573,
      ERITREA = 574,
      ETHIOPIA = 575,
      FAEROE_ISLANDS = 576,
      FALKLAND_ISLANDS = 577,
      FIJI = 578,
      FRENCH_GUIANA = 579,
      FRENCH_POLYNESIA = 580,
      GABON = 581,
      GAMBIA = 582,
      GEORGIA_COUNTRY = 583,
      GHANA = 584,
      GREENLAND = 585,
      GRENADA = 586,
      GUADELOUPE = 587,
      GUAM = 588,
      GUATEMALA = 589,
      GUINEA = 590,
      GUINEA_BISSAU = 591,
      GUYANA = 592,
      HAITI = 593,
      HONDURAS = 594,
      INDIA = 595,
      INDONESIA = 596,
      IRAN = 597,
      IRAQ = 598,
      IVORY_COAST = 599,
      JAMAICA = 600,
      JAPAN = 601,
      JORDAN = 602,
      KAZAKHSTAN = 603,
      KENYA = 604,
      KIRIBATI = 605,
      KUWAIT = 606,
      KYRGYZSTAN = 607,
      LAOS = 608,
      LEBANON = 609,
      LESOTHO = 610,
      LIBERIA = 611,
      LIBYA = 612,
      MACAO = 613,
      MADAGASCAR = 614,
      MALAWI = 615,
      MALAYSIA = 616,
      MALDIVES = 617,
      MALI = 618,
      MARSHALL_ISLANDS = 619,
      MARTINIQUE = 620,
      MAURITANIA = 621,
      MAURITIUS = 622,
      MAYOTTE = 623,
      MEXICO = 624,
      MICRONESIA = 625,
      MONGOLIA = 626,
      MONTSERRAT = 627,
      MOROCCO = 628,
      MOZAMBIQUE = 629,
      MYANMAR = 630,
      NAMIBIA = 631,
      NAURU = 632,
      NEPAL = 633,
      NETHERLANDS_ANTILLES = 634,
      NEW_CALEDONIA = 635,
      NEW_ZEALAND = 636,
      NICARAGUA = 637,
      NIGER = 638,
      NIGERIA = 639,
      NIUE = 640,
      NORTHERN_MARIANA_ISLANDS = 641,
      NORTH_KOREA = 642,
      OCCUPIED_PALESTINIAN_TERRITORY = 643,
      OMAN = 644,
      PAKISTAN = 645,
      PALAU = 646,
      PANAMA = 647,
      PAPUA_NEW_GUINEA = 648,
      PARAGUAY = 649,
      PERU = 650,
      PHILIPPINES = 651,
      PITCAIRN = 652,
      QATAR = 653,
      REUNION = 654,
      RWANDA = 655,
      SAINT_HELENA = 656,
      SAINT_KITTS_AND_NEVIS = 657,
      SAINT_LUCIA = 658,
      SAINT_PIERRE_AND_MIQUELON = 659,
      SAINT_VINCENT_AND_THE_GRENADINES = 660,
      SAMOA = 661,
      SAO_TOME_AND_PRINCIPE = 662,
      SAUDI_ARABIA = 663,
      SENEGAL = 664,
      SEYCHELLES = 665,
      SIERRA_LEONE = 666,
      SOLOMON_ISLANDS = 667,
      SOMALIA = 668,
      SOUTH_AFRICA = 669,
      SOUTH_KOREA = 670,
      SRI_LANKA = 671,
      SUDAN = 672,
      SURINAME = 673,
      SVALBARD_AND_JAN_MAYEN = 674,
      SWAZILAND = 675,
      SYRIA = 676,
      TAIWAN = 677,
      TAJIKISTAN = 678,
      TANZANIA = 679,
      THAILAND = 680,
      TIMOR_LESTE = 681,
      TOGO = 682,
      TOKELAU = 683,
      TONGA = 684,
      TRINIDAD_AND_TOBAGO = 685,
      TUNISIA = 686,
      TURKMENISTAN = 687,
      TURKS_AND_CAICOS_ISLANDS = 688,
      TUVALU = 689,
      UGANDA = 690,
      UNITED_STATES_MINOR_OUTLYING_ISLANDS = 691,
      UNITED_STATES_VIRGIN_ISLANDS = 692,
      URUGUAY = 693,
      UZBEKISTAN = 694,
      VANUATU = 695,
      VENEZUELA = 696,
      VIETNAM = 697,
      WALLIS_AND_FUTUNA_ISLANDS = 698,
      WESTERN_SAHARA = 699,
      YEMEN = 700,
      ZAMBIA = 701,
      ZIMBABWE = 702,
      SEARCH_WORD = 703,
      LAND_AREA = 704,
      POST_ADDRESS = 705,
      POST_ZIPCODEITEM = 706,
      POST_BUILT_UP_AREA = 707,
      OPEN_FOR_SEASON = 708,
      SKI_MOUNTAIN_MIN_MAX_HEIGHT = 709,
      SNOW_DEPTH_MOUNTAIN_VALLEY = 710,
      SNOW_QUALITY = 711,
      LIFTS_OPEN_TOTAL = 712,
      SKI_SLOPES_OPEN_TOTAL = 713,
      CROSS_COUNTRY_SKIING_KM = 714,
      GLACIER_AREA = 715,
      LAST_SNOWFALL = 716,
      ENTERTAINMENT = 717,
      LEISURE = 718,
      PARKING = 719,
      TOURISM = 720,
      CHURCH = 721,
      TRAVEL_TERMINAL = 722,
      WIFI_SPOT = 723,
      OTHERS = 724,
      IMPERIAL_FEET = 725,
      IMPERIAL_YARDS = 726,
      IMPERIAL_MILES = 727,
      MOSQUE = 728,
      SYNAGOGUE = 729,
      ZIPAREAITEM = 730,
      MPH = 731,
      SEARCH_HEADING_PLACES = 732,
      SEARCH_HEADING_ADDRESSES = 733,
      WAYFINDER_JAVA_POPUP_TRIAL_MODE = 734,
      HINDU_TEMPLE = 735,
      BUDDHIST_SITE = 736,
      SUBWAY_STATION = 737,
      CAFE = 738,
      LOCAL_RAIL = 739,
      TRAFFIC_ABL = 740,
      TRAFFIC_ABX = 741,
      TRAFFIC_ACA = 742,
      TRAFFIC_ACB = 743,
      TRAFFIC_ACD = 744,
      TRAFFIC_ACE = 745,
      TRAFFIC_ACF = 746,
      TRAFFIC_ACH = 747,
      TRAFFIC_ACI = 748,
      TRAFFIC_ACL = 749,
      TRAFFIC_ACM = 750,
      TRAFFIC_ACS = 751,
      TRAFFIC_ACW = 752,
      TRAFFIC_ACX = 753,
      TRAFFIC_ACZ = 754,
      TRAFFIC_AIC = 755,
      TRAFFIC_AIR = 756,
      TRAFFIC_AJA = 757,
      TRAFFIC_AJC = 758,
      TRAFFIC_AJT = 759,
      TRAFFIC_ALA = 760,
      TRAFFIC_ALC = 761,
      TRAFFIC_ALL = 762,
      TRAFFIC_ALR = 763,
      TRAFFIC_ANH = 764,
      TRAFFIC_ANL = 765,
      TRAFFIC_ANM = 766,
      TRAFFIC_AOI = 767,
      TRAFFIC_AOL = 768,
      TRAFFIC_AOV = 769,
      TRAFFIC_APF = 770,
      TRAFFIC_APT = 771,
      TRAFFIC_AQD = 772,
      TRAFFIC_ASP = 773,
      TRAFFIC_ATR = 774,
      TRAFFIC_AVL = 775,
      TRAFFIC_AVS = 776,
      TRAFFIC_BCL = 777,
      TRAFFIC_BDB = 778,
      TRAFFIC_BDX = 779,
      TRAFFIC_BKD = 780,
      TRAFFIC_BLI = 781,
      TRAFFIC_BLO = 782,
      TRAFFIC_BLS = 783,
      TRAFFIC_BRB = 784,
      TRAFFIC_BRC = 785,
      TRAFFIC_BRP = 786,
      TRAFFIC_BSI = 787,
      TRAFFIC_BUN = 788,
      TRAFFIC_BWM = 789,
      TRAFFIC_CAA = 790,
      TRAFFIC_CAC = 791,
      TRAFFIC_CAL = 792,
      TRAFFIC_CBW = 793,
      TRAFFIC_CCB = 794,
      TRAFFIC_CCC = 795,
      TRAFFIC_CHI = 796,
      TRAFFIC_CLE = 797,
      TRAFFIC_CLW = 798,
      TRAFFIC_CON = 799,
      TRAFFIC_COO = 800,
      TRAFFIC_COW = 801,
      TRAFFIC_CPW = 802,
      TRAFFIC_CRC = 803,
      TRAFFIC_CRX = 804,
      TRAFFIC_CTR = 805,
      TRAFFIC_CTT = 806,
      TRAFFIC_CTX = 807,
      TRAFFIC_CV1 = 808,
      TRAFFIC_CV3 = 809,
      TRAFFIC_CWC = 810,
      TRAFFIC_CVX = 811,
      TRAFFIC_CVY = 812,
      TRAFFIC_CYC = 813,
      TRAFFIC_DCD = 814,
      TRAFFIC_DCE = 815,
      TRAFFIC_DCL = 816,
      TRAFFIC_DCN = 817,
      TRAFFIC_DCZ = 818,
      TRAFFIC_DEI = 819,
      TRAFFIC_DEU = 820,
      TRAFFIC_DEX = 821,
      TRAFFIC_DIP = 822,
      TRAFFIC_DLL = 823,
      TRAFFIC_DLY = 824,
      TRAFFIC_DO = 825,
      TRAFFIC_DPN = 826,
      TRAFFIC_DUD = 827,
      TRAFFIC_DVL = 828,
      TRAFFIC_DXX = 829,
      TRAFFIC_EAM = 830,
      TRAFFIC_EBA = 831,
      TRAFFIC_EBF = 832,
      TRAFFIC_EBG = 833,
      TRAFFIC_EBT = 834,
      TRAFFIC_ECL = 835,
      TRAFFIC_ECM = 836,
      TRAFFIC_ECR = 837,
      TRAFFIC_ECY = 838,
      TRAFFIC_EFA = 839,
      TRAFFIC_EFM = 840,
      TRAFFIC_EFR = 841,
      TRAFFIC_EGT = 842,
      TRAFFIC_EHL = 843,
      TRAFFIC_EIS = 844,
      TRAFFIC_EMH = 845,
      TRAFFIC_EMR = 846,
      TRAFFIC_EMT = 847,
      TRAFFIC_EMV = 848,
      TRAFFIC_EMX = 849,
      TRAFFIC_EPD = 850,
      TRAFFIC_EPR = 851,
      TRAFFIC_EQD = 852,
      TRAFFIC_ERA = 853,
      TRAFFIC_ESA = 854,
      TRAFFIC_ESH = 855,
      TRAFFIC_ESI = 856,
      TRAFFIC_ESJ = 857,
      TRAFFIC_ESM = 858,
      TRAFFIC_ESO = 859,
      TRAFFIC_ESP = 860,
      TRAFFIC_ESS = 861,
      TRAFFIC_EST = 862,
      TRAFFIC_ESX = 863,
      TRAFFIC_ESY = 864,
      TRAFFIC_ETN = 865,
      TRAFFIC_ETO = 866,
      TRAFFIC_ETT = 867,
      TRAFFIC_EVA = 868,
      TRAFFIC_EVC = 869,
      TRAFFIC_EVD = 870,
      TRAFFIC_EVF = 871,
      TRAFFIC_EVM = 872,
      TRAFFIC_EVP = 873,
      TRAFFIC_EWS = 874,
      TRAFFIC_EWT = 875,
      TRAFFIC_EVX = 876,
      TRAFFIC_EXB = 877,
      TRAFFIC_EXC = 878,
      TRAFFIC_EXS = 879,
      TRAFFIC_FFX = 880,
      TRAFFIC_FIG = 881,
      TRAFFIC_FIR = 882,
      TRAFFIC_FLD = 883,
      TRAFFIC_FLF = 884,
      TRAFFIC_FLO = 885,
      TRAFFIC_FLT = 886,
      TRAFFIC_FOD = 887,
      TRAFFIC_FOF = 888,
      TRAFFIC_FOG = 889,
      TRAFFIC_FOP = 890,
      TRAFFIC_FOX = 891,
      TRAFFIC_FPC = 892,
      TRAFFIC_FRH = 893,
      TRAFFIC_FRO = 894,
      TRAFFIC_FSN = 895,
      TRAFFIC_FUE = 896,
      TRAFFIC_FUN = 897,
      TRAFFIC_GAL = 898,
      TRAFFIC_GAS = 899,
      TRAFFIC_GMW = 900,
      TRAFFIC_GP = 901,
      TRAFFIC_GUN = 902,
      TRAFFIC_HAD = 903,
      TRAFFIC_HAI = 904,
      TRAFFIC_HAX = 905,
      TRAFFIC_HAZ = 906,
      TRAFFIC_HBD = 907,
      TRAFFIC_HLL = 908,
      TRAFFIC_HLT = 909,
      TRAFFIC_HSC = 910,
      TRAFFIC_HUR = 911,
      TRAFFIC_IAV = 912,
      TRAFFIC_IBU = 913,
      TRAFFIC_ICP = 914,
      TRAFFIC_IMA = 915,
      TRAFFIC_IMP = 916,
      TRAFFIC_INS = 917,
      TRAFFIC_IVD = 918,
      TRAFFIC_LAP = 919,
      TRAFFIC_LB1 = 920,
      TRAFFIC_LB2 = 921,
      TRAFFIC_LB3 = 922,
      TRAFFIC_LBA = 923,
      TRAFFIC_LBB = 924,
      TRAFFIC_LBC = 925,
      TRAFFIC_LBD = 926,
      TRAFFIC_LBE = 927,
      TRAFFIC_LBH = 928,
      TRAFFIC_LBK = 929,
      TRAFFIC_LBL = 930,
      TRAFFIC_LBP = 931,
      TRAFFIC_LBR = 932,
      TRAFFIC_LBT = 933,
      TRAFFIC_LBV = 934,
      TRAFFIC_LBX = 935,
      TRAFFIC_LC1 = 936,
      TRAFFIC_LC2 = 937,
      TRAFFIC_LC3 = 938,
      TRAFFIC_LCA = 939,
      TRAFFIC_LCB = 940,
      TRAFFIC_LCC = 941,
      TRAFFIC_LCD = 942,
      TRAFFIC_LCE = 943,
      TRAFFIC_LCF = 944,
      TRAFFIC_LCH = 945,
      TRAFFIC_LCI = 946,
      TRAFFIC_LCL = 947,
      TRAFFIC_LCP = 948,
      TRAFFIC_LCR = 949,
      TRAFFIC_LCS = 950,
      TRAFFIC_LCT = 951,
      TRAFFIC_LCV = 952,
      TRAFFIC_LCW = 953,
      TRAFFIC_LLB = 954,
      TRAFFIC_LLC = 955,
      TRAFFIC_LLD = 956,
      TRAFFIC_LLL = 957,
      TRAFFIC_LLT = 958,
      TRAFFIC_LO1 = 959,
      TRAFFIC_LO2 = 960,
      TRAFFIC_LO3 = 961,
      TRAFFIC_LPB = 962,
      TRAFFIC_LPC = 963,
      TRAFFIC_LPX = 964,
      TRAFFIC_LRR = 965,
      TRAFFIC_LRS = 966,
      TRAFFIC_LRX = 967,
      TRAFFIC_LS1 = 968,
      TRAFFIC_LS2 = 969,
      TRAFFIC_LS3 = 970,
      TRAFFIC_LS4 = 971,
      TRAFFIC_LS5 = 972,
      TRAFFIC_LS6 = 973,
      TRAFFIC_LSG = 974,
      TRAFFIC_LSL = 975,
      TRAFFIC_LSO = 976,
      TRAFFIC_LSR = 977,
      TRAFFIC_LTH = 978,
      TRAFFIC_LTM = 979,
      TRAFFIC_LVB = 980,
      TRAFFIC_MAR = 981,
      TRAFFIC_MHR = 982,
      TRAFFIC_MIL = 983,
      TRAFFIC_MKT = 984,
      TRAFFIC_MSR = 985,
      TRAFFIC_MUD = 986,
      TRAFFIC_MVL = 987,
      TRAFFIC_NAR = 988,
      TRAFFIC_NCR = 989,
      TRAFFIC_NDT = 990,
      TRAFFIC_NIA = 991,
      TRAFFIC_NLS = 992,
      TRAFFIC_NML = 993,
      TRAFFIC_NOO = 994,
      TRAFFIC_NRL = 995,
      TRAFFIC_NUL = 996,
      TRAFFIC_OBR = 997,
      TRAFFIC_OCC = 998,
      TRAFFIC_OCL = 999,
      TRAFFIC_OHV = 1000,
      TRAFFIC_OHW = 1001,
      TRAFFIC_OHX = 1002,
      TRAFFIC_OIL = 1003,
      TRAFFIC_OMV = 1004,
      TRAFFIC_OPE = 1005,
      TRAFFIC_OSI = 1006,
      TRAFFIC_OWW = 1007,
      TRAFFIC_PAC = 1008,
      TRAFFIC_PCB = 1009,
      TRAFFIC_PCC = 1010,
      TRAFFIC_PEO = 1011,
      TRAFFIC_PFN = 1012,
      TRAFFIC_PFS = 1013,
      TRAFFIC_PIX = 1014,
      TRAFFIC_PKO = 1015,
      TRAFFIC_PKT = 1016,
      TRAFFIC_PMN = 1017,
      TRAFFIC_PMS = 1018,
      TRAFFIC_PRA = 1019,
      TRAFFIC_PRC = 1020,
      TRAFFIC_PRI = 1021,
      TRAFFIC_PRL = 1022,
      TRAFFIC_PRN = 1023,
      TRAFFIC_PRO = 1024,
      TRAFFIC_PRS = 1025,
      TRAFFIC_PRV = 1026,
      TRAFFIC_PRX = 1027,
      TRAFFIC_PSA = 1028,
      TRAFFIC_PSL = 1029,
      TRAFFIC_PSN = 1030,
      TRAFFIC_PSR = 1031,
      TRAFFIC_PSS = 1032,
      TRAFFIC_PTB = 1033,
      TRAFFIC_PTC = 1034,
      TRAFFIC_PTH = 1035,
      TRAFFIC_PTN = 1036,
      TRAFFIC_PTS = 1037,
      TRAFFIC_RAC = 1038,
      TRAFFIC_RAD = 1039,
      TRAFFIC_RAF = 1040,
      TRAFFIC_RAH = 1041,
      TRAFFIC_RAI = 1042,
      TRAFFIC_RBA = 1043,
      TRAFFIC_RBD = 1044,
      TRAFFIC_RBE = 1045,
      TRAFFIC_RBI = 1046,
      TRAFFIC_RBL = 1047,
      TRAFFIC_RBM = 1048,
      TRAFFIC_RBX = 1049,
      TRAFFIC_RC2 = 1050,
      TRAFFIC_RCA = 1051,
      TRAFFIC_RCB = 1052,
      TRAFFIC_RCD = 1053,
      TRAFFIC_RCE = 1054,
      TRAFFIC_RCI = 1055,
      TRAFFIC_RCL = 1056,
      TRAFFIC_RCP = 1057,
      TRAFFIC_RCR = 1058,
      TRAFFIC_RCT = 1059,
      TRAFFIC_RCW = 1060,
      TRAFFIC_RCX = 1061,
      TRAFFIC_RDW = 1062,
      TRAFFIC_REB = 1063,
      TRAFFIC_REC = 1064,
      TRAFFIC_REL = 1065,
      TRAFFIC_REO = 1066,
      TRAFFIC_RET = 1067,
      TRAFFIC_REW = 1068,
      TRAFFIC_REX = 1069,
      TRAFFIC_RIC = 1070,
      TRAFFIC_RIN = 1071,
      TRAFFIC_RIS = 1072,
      TRAFFIC_RLS = 1073,
      TRAFFIC_RLU = 1074,
      TRAFFIC_RMD = 1075,
      TRAFFIC_RMK = 1076,
      TRAFFIC_RMM = 1077,
      TRAFFIC_RMP = 1078,
      TRAFFIC_RMV = 1079,
      TRAFFIC_RMW = 1080,
      TRAFFIC_RMX = 1081,
      TRAFFIC_RNL = 1082,
      TRAFFIC_RNW = 1083,
      TRAFFIC_ROA = 1084,
      TRAFFIC_ROC = 1085,
      TRAFFIC_RPB = 1086,
      TRAFFIC_RPC = 1087,
      TRAFFIC_RRI = 1088,
      TRAFFIC_RRU = 1089,
      TRAFFIC_RRW = 1090,
      TRAFFIC_RSB = 1091,
      TRAFFIC_RSI = 1092,
      TRAFFIC_RSL = 1093,
      TRAFFIC_RSN = 1094,
      TRAFFIC_RSO = 1095,
      TRAFFIC_RSR = 1096,
      TRAFFIC_RTO = 1097,
      TRAFFIC_RWC = 1098,
      TRAFFIC_RWI = 1099,
      TRAFFIC_RWK = 1100,
      TRAFFIC_RWL = 1101,
      TRAFFIC_RWM = 1102,
      TRAFFIC_RWR = 1103,
      TRAFFIC_RWX = 1104,
      TRAFFIC_RXB = 1105,
      TRAFFIC_RXC = 1106,
      TRAFFIC_RXD = 1107,
      TRAFFIC_RXO = 1108,
      TRAFFIC_SAB = 1109,
      TRAFFIC_SAL = 1110,
      TRAFFIC_SAN = 1111,
      TRAFFIC_SAO = 1112,
      TRAFFIC_SAT = 1113,
      TRAFFIC_SCI = 1114,
      TRAFFIC_SCN = 1115,
      TRAFFIC_SEW = 1116,
      TRAFFIC_SEX = 1117,
      TRAFFIC_SFB = 1118,
      TRAFFIC_SFC = 1119,
      TRAFFIC_SFH = 1120,
      TRAFFIC_SFL = 1121,
      TRAFFIC_SFO = 1122,
      TRAFFIC_SHL = 1123,
      TRAFFIC_SHX = 1124,
      TRAFFIC_SLT = 1125,
      TRAFFIC_SLU = 1126,
      TRAFFIC_SM = 1127,
      TRAFFIC_SMC = 1128,
      TRAFFIC_SMG = 1129,
      TRAFFIC_SMO = 1130,
      TRAFFIC_SMV = 1131,
      TRAFFIC_SMX = 1132,
      TRAFFIC_SN = 1133,
      TRAFFIC_SND = 1134,
      TRAFFIC_SNF = 1135,
      TRAFFIC_SNP = 1136,
      TRAFFIC_SNR = 1137,
      TRAFFIC_SNS = 1138,
      TRAFFIC_SNW = 1139,
      TRAFFIC_SNX = 1140,
      TRAFFIC_SPC = 1141,
      TRAFFIC_SPL = 1142,
      TRAFFIC_SPY = 1143,
      TRAFFIC_SR = 1144,
      TRAFFIC_SRC = 1145,
      TRAFFIC_SRO = 1146,
      TRAFFIC_SRX = 1147,
      TRAFFIC_SSF = 1148,
      TRAFFIC_SSM = 1149,
      TRAFFIC_SSO = 1150,
      TRAFFIC_STD = 1151,
      TRAFFIC_STF = 1152,
      TRAFFIC_STI = 1153,
      TRAFFIC_STM = 1154,
      TRAFFIC_STU = 1155,
      TRAFFIC_SUB = 1156,
      TRAFFIC_SWA = 1157,
      TRAFFIC_SWC = 1158,
      TRAFFIC_SVH = 1159,
      TRAFFIC_SWH = 1160,
      TRAFFIC_SWI = 1161,
      TRAFFIC_SWN = 1162,
      TRAFFIC_SWS = 1163,
      TRAFFIC_SWT = 1164,
      TRAFFIC_TAL = 1165,
      TRAFFIC_TAX = 1166,
      TRAFFIC_TBU = 1167,
      TRAFFIC_TCC = 1168,
      TRAFFIC_TCN = 1169,
      TRAFFIC_TCX = 1170,
      TRAFFIC_TDX = 1171,
      TRAFFIC_TEA = 1172,
      TRAFFIC_TEX = 1173,
      TRAFFIC_TFA = 1174,
      TRAFFIC_TGL = 1175,
      TRAFFIC_TGW = 1176,
      TRAFFIC_THU = 1177,
      TRAFFIC_TIA = 1178,
      TRAFFIC_TIR = 1179,
      TRAFFIC_TLI = 1180,
      TRAFFIC_TLN = 1181,
      TRAFFIC_TLO = 1182,
      TRAFFIC_TLT = 1183,
      TRAFFIC_TLV = 1184,
      TRAFFIC_TLX = 1185,
      TRAFFIC_TM = 1186,
      TRAFFIC_TMO = 1187,
      TRAFFIC_TMP = 1188,
      TRAFFIC_TNL = 1189,
      TRAFFIC_TNW = 1190,
      TRAFFIC_TOR = 1191,
      TRAFFIC_TOX = 1192,
      TRAFFIC_TR = 1193,
      TRAFFIC_TRA = 1194,
      TRAFFIC_TRC = 1195,
      TRAFFIC_TRT = 1196,
      TRAFFIC_TRX = 1197,
      TRAFFIC_TSC = 1198,
      TRAFFIC_TSR = 1199,
      TRAFFIC_TSX = 1200,
      TRAFFIC_TTB = 1201,
      TRAFFIC_TTL = 1202,
      TRAFFIC_TTM = 1203,
      TRAFFIC_TUB = 1204,
      TRAFFIC_TUC = 1205,
      TRAFFIC_TWI = 1206,
      TRAFFIC_TVX = 1207,
      TRAFFIC_TXA = 1208,
      TRAFFIC_TXB = 1209,
      TRAFFIC_TXC = 1210,
      TRAFFIC_TXD = 1211,
      TRAFFIC_TXL = 1212,
      TRAFFIC_TXN = 1213,
      TRAFFIC_TXO = 1214,
      TRAFFIC_TXP = 1215,
      TRAFFIC_TXR = 1216,
      TRAFFIC_TXS = 1217,
      TRAFFIC_TXV = 1218,
      TRAFFIC_TXW = 1219,
      TRAFFIC_TXX = 1220,
      TRAFFIC_TXY = 1221,
      TRAFFIC_TXZ = 1222,
      TRAFFIC_UBA = 1223,
      TRAFFIC_UBV = 1224,
      TRAFFIC_UCA = 1225,
      TRAFFIC_UGI = 1226,
      TRAFFIC_UHA = 1227,
      TRAFFIC_UHV = 1228,
      TRAFFIC_USI = 1229,
      TRAFFIC_USN = 1230,
      TRAFFIC_WBC = 1231,
      TRAFFIC_WBS = 1232,
      TRAFFIC_VFR = 1233,
      TRAFFIC_WHI = 1234,
      TRAFFIC_WIC = 1235,
      TRAFFIC_WIG = 1236,
      TRAFFIC_VIR = 1237,
      TRAFFIC_WIS = 1238,
      TRAFFIC_WIX = 1239,
      TRAFFIC_WLD = 1240,
      TRAFFIC_WLL = 1241,
      TRAFFIC_WLT = 1242,
      TRAFFIC_WMW = 1243,
      TRAFFIC_VNW = 1244,
      TRAFFIC_VOD = 1245,
      TRAFFIC_WR = 1246,
      TRAFFIC_WRM = 1247,
      TRAFFIC_VSA = 1248,
      TRAFFIC_VSM = 1249,
      TRAFFIC_WST = 1250,
      TRAFFIC_VSX = 1251,
      TRAFFIC_WSX = 1252,
      TRAFFIC_WSZ = 1253,
      TRAFFIC_VWC = 1254,
      TRAFFIC_VWI = 1255,
      TRAFFIC_VWN = 1256,
      TRAFFIC_VWX = 1257,
      EUROPE = 1258,
      BENELUX = 1259,
      NORTH_AMERICA = 1260,
      SCANDINAVIA = 1261,
      THE_ALPS = 1262,
      COMMA = 1263,
      HAS_SERVICE = 1264,
      HAS_CARWASH = 1265,
      HAS_24H_SELF_SERVICE_ZONE = 1266,
      HAS_DRIVE_IN = 1267,
      BUS_STOP_POI_TYPE = 1268,
      TAXI_STOP_POI_TYPE = 1269,
      VICINITY_INVITE_MAIL = 1270,
      VICINITY_INVITE_MAIL_SUBJECT = 1271,
      VICINITY_INVITE_SMS = 1272,
      VICINITY_PLACE_SMS = 1273,
      CARTOGRAPHICITEM = 1274,
      SPONSORED_RESULTS = 1275,
      ALL_RESULTS = 1276,
      VICINITY_FAVORITES_LOCKED = 1277,
      CAT_MAIL_BOX = 1278,
      CAT_STAMP_SELLER = 1279,
      MAILBOX_COLLECTION_TIMES = 1280,
      CHINESE_STRING = 1281,
      PERFORMER = 1282,
      DISC_GIGS_SHARE_GIGS_SMS = 1283,
      DISC_GIGS_SEND_GIG_SMS = 1284,
      DISC_GIGS_SEND_GIG_ONGOING_SMS = 1285,
      CAT_MUSIC_AND_VIDEO = 1286,
      CAT_SUBWAY = 1287,
      FAVOURITES = 1288,
      CAT_TAXI_STAND = 1289,
      CAT_BARS = 1290,
      CAT_NIGHT_CLUB = 1291,
      CAT_WLAN_HOTSPOTS = 1292,
      CITY = 1293,
      ZIP_CODE = 1294,
      BOOKING_URL = 1295,
      BOOKING_PHONE_NUMBER = 1296,
      ESP_DESCR_BIZ = 1297,
      ESP_DESCR_PEOPLE = 1298,
      ESP_DESCR_POI = 1299,
      ESP_DESCR_STREETS = 1300,
      SEARCHCAT_TRAVEL = 1301,
      SEARCHCAT_BANK_ATM = 1302,
      CAT_SHOPPING__Z__ = 1303,
      WF_NO_BILL_AREA = 1304,
      MC2_average_rating_txt = 1305,
      MC2_poi_thumbnail_txt = 1306,
      MC2_view_on_xxx_txt = 1307,
      MC2_info_provided_by_txt = 1308,

      /**
       * The total number of strings in this enumeration.
       * \b NB! This must be the last entry in this enumeration!
       */
      NBR_STRINGS

   };


protected:
   /**
    *   The number of supported stringCodes.
    */
   static const uint32 nbrStrings;

   /**
    *   The number of supported languages.
    */
   enum { nbrLanguages = 22 };

   /**
    *   The number of pseudolanguages, languages
    */
   enum { nbrPseudoLanguages = 22 };

   /**
    *   The strings in utf-8, the values in the array is set in the
    *   cpp-file.
    */
   static const char *strings[][44];

};

#endif
