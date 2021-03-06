// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_APP_NOTIFICATION_ACTION_H
#define SCAPIX_ANDROID_APP_NOTIFICATION_ACTION_H

namespace scapix::java_api {

namespace android::app { class PendingIntent; }
namespace android::app { class RemoteInput; }
namespace android::graphics::drawable { class Icon; }
namespace android::os { class Bundle; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class CharSequence; }
namespace android::app { class Notification_Action_WearableExtender; }
namespace android::app { class Notification_Action_Extender; }
namespace android::app { class Notification_Action_Builder; }

namespace android::app {

class Notification_Action : public object_base<SCAPIX_META_STRING("android/app/Notification$Action"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using WearableExtender = Notification_Action_WearableExtender;
	using Extender = Notification_Action_Extender;
	using Builder = Notification_Action_Builder;

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint SEMANTIC_ACTION_ARCHIVE_();
	static jint SEMANTIC_ACTION_CALL_();
	static jint SEMANTIC_ACTION_DELETE_();
	static jint SEMANTIC_ACTION_MARK_AS_READ_();
	static jint SEMANTIC_ACTION_MARK_AS_UNREAD_();
	static jint SEMANTIC_ACTION_MUTE_();
	static jint SEMANTIC_ACTION_NONE_();
	static jint SEMANTIC_ACTION_REPLY_();
	static jint SEMANTIC_ACTION_THUMBS_DOWN_();
	static jint SEMANTIC_ACTION_THUMBS_UP_();
	static jint SEMANTIC_ACTION_UNMUTE_();
	ref<android::app::PendingIntent> actionIntent();
	void actionIntent(ref<android::app::PendingIntent>);
	jint icon();
	void icon(jint);
	ref<java::lang::CharSequence> title();
	void title(ref<java::lang::CharSequence>);

	static ref<Notification_Action> new_object(jint icon, ref<java::lang::CharSequence> title, ref<android::app::PendingIntent> intent);
	ref<android::graphics::drawable::Icon> getIcon();
	ref<android::os::Bundle> getExtras();
	jboolean getAllowGeneratedReplies();
	ref<link::java::array<android::app::RemoteInput>> getRemoteInputs();
	jint getSemanticAction();
	ref<link::java::array<android::app::RemoteInput>> getDataOnlyRemoteInputs();
	ref<android::app::Notification_Action> clone();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> out, jint flags);

protected:

	Notification_Action(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/app/RemoteInput.h>
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::app {

inline ref<android::os::Parcelable_Creator> Notification_Action::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint Notification_Action::SEMANTIC_ACTION_ARCHIVE_() { return get_static_field<SCAPIX_META_STRING("SEMANTIC_ACTION_ARCHIVE"), jint>(); }
inline jint Notification_Action::SEMANTIC_ACTION_CALL_() { return get_static_field<SCAPIX_META_STRING("SEMANTIC_ACTION_CALL"), jint>(); }
inline jint Notification_Action::SEMANTIC_ACTION_DELETE_() { return get_static_field<SCAPIX_META_STRING("SEMANTIC_ACTION_DELETE"), jint>(); }
inline jint Notification_Action::SEMANTIC_ACTION_MARK_AS_READ_() { return get_static_field<SCAPIX_META_STRING("SEMANTIC_ACTION_MARK_AS_READ"), jint>(); }
inline jint Notification_Action::SEMANTIC_ACTION_MARK_AS_UNREAD_() { return get_static_field<SCAPIX_META_STRING("SEMANTIC_ACTION_MARK_AS_UNREAD"), jint>(); }
inline jint Notification_Action::SEMANTIC_ACTION_MUTE_() { return get_static_field<SCAPIX_META_STRING("SEMANTIC_ACTION_MUTE"), jint>(); }
inline jint Notification_Action::SEMANTIC_ACTION_NONE_() { return get_static_field<SCAPIX_META_STRING("SEMANTIC_ACTION_NONE"), jint>(); }
inline jint Notification_Action::SEMANTIC_ACTION_REPLY_() { return get_static_field<SCAPIX_META_STRING("SEMANTIC_ACTION_REPLY"), jint>(); }
inline jint Notification_Action::SEMANTIC_ACTION_THUMBS_DOWN_() { return get_static_field<SCAPIX_META_STRING("SEMANTIC_ACTION_THUMBS_DOWN"), jint>(); }
inline jint Notification_Action::SEMANTIC_ACTION_THUMBS_UP_() { return get_static_field<SCAPIX_META_STRING("SEMANTIC_ACTION_THUMBS_UP"), jint>(); }
inline jint Notification_Action::SEMANTIC_ACTION_UNMUTE_() { return get_static_field<SCAPIX_META_STRING("SEMANTIC_ACTION_UNMUTE"), jint>(); }
inline ref<android::app::PendingIntent> Notification_Action::actionIntent() { return get_field<SCAPIX_META_STRING("actionIntent"), ref<android::app::PendingIntent>>(); }
inline void Notification_Action::actionIntent(ref<android::app::PendingIntent> v) { set_field<SCAPIX_META_STRING("actionIntent"), ref<android::app::PendingIntent>>(v); }
inline jint Notification_Action::icon() { return get_field<SCAPIX_META_STRING("icon"), jint>(); }
inline void Notification_Action::icon(jint v) { set_field<SCAPIX_META_STRING("icon"), jint>(v); }
inline ref<java::lang::CharSequence> Notification_Action::title() { return get_field<SCAPIX_META_STRING("title"), ref<java::lang::CharSequence>>(); }
inline void Notification_Action::title(ref<java::lang::CharSequence> v) { set_field<SCAPIX_META_STRING("title"), ref<java::lang::CharSequence>>(v); }
inline ref<Notification_Action> Notification_Action::new_object(jint icon, ref<java::lang::CharSequence> title, ref<android::app::PendingIntent> intent) { return base_::new_object(icon, title, intent); }
inline ref<android::graphics::drawable::Icon> Notification_Action::getIcon() { return call_method<SCAPIX_META_STRING("getIcon"), ref<android::graphics::drawable::Icon>>(); }
inline ref<android::os::Bundle> Notification_Action::getExtras() { return call_method<SCAPIX_META_STRING("getExtras"), ref<android::os::Bundle>>(); }
inline jboolean Notification_Action::getAllowGeneratedReplies() { return call_method<SCAPIX_META_STRING("getAllowGeneratedReplies"), jboolean>(); }
inline ref<link::java::array<android::app::RemoteInput>> Notification_Action::getRemoteInputs() { return call_method<SCAPIX_META_STRING("getRemoteInputs"), ref<link::java::array<android::app::RemoteInput>>>(); }
inline jint Notification_Action::getSemanticAction() { return call_method<SCAPIX_META_STRING("getSemanticAction"), jint>(); }
inline ref<link::java::array<android::app::RemoteInput>> Notification_Action::getDataOnlyRemoteInputs() { return call_method<SCAPIX_META_STRING("getDataOnlyRemoteInputs"), ref<link::java::array<android::app::RemoteInput>>>(); }
inline ref<android::app::Notification_Action> Notification_Action::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<android::app::Notification_Action>>(); }
inline jint Notification_Action::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void Notification_Action::writeToParcel(ref<android::os::Parcel> out, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(out, flags); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_NOTIFICATION_ACTION_H
