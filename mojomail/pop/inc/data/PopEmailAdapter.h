// @@@LICENSE
//
//      Copyright (c) 2009-2013 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// LICENSE@@@

#ifndef POPEMAILADAPTER_H_
#define POPEMAILADAPTER_H_

#include <string>

#include "PopDefs.h"
#include "core/MojObject.h"
#include "data/Email.h"
#include "data/EmailAdapter.h"
#include "data/EmailSchema.h"
#include "data/PopEmail.h"

class PopEmailAdapter : public EmailAdapter
{
public:
	static const char* const POP_EMAIL_KIND;
	static const char* const POP_TRANSPORT_EMAIL_KIND;

	// Constants for POP email specific properties
	static const char* const ID;
	static const char* const SERVER_UID;
	static const char* const CONTENT_TYPE;
	static const char* const CONTENT_ENCODING;
	static const char* const DOWNLOADED;

	// Get data from MojoDB and turn them into PopEmail
	static void		ParseDatabasePopObject(const MojObject& obj, PopEmail& email);
	// Convert PopEmail data into MojoDB.
	static void		SerializeToDatabasePopObject(const PopEmail& email, MojObject& obj);
};

#endif /* POPEMAILADAPTER_H_ */
