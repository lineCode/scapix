// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_LOCATION_GNSSSTATUS_H
#define SCAPIX_ANDROID_LOCATION_GNSSSTATUS_H

namespace scapix::java_api {

namespace android::location { class GnssStatus_Callback; }

namespace android::location {

class GnssStatus : public object_base<SCAPIX_META_STRING("android/location/GnssStatus"),
	java::lang::Object>
{
public:

	using Callback = GnssStatus_Callback;

	static jint CONSTELLATION_BEIDOU_();
	static jint CONSTELLATION_GALILEO_();
	static jint CONSTELLATION_GLONASS_();
	static jint CONSTELLATION_GPS_();
	static jint CONSTELLATION_QZSS_();
	static jint CONSTELLATION_SBAS_();
	static jint CONSTELLATION_UNKNOWN_();

	jint getSatelliteCount();
	jint getConstellationType(jint satIndex);
	jint getSvid(jint satIndex);
	jfloat getCn0DbHz(jint satIndex);
	jfloat getElevationDegrees(jint satIndex);
	jfloat getAzimuthDegrees(jint satIndex);
	jboolean hasEphemerisData(jint satIndex);
	jboolean hasAlmanacData(jint satIndex);
	jboolean usedInFix(jint satIndex);
	jboolean hasCarrierFrequencyHz(jint satIndex);
	jfloat getCarrierFrequencyHz(jint satIndex);

protected:

	GnssStatus(handle_type h) : base_(h) {}

};

} // namespace android::location
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::location {

inline jint GnssStatus::CONSTELLATION_BEIDOU_() { return get_static_field<SCAPIX_META_STRING("CONSTELLATION_BEIDOU"), jint>(); }
inline jint GnssStatus::CONSTELLATION_GALILEO_() { return get_static_field<SCAPIX_META_STRING("CONSTELLATION_GALILEO"), jint>(); }
inline jint GnssStatus::CONSTELLATION_GLONASS_() { return get_static_field<SCAPIX_META_STRING("CONSTELLATION_GLONASS"), jint>(); }
inline jint GnssStatus::CONSTELLATION_GPS_() { return get_static_field<SCAPIX_META_STRING("CONSTELLATION_GPS"), jint>(); }
inline jint GnssStatus::CONSTELLATION_QZSS_() { return get_static_field<SCAPIX_META_STRING("CONSTELLATION_QZSS"), jint>(); }
inline jint GnssStatus::CONSTELLATION_SBAS_() { return get_static_field<SCAPIX_META_STRING("CONSTELLATION_SBAS"), jint>(); }
inline jint GnssStatus::CONSTELLATION_UNKNOWN_() { return get_static_field<SCAPIX_META_STRING("CONSTELLATION_UNKNOWN"), jint>(); }
inline jint GnssStatus::getSatelliteCount() { return call_method<SCAPIX_META_STRING("getSatelliteCount"), jint>(); }
inline jint GnssStatus::getConstellationType(jint satIndex) { return call_method<SCAPIX_META_STRING("getConstellationType"), jint>(satIndex); }
inline jint GnssStatus::getSvid(jint satIndex) { return call_method<SCAPIX_META_STRING("getSvid"), jint>(satIndex); }
inline jfloat GnssStatus::getCn0DbHz(jint satIndex) { return call_method<SCAPIX_META_STRING("getCn0DbHz"), jfloat>(satIndex); }
inline jfloat GnssStatus::getElevationDegrees(jint satIndex) { return call_method<SCAPIX_META_STRING("getElevationDegrees"), jfloat>(satIndex); }
inline jfloat GnssStatus::getAzimuthDegrees(jint satIndex) { return call_method<SCAPIX_META_STRING("getAzimuthDegrees"), jfloat>(satIndex); }
inline jboolean GnssStatus::hasEphemerisData(jint satIndex) { return call_method<SCAPIX_META_STRING("hasEphemerisData"), jboolean>(satIndex); }
inline jboolean GnssStatus::hasAlmanacData(jint satIndex) { return call_method<SCAPIX_META_STRING("hasAlmanacData"), jboolean>(satIndex); }
inline jboolean GnssStatus::usedInFix(jint satIndex) { return call_method<SCAPIX_META_STRING("usedInFix"), jboolean>(satIndex); }
inline jboolean GnssStatus::hasCarrierFrequencyHz(jint satIndex) { return call_method<SCAPIX_META_STRING("hasCarrierFrequencyHz"), jboolean>(satIndex); }
inline jfloat GnssStatus::getCarrierFrequencyHz(jint satIndex) { return call_method<SCAPIX_META_STRING("getCarrierFrequencyHz"), jfloat>(satIndex); }

} // namespace android::location
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_LOCATION_GNSSSTATUS_H
