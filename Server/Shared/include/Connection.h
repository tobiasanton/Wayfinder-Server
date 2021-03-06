/*
Copyright (c) 1999 - 2010, Vodafone Group Services Ltd
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
    * Neither the name of the Vodafone Group Services Ltd nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef CONNECTION_H
#define CONNECTION_H

#include "config.h"

#include "Vector.h"

#include "StringTable.h"
#include "ItemTypes.h"

#include <math.h>

//Forward declaration
class GenericMap;
class DataBuffer;


/**
 *   Describes a connection between two nodes. The ID of one of the
 *   nodes are stored here (the node where this connection starts) 
 *   and the other is where this connection is stored (where the
 *   connection ends).
 *
 */
class Connection {
public:
      
   /**
    *    @name Time penalties.
    *    Penalties used to get better (time) costs.
    */
   //@{
   /**
    *   Penalty factor for road class 0.
    */
   static const float64 PENALTY_ROAD_CLASS_0;

   /** 
    *   Penalty factor for road class 1.
    */
   static const float64 PENALTY_ROAD_CLASS_1;

   /** 
    *   Penalty factor for road class 2.
    */
   static const float64 PENALTY_ROAD_CLASS_2;

   /** 
    *   Penalty factor for road class 3.
    */
   static const float64 PENALTY_ROAD_CLASS_3;

   /**
    *   Penalty factor for road class 4.
    */
   static const float64 PENALTY_ROAD_CLASS_4;
         
   /**
    *   Penalty factor for road class 4 with 30km/h.
    */
   static const float64 PENALTY_ROAD_CLASS_4_30KMH;

   /**
    *   Penalty factor for ramps.
    */
   static const float64 PENALTY_RAMP;

   //@}
           
   /**
    *    @name Stand still times.
    *    Stand still time costs (in seconds).
    */
   //@{
   /**
    *   Stand still time for a U-turn on a major road.
    */
   static const uint32 STANDSTILLTIME_U_TURN_MAJOR_ROAD;

   /**
    *   Stand still time for a  U-turn on a minor road.
    */
   static const uint32 STANDSTILLTIME_U_TURN_MINOR_ROAD;

   /**
    *   Stand still time for a left turn on a major road.
    */
   static const uint32 STANDSTILLTIME_LEFTTURN_MAJOR_ROAD;

   /**
    *   Stand still time for a left turn on a minor road.
    */
   static const uint32 STANDSTILLTIME_LEFTTURN_MINOR_ROAD;

   /**
    *   Stand still time for a right turn on a major road..
    */
   static const uint32 STANDSTILLTIME_RIGHTTURN_MAJOR_ROAD;

   /**
    *   Stand still time for a right turn on a minor road.
    */
   static const uint32 STANDSTILLTIME_RIGHTTURN_MINOR_ROAD;
         
   /**
    *   Stand still time for entering a roundabout.
    */
   static const uint32 STANDSTILLTIME_ENTER_ROUNDABOUT;

   /**
    *   Stand still time for entering a ferry.
    */
   static const uint32 STANDSTILLTIME_ENTER_FERRY;

   /**
    *   Stand still time for exiting a ferry.
    */
   static const uint32 STANDSTILLTIME_EXIT_FERRY;

   /**
    *   Stand still time for changing ferries.
    */
   static const uint32 STANDSTILLTIME_CHANGE_FERRY;
   //@}

   /**
    *   Max number of vehicletypes in ItemTypes.
    */
   static const uint32 MAX_NBR_VEHICLETYPES;

   /**
    *   @name The "normal" speed.
    *   Constants indicating the "normal" speed.
    */
   //@{
   /** 
    *    "Normal speed" in km/h.
    */
   static const float64 NORMAL_SPEED_KMH;

   /** 
    *    "Normal speed" in m/s.
    */
   static const float64 NORMAL_SPEED_MS;
   //@}

   /**
    *    Default time for road tolls.
    *    <b>WARNING!</b> This is set in CalcRoute.cpp.
    */
   static uint32 tollRoadTimeDefaultPenalty_s;

   /**
    *    Default distance penalty for road tolls.
    *    <b>WARNING!</b> This is set in CalcRoute.cpp.
    */
   static uint32 tollRoadDistanceDefaultPenalty_m;

   /**
    *    Default penaltyfactor for highways.
    *    <b>WARNING!</b> This is set in CalcRoute.cpp.
    */
   static float highwayDefaultPenaltyFactor;
         
   /**
    *   Creates an empty connection. This is implemented in the 
    *   fastest possible way, <B>no initialization</B> is done.
    *   Does work together with the createFromDataBuffer method.
    */
   inline Connection() { };

   /**
    *   Creates an connection from node with ID fromID.
    */
   explicit Connection( uint32 fromID );
      
   /**
    *   Virtual method that creates a new Connection out of a 
    *   databuffer. This method excists only to make it possible
    *   to create subclasses of this class (e.g. GMSConnection).
    *
    */
   static Connection* createNewConnection( DataBuffer& dataBuffer,
                                           GenericMap& theMap );
      
      
   /**
    *   Save the Connection into a data buffer.
    *   @param dataBuffer Where to save the Connection.
    */
   void save( DataBuffer& dataBuffer ) const;
   /**
    *    Initialize all members with data from a data buffer.
    *    @param dataBuffer A buffer with all data about this connection.
    */
   void load( DataBuffer& dataBuffer );

   /**
    *   Get the id of the connect-from-node.
    *   @return  The nodeID this connection leads from.
    */
   inline uint32 getConnectFromNode();

   /**
    *   Set the turndirection to a new value. This function 
    *   is inlined.
    */
   inline void setTurnDirection(ItemTypes::turndirection_t x);

   /**
    *    Get the description of the turn that is done when traversing 
    *    this connection.
    *    @return The turndirection of this connection. 
    */
   inline ItemTypes::turndirection_t getTurnDirection() const;

   /**
    *   "Translate" the connection into terms of a StringCode.
    *   @return  Offset in the StringTable that desrcribes how to
    *            turn when driving at this connection.
    */
   inline StringTable::stringCode getTurnStringCode() const;


   /**
    *   Set the kind of crossing to a new value. This function 
    *   is inlined.
    */
   void setCrossingKind(ItemTypes::crossingkind_t x);

   /**
    *   @return  The kind of crossing. This function is inlined.
    */
   inline ItemTypes::crossingkind_t getCrossingKind() const;

   /**
    *   @return  The vehicleRestrictions for this connection.
    */
   inline uint32 getVehicleRestrictionIdx() const;

   /**
    *    Get the exit count.
    *    @return The exit count.
    */
   inline byte getExitCount() const;

   /**
    *    Set the exit count.
    *    @param exitCount is the nbr of the connection.
    */
   void setExitCount(byte exitCount);

   /**
    *    Get the connect-from-node.
    *    @return The "from" node.
    */
   inline uint32 getFromNode() const;

   /**
    *    Set the ID of the connect-from-node.
    *    @param fromNode is the from node
    */
   void setFromNode( uint32 fromNodeID );

  
   /**
    *   Calculates the penalty factor, which is used by the 
    *   getConnectionTime() and getConnectionCost() methods. 
    *   The penalty factor is based on the roadclass and if
    *   the connection represents a U-turn, and whether it is 
    *   a ramp or not.
    *   @param   roadClass   The roadclass of the ssi the
    *                        connection traverses.
    *   @param   speedLimit  The speedlimit of the ssi the
    *                        connection traverses.
    *   @param   isRamp      True if it is a ramp.
    *   @return  The penalty factor.
    */
   float64 getPenaltyFactor(byte roadClass, 
                            bool isRamp = false,
                            byte speedLimit = 50);
      
   /**
    *    Get the number of bytes that this Connection use.
    *    @return The memory usage in bytes for this Connection.
    */
   uint32 getMemoryUsage(void) const;

   /**
    *   Is this connection a multi connection?.
    *   Multi connections stretch over several items and are used to 
    *   repesent special traffic rules for turns that covers several
    *   normal connections. Ex. U-turns, multidig situoations.
    *   @return True if this connection covers several normal connections.
    *           False if this is a normal connection.
    */
   inline bool isMultiConnection() const;
      
   //@{
   /**
    *    Convert time cost used by the RouteModule to
    *    seconds. 
    *    @param timeCost RouteModule time cost.
    *    @return The <code>timeCost</code> in seconds.
    */
   static inline double timeCostToSec(double timeCost);

   /**
    *    Converts the number of seconds supplied to
    *    RouteModule time cost. 
    *    @param timeCost RouteModule time cost.
    *    @return The <code>seconds</code> converted to
    *            RouteModule time cost.
    */
   static inline double secToTimeCost(double seconds);

   /**
    *    Convert the distance cost in <code>distCost</code>
    *    to meters. 
    *    @param distCost The distcost to convert.
    *    @return <code>distCost</code> in meters.
    */
   static inline double distCostToMeters(double distCost);

   /**
    *    Converts the distance in meters into 
    *    the cost used by the RouteModule.
    *    @param meters The distance in meters.
    *    @return The distance in RouteModule distance cost.
    */
   static inline double metersToDistCost(double meters);

   /**
    *    Convert time cost used by the RouteModule to
    *    seconds. Rounded.
    *    @param timeCost RouteModule time cost.
    *    @return The <code>timeCost</code> in seconds.
    */
   static inline uint32 timeCostToSec(uint32 timeCost);

   /**
    *    Converts the number of seconds supplied to
    *    RouteModule time cost. Rounded.
    *    @param timeCost RouteModule time cost.
    *    @return The <code>seconds</code> converted to
    *            RouteModule time cost.
    */
   static inline uint32 secToTimeCost(uint32 seconds);

   /**
    *    Convert the distance cost in <code>distCost</code>
    *    to meters. Rounded.
    *    @param distCost The distcost to convert.
    *    @return <code>distCost</code> in meters.
    */
   static inline uint32 distCostToMeters(uint32 distCost);

   /**
    *    Converts the distance in meters into 
    *    the cost used by the RouteModule.
    *    @param meters The distance in meters.
    *    @return The distance in RouteModule distance cost.
    */
   static inline uint32 metersToDistCost(uint32 meters);      
   //@}
   
protected:

   friend class M3Creator;


   /** 
    *   The ID of the node this connection leads <B>from</B>. 
    */
   uint32 m_connectFromNodeIndex;

   /**
    *   Vehicle restrictions index for this connection.
    */
   uint8 m_vehicleRestrictionIdx;

   /**
    *   The direktion of this connection.
    */
   ItemTypes::turndirection_t m_turnDirection : 8;

   /**
    *   Kind of crossing.
    */
   ItemTypes::crossingkind_t m_crossingKind : 8;

   /**
    *   The number of the exit where to turn at the crossing.
    *   E.g:
    *   @verbatim
    ___________   
    ***** |        If this crossing describes the *-marked 
    *|        turn then:
    *|        m_exitCount = 0 (first way to the right)
    *|        m_crossingKind = CROSSING_3WAYS_T
    *|        m_turnDirection = RIGHT
    |        
    *   @endverbatim
    */
   byte m_exitCount : 8;
};



inline ItemTypes::turndirection_t 
Connection::getTurnDirection() const
{
   return m_turnDirection;
}

inline StringTable::stringCode 
Connection::getTurnStringCode() const
{
   switch (m_turnDirection) {
      case ItemTypes::UNDEFINED :
         return (StringTable::UNDEFINED_TURN);
         break;
      case ItemTypes::LEFT :
         return (StringTable::LEFT_TURN);
         break;
      case ItemTypes::AHEAD :
         return (StringTable::AHEAD_TURN);
         break;
      case ItemTypes::RIGHT :
         return (StringTable::RIGHT_TURN);
         break;
      case ItemTypes::UTURN :
         return (StringTable::U_TURN);
         break;
      case ItemTypes::FOLLOWROAD :
         return (StringTable::FOLLOWROAD_TURN);
         break;
      case ItemTypes::ENTER_ROUNDABOUT :
         return (StringTable::ENTER_ROUNDABOUT_TURN);
         break;
      case ItemTypes::EXIT_ROUNDABOUT :
         return (StringTable::EXIT_ROUNDABOUT_TURN);
         break;
      case ItemTypes::RIGHT_ROUNDABOUT :
         return (StringTable::RIGHT_ROUNDABOUT_TURN);
         break;
      case ItemTypes::LEFT_ROUNDABOUT :
         return (StringTable::LEFT_ROUNDABOUT_TURN);
         break;
      case ItemTypes::AHEAD_ROUNDABOUT :
         return (StringTable::AHEAD_ROUNDABOUT_TURN);
         break;
      case ItemTypes::ON_RAMP :
         return (StringTable::ON_RAMP_TURN);
         break;
      case ItemTypes::OFF_RAMP :
         return (StringTable::OFF_RAMP_TURN);
         break;
      case ItemTypes::OFF_RAMP_LEFT :
         return (StringTable::LEFT_OFF_RAMP_TURN);
         break;
      case ItemTypes::OFF_RAMP_RIGHT :
         return (StringTable::RIGHT_OFF_RAMP_TURN);
         break;
      case ItemTypes::ENTER_BUS:
         return (StringTable::ENTER_BUS_TURN);
         break;
      case ItemTypes::EXIT_BUS :
         return (StringTable::EXIT_BUS_TURN);
         break;
      case ItemTypes::CHANGE_BUS :
         return (StringTable::CHANGE_BUS_TURN);
         break;
      case ItemTypes::KEEP_LEFT :
         return (StringTable::KEEP_LEFT);
         break;
      case ItemTypes::KEEP_RIGHT :
         return (StringTable::KEEP_RIGHT);
         break;   
      case ItemTypes::ENTER_FERRY:
         return (StringTable::ENTER_FERRY_TURN);
         break;
      case ItemTypes::EXIT_FERRY :
         return (StringTable::EXIT_FERRY_TURN);
         break;
      case ItemTypes::CHANGE_FERRY :
         return (StringTable::CHANGE_FERRY_TURN);
         break;
      case ItemTypes::MULTI_CONNECTION_TURN :
         return (StringTable::NOSTRING);
         break;
   }
   return (StringTable::NOSTRING);  // To make compiler happy...
}

inline ItemTypes::crossingkind_t 
Connection::getCrossingKind() const
{
   return m_crossingKind;
} 

inline uint32 
Connection::getVehicleRestrictionIdx() const
{
   return m_vehicleRestrictionIdx;
}

inline byte 
Connection::getExitCount() const
{
   return m_exitCount;
}

inline uint32 
Connection::getConnectFromNode() 
{
   return m_connectFromNodeIndex;
}

inline void 
Connection::setTurnDirection(ItemTypes::turndirection_t x) 
{
   m_turnDirection = x;
}


inline uint32 
Connection::getFromNode() const
{
   return m_connectFromNodeIndex;
}

inline double
Connection::timeCostToSec(double timeCost)
{
   return double(timeCost) / double(Connection::NORMAL_SPEED_MS);
}

inline double
Connection::secToTimeCost(double seconds)
{
   return double(seconds) * Connection::NORMAL_SPEED_MS;

}

inline double
Connection::distCostToMeters(double distCost)
{
   return distCost;
}

inline double
Connection::metersToDistCost(double meters)
{
   return meters;
}

inline uint32
Connection::timeCostToSec(uint32 timeCost)
{
   return uint32(rint(timeCostToSec(double(timeCost))));
}

inline uint32
Connection::secToTimeCost(uint32 seconds)
{
   return uint32(rint(secToTimeCost(double(seconds))));
}

inline uint32
Connection::distCostToMeters(uint32 distCost)
{
   return distCost;
}

inline uint32
Connection::metersToDistCost(uint32 meters)
{
   return meters;
}

inline bool
Connection::isMultiConnection() const
{
   return  ( m_turnDirection == ItemTypes::MULTI_CONNECTION_TURN );
}

#endif
