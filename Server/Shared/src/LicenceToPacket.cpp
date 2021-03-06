/*
Copyright (c) 1999 - 2010, Vodafone Group Services Ltd
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
    * Neither the name of the Vodafone Group Services Ltd nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "LicenceToPacket.h"
#include "UserLicenceKey.h"

LicenceToRequestPacket::LicenceToRequestPacket( uint32 UIN, 
                                                const UserLicenceKey* licence )
   : UserRequestPacket( USER_REQUEST_HEADER_SIZE + licence->getSize(),
                        PACKETTYPE_LICENCE_TO_REQUEST,
                        UIN )
{
   int pos = USER_REQUEST_HEADER_SIZE;
   const_cast<UserLicenceKey*> (licence)->packInto( this, pos );
   setLength( pos );
}

auto_ptr<UserLicenceKey>
LicenceToRequestPacket::getLicenceKey() const {
   int pos = USER_REQUEST_HEADER_SIZE;
   // Read type and size?
   pos += 6;
   return auto_ptr<UserLicenceKey> ( new UserLicenceKey( this, pos ) );
}

LicenceToReplyPacket::LicenceToReplyPacket( const LicenceToRequestPacket* req,
                                            uint32 ownerUIN )
      : UserReplyPacket( USER_REPLY_HEADER_SIZE + 4,
                         PACKETTYPE_LICENCE_TO_REPLY,
                         req )
{
   int pos = USER_REPLY_HEADER_SIZE;
   incWriteLong( pos, ownerUIN );
   setLength( pos );
}

uint32
LicenceToReplyPacket::getOwnerUIN() const {
   return readLong( USER_REPLY_HEADER_SIZE );
}
