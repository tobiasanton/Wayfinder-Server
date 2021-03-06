/*
Copyright (c) 1999 - 2010, Vodafone Group Services Ltd
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
    * Neither the name of the Vodafone Group Services Ltd nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef OLDSTREETITEM_H
#define OLDSTREETITEM_H

#include "config.h"
#include "OldGroupItem.h"

/**
  *   Describes one road, that is a collection of street segments.
  *
  */  
class OldStreetItem : public OldGroupItem {
   public:
      /**
       *    Default construcor, implemented to be as fast as possible.
       */
      inline OldStreetItem() { };

      /**
        *   Creates an item containing information about a
        *   OldStreetItem.
        *   
        *   @param   id The localID of this item
        */  
      OldStreetItem(uint32 id);

      /**
        *   Destroys the OldStreetItem.
        */
      virtual ~OldStreetItem();

      /**
        *   Writes the item into the dataBuffer.
        *   @param   dataBuffer Where to print the information.
        *   @return  True if no errors occurred, false otherwise.
        */
      virtual bool save(DataBuffer *dataBuffer) const;

      /**
       *   Writes data about the item into a class variable
       *   and returns a pointer to it. Not thread-safe
       *   @return The item in string form
       */
      char* toString();
      
      /**
        *   Writes the street item specific header to the mifFile.
        *   @param mifFile   The mif-file to write header to.
        */

      static void writeMifHeader(ofstream& mifFile);

      /**
        *  Writes a street item to a mid and mif file.
        *  @param  mifFile File to write gfx-data to.
        *  @param  midFile File to write attributes in.
        *  @param  namePointer Pointer to stringtable.
        */
      virtual void printMidMif(ofstream& midFile, 
                               ofstream& mifFile, 
                               OldItemNames* namePointer);
      
      /**
       *    Get the lowest item id present in the specified polygon.
       *    Look up the item in the map, and check it's properties
       *    in order to know what the properties for that polygon is.
       *    
       *    @param   polyIdx  The polygon index.
       *    @return  The item id if valid polygon, otherwise MAX_UINT32.
       */
      uint32 getItemInPolygon(uint16 polyIdx) const;
      
      /**
       *    Get the roadclass for the specified polygon.
       *    The caller of this method must make sure the indata is valid.
       *    This method relies on that the zoomlevel a ssi reflects
       *    the roadclass.
       *    
       *    @param   polyIdx  The polygon index.
       *    @return  The roadclass of that polygon. 
       */
      inline ItemTypes::roadClass getRoadClassForPolygon(
                                             uint16 polyIdx) const;

      /**
       *    Get the amount of memory used by this object.
       *    @return The size, in bytes, that this item uses.
       */
      virtual uint32 getMemoryUsage() const;

      /**
       *    Virtual method that updates all attributes of item and,
       *    if any, its nodes and connections to the values of the 
       *    other item. This includes e.g. names, groups, entry 
       *    restrictions, sign posts, speed limit and gfxdata.
       *    For more documentation see OldItem.h.
       *
       *    NB. The method is not really implemented for OldStreetItem.
       *
       *    @param otherItem  The item from which to get update values.
       *    @param sameMap    Default true meaning that the items are
       *                      one and the same (same map), set to false if
       *                      the items originates from different maps (e.g.
       *                      underview and overview map)
       *    @return  True if some attribute was updated for the item,
       *             false if not.
       */
      virtual bool updateAttributesFromItem(OldItem* otherItem,
                                            bool sameMap = true);

   const uint16 *getItemOffsetForPolygon() const { return m_itemOffsetForPolygon; }

   protected:
      /**
       *    Fill this item with information from the databuffer.
       *    @param   dataBuffer  The buffer with the data.
       *    @return  True if the data of the item is set, false
       *             otherwise.
       */
      virtual bool createFromDataBuffer(DataBuffer* dataBuffer, 
                                        OldGenericMap* theMap);

      /**
       *    Declaire OldItem as a friend, to make it possible to
       *    call the createFromDataBuffer-methd.
       */
      friend OldItem* OldItem::createNewItem(DataBuffer*, OldGenericMap*);
      friend class GMSItem;
      friend class GMSCountryOverviewMap;

      /**
       *    Array which can be used to find the properties of a certain
       *    polygon (such as, the roadclass, is it a ramp, roundabout... etc)
       *    It has the same size as the number of polygons in the street.
       *    Index i corresponds to the i:th index in itemsInGroup member.
       *    In order to know what the properties of polygon i is, lookup
       *    itemsInGroup[m_itemOffsetForPolygon[i]] in the map. 
       *    The properties of that streetsegment item will be the same 
       *    as the properties for that polygon.
       */
      uint16* m_itemOffsetForPolygon;

};

// =======================================================================
//                                     Implementation of inlined methods =

inline ItemTypes::roadClass 
OldStreetItem::getRoadClassForPolygon(uint16 polyIdx) const 
{
   return (ItemTypes::roadClass(
            GET_ZOOMLEVEL(
               getItemNumber(m_itemOffsetForPolygon[polyIdx])) - 2 ));
}

#endif

