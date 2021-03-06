// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_SPEECH_RECOGNIZERRESULTSINTENT_H
#define SCAPIX_ANDROID_SPEECH_RECOGNIZERRESULTSINTENT_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::speech {

class RecognizerResultsIntent : public object_base<SCAPIX_META_STRING("android/speech/RecognizerResultsIntent"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> ACTION_VOICE_SEARCH_RESULTS_();
	static ref<java::lang::String> EXTRA_VOICE_SEARCH_RESULT_HTML_();
	static ref<java::lang::String> EXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS_();
	static ref<java::lang::String> EXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS_();
	static ref<java::lang::String> EXTRA_VOICE_SEARCH_RESULT_STRINGS_();
	static ref<java::lang::String> EXTRA_VOICE_SEARCH_RESULT_URLS_();
	static ref<java::lang::String> URI_SCHEME_INLINE_();


protected:

	RecognizerResultsIntent(handle_type h) : base_(h) {}

};

} // namespace android::speech
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::speech {

inline ref<java::lang::String> RecognizerResultsIntent::ACTION_VOICE_SEARCH_RESULTS_() { return get_static_field<SCAPIX_META_STRING("ACTION_VOICE_SEARCH_RESULTS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_HTML_() { return get_static_field<SCAPIX_META_STRING("EXTRA_VOICE_SEARCH_RESULT_HTML"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS_() { return get_static_field<SCAPIX_META_STRING("EXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS_() { return get_static_field<SCAPIX_META_STRING("EXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_STRINGS_() { return get_static_field<SCAPIX_META_STRING("EXTRA_VOICE_SEARCH_RESULT_STRINGS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_URLS_() { return get_static_field<SCAPIX_META_STRING("EXTRA_VOICE_SEARCH_RESULT_URLS"), ref<java::lang::String>>(); }
inline ref<java::lang::String> RecognizerResultsIntent::URI_SCHEME_INLINE_() { return get_static_field<SCAPIX_META_STRING("URI_SCHEME_INLINE"), ref<java::lang::String>>(); }

} // namespace android::speech
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SPEECH_RECOGNIZERRESULTSINTENT_H
