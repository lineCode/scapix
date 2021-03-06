// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/service/autofill/Validator.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_SERVICE_AUTOFILL_LUHNCHECKSUMVALIDATOR_H
#define SCAPIX_ANDROID_SERVICE_AUTOFILL_LUHNCHECKSUMVALIDATOR_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace android::view::autofill { class AutofillId; }
namespace java::lang { class String; }

namespace android::service::autofill {

class LuhnChecksumValidator : public object_base<SCAPIX_META_STRING("android/service/autofill/LuhnChecksumValidator"),
	java::lang::Object,
	android::service::autofill::Validator,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	static ref<LuhnChecksumValidator> new_object(ref<link::java::array<android::view::autofill::AutofillId>> ids);
	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> parcel, jint flags);

protected:

	LuhnChecksumValidator(handle_type h) : base_(h) {}

};

} // namespace android::service::autofill
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/view/autofill/AutofillId.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::service::autofill {

inline ref<android::os::Parcelable_Creator> LuhnChecksumValidator::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<LuhnChecksumValidator> LuhnChecksumValidator::new_object(ref<link::java::array<android::view::autofill::AutofillId>> ids) { return base_::new_object(ids); }
inline ref<java::lang::String> LuhnChecksumValidator::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint LuhnChecksumValidator::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void LuhnChecksumValidator::writeToParcel(ref<android::os::Parcel> parcel, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(parcel, flags); }

} // namespace android::service::autofill
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SERVICE_AUTOFILL_LUHNCHECKSUMVALIDATOR_H
