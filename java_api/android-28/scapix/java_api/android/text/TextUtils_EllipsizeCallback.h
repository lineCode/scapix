// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TEXT_TEXTUTILS_ELLIPSIZECALLBACK_H
#define SCAPIX_ANDROID_TEXT_TEXTUTILS_ELLIPSIZECALLBACK_H

namespace scapix::java_api {


namespace android::text {

class TextUtils_EllipsizeCallback : public object_base<SCAPIX_META_STRING("android/text/TextUtils$EllipsizeCallback"),
	java::lang::Object>
{
public:

	void ellipsized(jint p1, jint p2);

protected:

	TextUtils_EllipsizeCallback(handle_type h) : base_(h) {}

};

} // namespace android::text
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::text {

inline void TextUtils_EllipsizeCallback::ellipsized(jint p1, jint p2) { return call_method<SCAPIX_META_STRING("ellipsized"), void>(p1, p2); }

} // namespace android::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_TEXTUTILS_ELLIPSIZECALLBACK_H
