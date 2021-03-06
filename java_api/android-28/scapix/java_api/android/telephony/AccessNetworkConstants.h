// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TELEPHONY_ACCESSNETWORKCONSTANTS_H
#define SCAPIX_ANDROID_TELEPHONY_ACCESSNETWORKCONSTANTS_H

namespace scapix::java_api {

namespace android::telephony { class AccessNetworkConstants_UtranBand; }
namespace android::telephony { class AccessNetworkConstants_GeranBand; }
namespace android::telephony { class AccessNetworkConstants_EutranBand; }
namespace android::telephony { class AccessNetworkConstants_AccessNetworkType; }

namespace android::telephony {

class AccessNetworkConstants : public object_base<SCAPIX_META_STRING("android/telephony/AccessNetworkConstants"),
	java::lang::Object>
{
public:

	using UtranBand = AccessNetworkConstants_UtranBand;
	using GeranBand = AccessNetworkConstants_GeranBand;
	using EutranBand = AccessNetworkConstants_EutranBand;
	using AccessNetworkType = AccessNetworkConstants_AccessNetworkType;


protected:

	AccessNetworkConstants(handle_type h) : base_(h) {}

};

} // namespace android::telephony
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::telephony {


} // namespace android::telephony
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELEPHONY_ACCESSNETWORKCONSTANTS_H
