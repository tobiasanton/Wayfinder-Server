/*
Copyright (c) 1999 - 2010, Vodafone Group Services Ltd
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
    * Neither the name of the Vodafone Group Services Ltd nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef WFRESCODES_H
#define WFRESCODES_H

#include "config.h"

/**
 *   Class containing some result codes.
 *   Couldn't think of a very good name.
 */ 
class WFResCodes {
public:
   
   /**
    *   These are a few things that I can think of right now.
    */
   enum activation_res {
      /// Activation code is OK
      OK                    = 0,
      /// The phone number is wrong
      WRONG_PHONE_NBR       = 1,
      /// The activation code is wrong
      WRONG_ACTIVATION_CODE = 2,
      /// Something else has happened and the request did not complete.
      UNKNOWN_ERROR         = 1000
   };

   static inline const char* activationResToString(activation_res res);
   
};

inline const char*
WFResCodes::activationResToString(WFResCodes::activation_res res)
{
   switch ( res ) {
      case OK:
         return "OK";
      case WRONG_PHONE_NBR:
         return "WRONG_PHONE_NBR";
      case WRONG_ACTIVATION_CODE:
         return "WRONG_ACTIVATION_CODE";
      case UNKNOWN_ERROR:
         return "UNKNOWN_ERROR";
   }
   return "This code cannot be reached but probably will someday";
}

#endif
