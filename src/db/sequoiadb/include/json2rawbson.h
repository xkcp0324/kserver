/*******************************************************************************

   Copyright (C) 2011-2014 SequoiaDB Ltd.

   This program is free software: you can redistribute it and/or modify
   it under the term of the GNU Affero General Public License, version 3,
   as published by the Free Software Foundation.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warrenty of
   MARCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU Affero General Public License for more details.

   You should have received a copy of the GNU Affero General Public License
   along with this program. If not, see <http://www.gnu.org/license/>.

   Source File Name = json2rawbson.h

   Descriptive Name =

   When/how to use:

   Dependencies: N/A

   Restrictions: N/A

   Change Activity:
   defect Date        Who Description
   ====== =========== === ==============================================
          12/1/2014  ly  Initial Draft

   Last Changed =

*******************************************************************************/
#ifndef JSON2RAWBSON_H__
#define JSON2RAWBSON_H__

#include "core.h"
SDB_EXTERN_C_START
// this function should NEVER be directly called other than fromjson.cpp
CHAR * json2rawcbson ( const CHAR *str ) ;
CHAR * json2rawbson ( const CHAR *str, BOOLEAN isBatch ) ;
SDB_EXTERN_C_END
#endif
