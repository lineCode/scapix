// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_MEDIAPLAYER_ONPREPAREDLISTENER_H
#define SCAPIX_ANDROID_MEDIA_MEDIAPLAYER_ONPREPAREDLISTENER_H

namespace scapix::java_api {

namespace android::media { class MediaPlayer; }

namespace android::media {

class MediaPlayer_OnPreparedListener : public object_base<SCAPIX_META_STRING("android/media/MediaPlayer$OnPreparedListener"),
	java::lang::Object>
{
public:

	void onPrepared(ref<android::media::MediaPlayer> p1);

protected:

	MediaPlayer_OnPreparedListener(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/media/MediaPlayer.h>

namespace scapix::java_api {
namespace android::media {

inline void MediaPlayer_OnPreparedListener::onPrepared(ref<android::media::MediaPlayer> p1) { return call_method<SCAPIX_META_STRING("onPrepared"), void>(p1); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MEDIAPLAYER_ONPREPAREDLISTENER_H
