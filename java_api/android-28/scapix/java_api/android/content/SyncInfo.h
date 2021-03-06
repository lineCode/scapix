// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_CONTENT_SYNCINFO_H
#define SCAPIX_ANDROID_CONTENT_SYNCINFO_H

namespace scapix::java_api {

namespace android::accounts { class Account; }
namespace android::os { class Parcel; }
namespace java::lang { class String; }

namespace android::content {

class SyncInfo : public object_base<SCAPIX_META_STRING("android/content/SyncInfo"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	ref<android::accounts::Account> account();
	ref<java::lang::String> authority();
	jlong startTime();

	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> parcel, jint flags);

protected:

	SyncInfo(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/android/accounts/Account.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content {

inline ref<android::accounts::Account> SyncInfo::account() { return get_field<SCAPIX_META_STRING("account"), ref<android::accounts::Account>>(); }
inline ref<java::lang::String> SyncInfo::authority() { return get_field<SCAPIX_META_STRING("authority"), ref<java::lang::String>>(); }
inline jlong SyncInfo::startTime() { return get_field<SCAPIX_META_STRING("startTime"), jlong>(); }
inline jint SyncInfo::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void SyncInfo::writeToParcel(ref<android::os::Parcel> parcel, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(parcel, flags); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_SYNCINFO_H
