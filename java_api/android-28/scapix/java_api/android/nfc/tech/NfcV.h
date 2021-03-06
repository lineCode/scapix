// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/nfc/tech/TagTechnology.h>

#ifndef SCAPIX_ANDROID_NFC_TECH_NFCV_H
#define SCAPIX_ANDROID_NFC_TECH_NFCV_H

namespace scapix::java_api {

namespace android::nfc { class Tag; }

namespace android::nfc::tech {

class NfcV : public object_base<SCAPIX_META_STRING("android/nfc/tech/NfcV"),
	java::lang::Object,
	android::nfc::tech::TagTechnology>
{
public:

	static ref<android::nfc::tech::NfcV> get(ref<android::nfc::Tag> tag);
	jbyte getResponseFlags();
	jbyte getDsfId();
	ref<link::java::array<jbyte>> transceive(ref<link::java::array<jbyte>> data);
	jint getMaxTransceiveLength();
	jboolean isConnected();
	ref<android::nfc::Tag> getTag();
	void close();
	void connect();

protected:

	NfcV(handle_type h) : base_(h) {}

};

} // namespace android::nfc::tech
} // namespace scapix::java_api

#include <scapix/java_api/android/nfc/Tag.h>

namespace scapix::java_api {
namespace android::nfc::tech {

inline ref<android::nfc::tech::NfcV> NfcV::get(ref<android::nfc::Tag> tag) { return call_static_method<SCAPIX_META_STRING("get"), ref<android::nfc::tech::NfcV>>(tag); }
inline jbyte NfcV::getResponseFlags() { return call_method<SCAPIX_META_STRING("getResponseFlags"), jbyte>(); }
inline jbyte NfcV::getDsfId() { return call_method<SCAPIX_META_STRING("getDsfId"), jbyte>(); }
inline ref<link::java::array<jbyte>> NfcV::transceive(ref<link::java::array<jbyte>> data) { return call_method<SCAPIX_META_STRING("transceive"), ref<link::java::array<jbyte>>>(data); }
inline jint NfcV::getMaxTransceiveLength() { return call_method<SCAPIX_META_STRING("getMaxTransceiveLength"), jint>(); }
inline jboolean NfcV::isConnected() { return call_method<SCAPIX_META_STRING("isConnected"), jboolean>(); }
inline ref<android::nfc::Tag> NfcV::getTag() { return call_method<SCAPIX_META_STRING("getTag"), ref<android::nfc::Tag>>(); }
inline void NfcV::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline void NfcV::connect() { return call_method<SCAPIX_META_STRING("connect"), void>(); }

} // namespace android::nfc::tech
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NFC_TECH_NFCV_H
