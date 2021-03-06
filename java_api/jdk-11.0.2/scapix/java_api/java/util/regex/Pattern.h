// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_REGEX_PATTERN_H
#define SCAPIX_JAVA_UTIL_REGEX_PATTERN_H

namespace scapix::java_api {

namespace java::lang { class CharSequence; }
namespace java::lang { class String; }
namespace java::util::function { class Predicate; }
namespace java::util::regex { class Matcher; }
namespace java::util::stream { class Stream; }

namespace java::util::regex {

class Pattern : public object_base<SCAPIX_META_STRING("java/util/regex/Pattern"),
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jint UNIX_LINES_();
	static jint CASE_INSENSITIVE_();
	static jint COMMENTS_();
	static jint MULTILINE_();
	static jint LITERAL_();
	static jint DOTALL_();
	static jint UNICODE_CASE_();
	static jint CANON_EQ_();
	static jint UNICODE_CHARACTER_CLASS_();

	static ref<java::util::regex::Pattern> compile(ref<java::lang::String> regex);
	static ref<java::util::regex::Pattern> compile(ref<java::lang::String> regex, jint flags);
	ref<java::lang::String> pattern();
	ref<java::lang::String> toString();
	ref<java::util::regex::Matcher> matcher(ref<java::lang::CharSequence> input);
	jint flags();
	static jboolean matches(ref<java::lang::String> regex, ref<java::lang::CharSequence> input);
	ref<link::java::array<java::lang::String>> split(ref<java::lang::CharSequence> input, jint limit);
	ref<link::java::array<java::lang::String>> split(ref<java::lang::CharSequence> input);
	static ref<java::lang::String> quote(ref<java::lang::String> s);
	ref<java::util::function::Predicate> asPredicate();
	ref<java::util::function::Predicate> asMatchPredicate();
	ref<java::util::stream::Stream> splitAsStream(ref<java::lang::CharSequence> input);

protected:

	Pattern(handle_type h) : base_(h) {}

};

} // namespace java::util::regex
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#include <scapix/java_api/java/util/regex/Matcher.h>
#include <scapix/java_api/java/util/stream/Stream.h>

namespace scapix::java_api {
namespace java::util::regex {

inline jint Pattern::UNIX_LINES_() { return get_static_field<SCAPIX_META_STRING("UNIX_LINES"), jint>(); }
inline jint Pattern::CASE_INSENSITIVE_() { return get_static_field<SCAPIX_META_STRING("CASE_INSENSITIVE"), jint>(); }
inline jint Pattern::COMMENTS_() { return get_static_field<SCAPIX_META_STRING("COMMENTS"), jint>(); }
inline jint Pattern::MULTILINE_() { return get_static_field<SCAPIX_META_STRING("MULTILINE"), jint>(); }
inline jint Pattern::LITERAL_() { return get_static_field<SCAPIX_META_STRING("LITERAL"), jint>(); }
inline jint Pattern::DOTALL_() { return get_static_field<SCAPIX_META_STRING("DOTALL"), jint>(); }
inline jint Pattern::UNICODE_CASE_() { return get_static_field<SCAPIX_META_STRING("UNICODE_CASE"), jint>(); }
inline jint Pattern::CANON_EQ_() { return get_static_field<SCAPIX_META_STRING("CANON_EQ"), jint>(); }
inline jint Pattern::UNICODE_CHARACTER_CLASS_() { return get_static_field<SCAPIX_META_STRING("UNICODE_CHARACTER_CLASS"), jint>(); }
inline ref<java::util::regex::Pattern> Pattern::compile(ref<java::lang::String> regex) { return call_static_method<SCAPIX_META_STRING("compile"), ref<java::util::regex::Pattern>>(regex); }
inline ref<java::util::regex::Pattern> Pattern::compile(ref<java::lang::String> regex, jint flags) { return call_static_method<SCAPIX_META_STRING("compile"), ref<java::util::regex::Pattern>>(regex, flags); }
inline ref<java::lang::String> Pattern::pattern() { return call_method<SCAPIX_META_STRING("pattern"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Pattern::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<java::util::regex::Matcher> Pattern::matcher(ref<java::lang::CharSequence> input) { return call_method<SCAPIX_META_STRING("matcher"), ref<java::util::regex::Matcher>>(input); }
inline jint Pattern::flags() { return call_method<SCAPIX_META_STRING("flags"), jint>(); }
inline jboolean Pattern::matches(ref<java::lang::String> regex, ref<java::lang::CharSequence> input) { return call_static_method<SCAPIX_META_STRING("matches"), jboolean>(regex, input); }
inline ref<link::java::array<java::lang::String>> Pattern::split(ref<java::lang::CharSequence> input, jint limit) { return call_method<SCAPIX_META_STRING("split"), ref<link::java::array<java::lang::String>>>(input, limit); }
inline ref<link::java::array<java::lang::String>> Pattern::split(ref<java::lang::CharSequence> input) { return call_method<SCAPIX_META_STRING("split"), ref<link::java::array<java::lang::String>>>(input); }
inline ref<java::lang::String> Pattern::quote(ref<java::lang::String> s) { return call_static_method<SCAPIX_META_STRING("quote"), ref<java::lang::String>>(s); }
inline ref<java::util::function::Predicate> Pattern::asPredicate() { return call_method<SCAPIX_META_STRING("asPredicate"), ref<java::util::function::Predicate>>(); }
inline ref<java::util::function::Predicate> Pattern::asMatchPredicate() { return call_method<SCAPIX_META_STRING("asMatchPredicate"), ref<java::util::function::Predicate>>(); }
inline ref<java::util::stream::Stream> Pattern::splitAsStream(ref<java::lang::CharSequence> input) { return call_method<SCAPIX_META_STRING("splitAsStream"), ref<java::util::stream::Stream>>(input); }

} // namespace java::util::regex
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_REGEX_PATTERN_H
