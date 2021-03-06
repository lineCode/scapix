// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_GESTURE_GESTUREUTILS_H
#define SCAPIX_ANDROID_GESTURE_GESTUREUTILS_H

namespace scapix::java_api {

namespace android::gesture { class Gesture; }
namespace android::gesture { class GestureStroke; }
namespace android::gesture { class OrientedBoundingBox; }
namespace java::util { class ArrayList; }

namespace android::gesture {

class GestureUtils : public object_base<SCAPIX_META_STRING("android/gesture/GestureUtils"),
	java::lang::Object>
{
public:

	static ref<link::java::array<jfloat>> spatialSampling(ref<android::gesture::Gesture> gesture, jint bitmapSize);
	static ref<link::java::array<jfloat>> spatialSampling(ref<android::gesture::Gesture> gesture, jint bitmapSize, jboolean keepAspectRatio);
	static ref<link::java::array<jfloat>> temporalSampling(ref<android::gesture::GestureStroke> stroke, jint numPoints);
	static ref<android::gesture::OrientedBoundingBox> computeOrientedBoundingBox(ref<java::util::ArrayList> originalPoints);
	static ref<android::gesture::OrientedBoundingBox> computeOrientedBoundingBox(ref<link::java::array<jfloat>> originalPoints);

protected:

	GestureUtils(handle_type h) : base_(h) {}

};

} // namespace android::gesture
} // namespace scapix::java_api

#include <scapix/java_api/android/gesture/Gesture.h>
#include <scapix/java_api/android/gesture/GestureStroke.h>
#include <scapix/java_api/android/gesture/OrientedBoundingBox.h>
#include <scapix/java_api/java/util/ArrayList.h>

namespace scapix::java_api {
namespace android::gesture {

inline ref<link::java::array<jfloat>> GestureUtils::spatialSampling(ref<android::gesture::Gesture> gesture, jint bitmapSize) { return call_static_method<SCAPIX_META_STRING("spatialSampling"), ref<link::java::array<jfloat>>>(gesture, bitmapSize); }
inline ref<link::java::array<jfloat>> GestureUtils::spatialSampling(ref<android::gesture::Gesture> gesture, jint bitmapSize, jboolean keepAspectRatio) { return call_static_method<SCAPIX_META_STRING("spatialSampling"), ref<link::java::array<jfloat>>>(gesture, bitmapSize, keepAspectRatio); }
inline ref<link::java::array<jfloat>> GestureUtils::temporalSampling(ref<android::gesture::GestureStroke> stroke, jint numPoints) { return call_static_method<SCAPIX_META_STRING("temporalSampling"), ref<link::java::array<jfloat>>>(stroke, numPoints); }
inline ref<android::gesture::OrientedBoundingBox> GestureUtils::computeOrientedBoundingBox(ref<java::util::ArrayList> originalPoints) { return call_static_method<SCAPIX_META_STRING("computeOrientedBoundingBox"), ref<android::gesture::OrientedBoundingBox>>(originalPoints); }
inline ref<android::gesture::OrientedBoundingBox> GestureUtils::computeOrientedBoundingBox(ref<link::java::array<jfloat>> originalPoints) { return call_static_method<SCAPIX_META_STRING("computeOrientedBoundingBox"), ref<android::gesture::OrientedBoundingBox>>(originalPoints); }

} // namespace android::gesture
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GESTURE_GESTUREUTILS_H
