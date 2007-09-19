//
// DataException.cpp
//
// $Id: //poco/Main/Data/src/DataException.cpp#8 $
//
// Library: Data
// Package: DataCore
// Module:  DataException
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#include "Poco/Data/DataException.h"
#include <typeinfo>


namespace Poco {
namespace Data {


POCO_IMPLEMENT_EXCEPTION(DataException, Poco::IOException, "Database Exception")
POCO_IMPLEMENT_EXCEPTION(RowDataMissingException, DataException, "Data for row missing")
POCO_IMPLEMENT_EXCEPTION(UnknownDataBaseException, DataException, "Type of data base unknown")
POCO_IMPLEMENT_EXCEPTION(UnknownTypeException, DataException, "Type of data unknown")
POCO_IMPLEMENT_EXCEPTION(ExecutionException, DataException, "Execution error")
POCO_IMPLEMENT_EXCEPTION(BindingException, DataException, "Binding error")
POCO_IMPLEMENT_EXCEPTION(ExtractException, DataException, "Extraction error")
POCO_IMPLEMENT_EXCEPTION(LimitException, DataException, "Limit error")
POCO_IMPLEMENT_EXCEPTION(NotSupportedException, DataException, "Feature or property not supported")
POCO_IMPLEMENT_EXCEPTION(NotImplementedException, DataException, "Feature or property not implemented")
POCO_IMPLEMENT_EXCEPTION(SessionUnavailableException, DataException, "Session is unavailable")
POCO_IMPLEMENT_EXCEPTION(SessionPoolExhaustedException, DataException, "No more sessions available from the session pool")
POCO_IMPLEMENT_EXCEPTION(NoDataException, DataException, "No data found")


} } // namespace Poco::Data
