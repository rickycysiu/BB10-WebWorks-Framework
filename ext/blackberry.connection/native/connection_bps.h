/*
* Copyright 2012 Research In Motion Limited.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#include <bps/bps.h>
#include <bps/netstatus.h>

#ifndef CONNECTION_BPS_H_
#define CONNECTION_BPS_H_

enum ConnectionTypes {
	UNKNOWN = 0,
	ETHERNET = 1,
	WIFI = 2,
	BLUETOOTH_DUN = 3,
	USB = 4,
	VPN = 5,
	BB = 6,
	CELLULAR = 7,
	NONE = 8
};

class ConnectionBPS {
public:
	ConnectionBPS();
	~ConnectionBPS();
	ConnectionTypes GetConnectionType();
};

#endif /* CONNECTION_BPS_H_ */
