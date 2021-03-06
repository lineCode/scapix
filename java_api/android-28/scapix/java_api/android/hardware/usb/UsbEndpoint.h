// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_HARDWARE_USB_USBENDPOINT_H
#define SCAPIX_ANDROID_HARDWARE_USB_USBENDPOINT_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::hardware::usb {

class UsbEndpoint : public object_base<SCAPIX_META_STRING("android/hardware/usb/UsbEndpoint"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	jint getAddress();
	jint getEndpointNumber();
	jint getDirection();
	jint getAttributes();
	jint getType();
	jint getMaxPacketSize();
	jint getInterval();
	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> parcel, jint flags);

protected:

	UsbEndpoint(handle_type h) : base_(h) {}

};

} // namespace android::hardware::usb
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::hardware::usb {

inline ref<android::os::Parcelable_Creator> UsbEndpoint::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint UsbEndpoint::getAddress() { return call_method<SCAPIX_META_STRING("getAddress"), jint>(); }
inline jint UsbEndpoint::getEndpointNumber() { return call_method<SCAPIX_META_STRING("getEndpointNumber"), jint>(); }
inline jint UsbEndpoint::getDirection() { return call_method<SCAPIX_META_STRING("getDirection"), jint>(); }
inline jint UsbEndpoint::getAttributes() { return call_method<SCAPIX_META_STRING("getAttributes"), jint>(); }
inline jint UsbEndpoint::getType() { return call_method<SCAPIX_META_STRING("getType"), jint>(); }
inline jint UsbEndpoint::getMaxPacketSize() { return call_method<SCAPIX_META_STRING("getMaxPacketSize"), jint>(); }
inline jint UsbEndpoint::getInterval() { return call_method<SCAPIX_META_STRING("getInterval"), jint>(); }
inline ref<java::lang::String> UsbEndpoint::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint UsbEndpoint::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void UsbEndpoint::writeToParcel(ref<android::os::Parcel> parcel, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(parcel, flags); }

} // namespace android::hardware::usb
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_USB_USBENDPOINT_H
