/*
Copyright (c) 1999 - 2010, Vodafone Group Services Ltd
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
    * Neither the name of the Vodafone Group Services Ltd nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef OLDMUNICIPALITEM_H
#define OLDMUNICIPALITEM_H

#include "config.h"
#include "OldItem.h"
#include "DataBuffer.h"

/**
  *   Describes one municipal on the map.
  *
  */
class OldMunicipalItem : public OldItem {
   public:
      /**
       *    Default construcor, implemented to be as fast as possible.
       */
      inline OldMunicipalItem() { MINFO("OldMunicipalItem"); };

      /**
        *   Creates an item containing information about a Municipal. 
        *
        *   @param   id The localID of this item
        */
      OldMunicipalItem(uint32 id);

      /**
        *   Destroy this Municipal item.
        */
      virtual ~OldMunicipalItem();

      /**
        *   Writes the item into the dataBuffer.
        *   @param   dataBuffer Where to print the information.
        *   @return  True if no errors occurred, false otherwise.
        */
      virtual bool save(DataBuffer *dataBuffer) const;
      
      /**
       *   Writes data about this item into a class variable and returns 
       *   a pointer to it. Not thread-safe.
       *   @return The item in string form
       */
      virtual char *toString();
      
      /**
        *   Writes the municipal item specific header to the mifFile.
        *   @param mifFile   The mif-file to write header to.
        */
      static void writeMifHeader(ofstream& mifFile);

      /**
        *  Writes a municipal item to a mid and mif file.
        *  @param  mifFile File to write gfx-data to.
        *  @param  midFile File to write attributes in.
        *  @param  namePointer Pointer to stringtable.
        */
      virtual void printMidMif(ofstream& midFile, 
                               ofstream& mifFile, 
                               OldItemNames* namePointer);
      
      /**
       *    Get the number of inhabitants in this municipal.
       *    @return  The number of inhabitants in this municipal.
       *             Zero is returned if unknown.
       */
      inline uint32 getNbrInhabitants() const;

      /**
       *    Set the number of inhabitants in this municipal.
       *    Zero should be used to indicate unknown value.
       *    @param n  The number of inhabitants in this municipal.
       */
      inline void setNbrInhabitants(uint32 n);

      /**
       *    Virtual method that updates all attributes of item and,
       *    if any, its nodes and connections to the values of the 
       *    other item. This includes e.g. names, groups, entry 
       *    restrictions, sign posts, speed limit and gfxdata.
       *    For more documentation see OldItem.h.
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
       *    The number of inhabitants in this municipal. Set to zero
       *    if unknown.
       */
      uint32 m_nbrOfInhabitants;
      
      /**
       *    Declaire some friends, to make it possible to call the 
       *    createFromDataBuffer-methd.
       */
      friend OldItem* OldItem::createNewItem(DataBuffer*, OldGenericMap*);
      friend class GMSItem;
};

// ==================================================================
//                                Implementation of inlined methods =
inline uint32 
OldMunicipalItem::getNbrInhabitants() const
{
   return m_nbrOfInhabitants;
}

inline void 
OldMunicipalItem::setNbrInhabitants(uint32 n)
{
   m_nbrOfInhabitants = n;
}

#endif

