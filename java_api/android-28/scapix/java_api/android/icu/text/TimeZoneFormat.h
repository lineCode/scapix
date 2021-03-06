// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/icu/text/UFormat.h>
#include <scapix/java_api/android/icu/util/Freezable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_TIMEZONEFORMAT_H
#define SCAPIX_ANDROID_ICU_TEXT_TIMEZONEFORMAT_H

namespace scapix::java_api {

namespace android::icu::text { class TimeZoneFormat_GMTOffsetPatternType; }
namespace android::icu::text { class TimeZoneFormat_Style; }
namespace android::icu::text { class TimeZoneNames; }
namespace android::icu::util { class Output; }
namespace android::icu::util { class TimeZone; }
namespace android::icu::util { class ULocale; }
namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::lang { class StringBuffer; }
namespace java::text { class AttributedCharacterIterator; }
namespace java::text { class FieldPosition; }
namespace java::text { class ParsePosition; }
namespace java::util { class EnumSet; }
namespace java::util { class Locale; }
namespace android::icu::text { class TimeZoneFormat_TimeType; }
namespace android::icu::text { class TimeZoneFormat_ParseOption; }

namespace android::icu::text {

class TimeZoneFormat : public object_base<SCAPIX_META_STRING("android/icu/text/TimeZoneFormat"),
	android::icu::text::UFormat,
	android::icu::util::Freezable,
	java::io::Serializable>
{
public:

	using TimeType = TimeZoneFormat_TimeType;
	using Style = TimeZoneFormat_Style;
	using ParseOption = TimeZoneFormat_ParseOption;
	using GMTOffsetPatternType = TimeZoneFormat_GMTOffsetPatternType;

	static ref<android::icu::text::TimeZoneFormat> getInstance(ref<android::icu::util::ULocale> locale);
	static ref<android::icu::text::TimeZoneFormat> getInstance(ref<java::util::Locale> locale);
	ref<android::icu::text::TimeZoneNames> getTimeZoneNames();
	ref<android::icu::text::TimeZoneFormat> setTimeZoneNames(ref<android::icu::text::TimeZoneNames> tznames);
	ref<java::lang::String> getGMTPattern();
	ref<android::icu::text::TimeZoneFormat> setGMTPattern(ref<java::lang::String> pattern);
	ref<java::lang::String> getGMTOffsetPattern(ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType> type);
	ref<android::icu::text::TimeZoneFormat> setGMTOffsetPattern(ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType> type, ref<java::lang::String> pattern);
	ref<java::lang::String> getGMTOffsetDigits();
	ref<android::icu::text::TimeZoneFormat> setGMTOffsetDigits(ref<java::lang::String> digits);
	ref<java::lang::String> getGMTZeroFormat();
	ref<android::icu::text::TimeZoneFormat> setGMTZeroFormat(ref<java::lang::String> gmtZeroFormat);
	ref<android::icu::text::TimeZoneFormat> setDefaultParseOptions(ref<java::util::EnumSet> options);
	ref<java::util::EnumSet> getDefaultParseOptions();
	ref<java::lang::String> formatOffsetISO8601Basic(jint offset, jboolean useUtcIndicator, jboolean isShort, jboolean ignoreSeconds);
	ref<java::lang::String> formatOffsetISO8601Extended(jint offset, jboolean useUtcIndicator, jboolean isShort, jboolean ignoreSeconds);
	ref<java::lang::String> formatOffsetLocalizedGMT(jint offset);
	ref<java::lang::String> formatOffsetShortLocalizedGMT(jint offset);
	ref<java::lang::String> format(ref<android::icu::text::TimeZoneFormat_Style> style, ref<android::icu::util::TimeZone> tz, jlong date);
	ref<java::lang::String> format(ref<android::icu::text::TimeZoneFormat_Style> style, ref<android::icu::util::TimeZone> tz, jlong date, ref<android::icu::util::Output> p4);
	jint parseOffsetISO8601(ref<java::lang::String> text, ref<java::text::ParsePosition> pos);
	jint parseOffsetLocalizedGMT(ref<java::lang::String> text, ref<java::text::ParsePosition> pos);
	jint parseOffsetShortLocalizedGMT(ref<java::lang::String> text, ref<java::text::ParsePosition> pos);
	ref<android::icu::util::TimeZone> parse(ref<android::icu::text::TimeZoneFormat_Style> style, ref<java::lang::String> text, ref<java::text::ParsePosition> pos, ref<java::util::EnumSet> options, ref<android::icu::util::Output> timeType);
	ref<android::icu::util::TimeZone> parse(ref<android::icu::text::TimeZoneFormat_Style> style, ref<java::lang::String> text, ref<java::text::ParsePosition> pos, ref<android::icu::util::Output> timeType);
	ref<android::icu::util::TimeZone> parse(ref<java::lang::String> text, ref<java::text::ParsePosition> pos);
	ref<android::icu::util::TimeZone> parse(ref<java::lang::String> text);
	ref<java::lang::StringBuffer> format(ref<java::lang::Object> obj, ref<java::lang::StringBuffer> toAppendTo, ref<java::text::FieldPosition> pos);
	ref<java::text::AttributedCharacterIterator> formatToCharacterIterator(ref<java::lang::Object> obj);
	ref<java::lang::Object> parseObject(ref<java::lang::String> source, ref<java::text::ParsePosition> pos);
	jboolean isFrozen();
	ref<android::icu::text::TimeZoneFormat> freeze();
	ref<android::icu::text::TimeZoneFormat> cloneAsThawed();

protected:

	TimeZoneFormat(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/text/TimeZoneFormat_GMTOffsetPatternType.h>
#include <scapix/java_api/android/icu/text/TimeZoneFormat_Style.h>
#include <scapix/java_api/android/icu/text/TimeZoneNames.h>
#include <scapix/java_api/android/icu/util/Output.h>
#include <scapix/java_api/android/icu/util/TimeZone.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/text/AttributedCharacterIterator.h>
#include <scapix/java_api/java/text/FieldPosition.h>
#include <scapix/java_api/java/text/ParsePosition.h>
#include <scapix/java_api/java/util/EnumSet.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace android::icu::text {

inline ref<android::icu::text::TimeZoneFormat> TimeZoneFormat::getInstance(ref<android::icu::util::ULocale> locale) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::text::TimeZoneFormat>>(locale); }
inline ref<android::icu::text::TimeZoneFormat> TimeZoneFormat::getInstance(ref<java::util::Locale> locale) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::text::TimeZoneFormat>>(locale); }
inline ref<android::icu::text::TimeZoneNames> TimeZoneFormat::getTimeZoneNames() { return call_method<SCAPIX_META_STRING("getTimeZoneNames"), ref<android::icu::text::TimeZoneNames>>(); }
inline ref<android::icu::text::TimeZoneFormat> TimeZoneFormat::setTimeZoneNames(ref<android::icu::text::TimeZoneNames> tznames) { return call_method<SCAPIX_META_STRING("setTimeZoneNames"), ref<android::icu::text::TimeZoneFormat>>(tznames); }
inline ref<java::lang::String> TimeZoneFormat::getGMTPattern() { return call_method<SCAPIX_META_STRING("getGMTPattern"), ref<java::lang::String>>(); }
inline ref<android::icu::text::TimeZoneFormat> TimeZoneFormat::setGMTPattern(ref<java::lang::String> pattern) { return call_method<SCAPIX_META_STRING("setGMTPattern"), ref<android::icu::text::TimeZoneFormat>>(pattern); }
inline ref<java::lang::String> TimeZoneFormat::getGMTOffsetPattern(ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType> type) { return call_method<SCAPIX_META_STRING("getGMTOffsetPattern"), ref<java::lang::String>>(type); }
inline ref<android::icu::text::TimeZoneFormat> TimeZoneFormat::setGMTOffsetPattern(ref<android::icu::text::TimeZoneFormat_GMTOffsetPatternType> type, ref<java::lang::String> pattern) { return call_method<SCAPIX_META_STRING("setGMTOffsetPattern"), ref<android::icu::text::TimeZoneFormat>>(type, pattern); }
inline ref<java::lang::String> TimeZoneFormat::getGMTOffsetDigits() { return call_method<SCAPIX_META_STRING("getGMTOffsetDigits"), ref<java::lang::String>>(); }
inline ref<android::icu::text::TimeZoneFormat> TimeZoneFormat::setGMTOffsetDigits(ref<java::lang::String> digits) { return call_method<SCAPIX_META_STRING("setGMTOffsetDigits"), ref<android::icu::text::TimeZoneFormat>>(digits); }
inline ref<java::lang::String> TimeZoneFormat::getGMTZeroFormat() { return call_method<SCAPIX_META_STRING("getGMTZeroFormat"), ref<java::lang::String>>(); }
inline ref<android::icu::text::TimeZoneFormat> TimeZoneFormat::setGMTZeroFormat(ref<java::lang::String> gmtZeroFormat) { return call_method<SCAPIX_META_STRING("setGMTZeroFormat"), ref<android::icu::text::TimeZoneFormat>>(gmtZeroFormat); }
inline ref<android::icu::text::TimeZoneFormat> TimeZoneFormat::setDefaultParseOptions(ref<java::util::EnumSet> options) { return call_method<SCAPIX_META_STRING("setDefaultParseOptions"), ref<android::icu::text::TimeZoneFormat>>(options); }
inline ref<java::util::EnumSet> TimeZoneFormat::getDefaultParseOptions() { return call_method<SCAPIX_META_STRING("getDefaultParseOptions"), ref<java::util::EnumSet>>(); }
inline ref<java::lang::String> TimeZoneFormat::formatOffsetISO8601Basic(jint offset, jboolean useUtcIndicator, jboolean isShort, jboolean ignoreSeconds) { return call_method<SCAPIX_META_STRING("formatOffsetISO8601Basic"), ref<java::lang::String>>(offset, useUtcIndicator, isShort, ignoreSeconds); }
inline ref<java::lang::String> TimeZoneFormat::formatOffsetISO8601Extended(jint offset, jboolean useUtcIndicator, jboolean isShort, jboolean ignoreSeconds) { return call_method<SCAPIX_META_STRING("formatOffsetISO8601Extended"), ref<java::lang::String>>(offset, useUtcIndicator, isShort, ignoreSeconds); }
inline ref<java::lang::String> TimeZoneFormat::formatOffsetLocalizedGMT(jint offset) { return call_method<SCAPIX_META_STRING("formatOffsetLocalizedGMT"), ref<java::lang::String>>(offset); }
inline ref<java::lang::String> TimeZoneFormat::formatOffsetShortLocalizedGMT(jint offset) { return call_method<SCAPIX_META_STRING("formatOffsetShortLocalizedGMT"), ref<java::lang::String>>(offset); }
inline ref<java::lang::String> TimeZoneFormat::format(ref<android::icu::text::TimeZoneFormat_Style> style, ref<android::icu::util::TimeZone> tz, jlong date) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(style, tz, date); }
inline ref<java::lang::String> TimeZoneFormat::format(ref<android::icu::text::TimeZoneFormat_Style> style, ref<android::icu::util::TimeZone> tz, jlong date, ref<android::icu::util::Output> p4) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(style, tz, date, p4); }
inline jint TimeZoneFormat::parseOffsetISO8601(ref<java::lang::String> text, ref<java::text::ParsePosition> pos) { return call_method<SCAPIX_META_STRING("parseOffsetISO8601"), jint>(text, pos); }
inline jint TimeZoneFormat::parseOffsetLocalizedGMT(ref<java::lang::String> text, ref<java::text::ParsePosition> pos) { return call_method<SCAPIX_META_STRING("parseOffsetLocalizedGMT"), jint>(text, pos); }
inline jint TimeZoneFormat::parseOffsetShortLocalizedGMT(ref<java::lang::String> text, ref<java::text::ParsePosition> pos) { return call_method<SCAPIX_META_STRING("parseOffsetShortLocalizedGMT"), jint>(text, pos); }
inline ref<android::icu::util::TimeZone> TimeZoneFormat::parse(ref<android::icu::text::TimeZoneFormat_Style> style, ref<java::lang::String> text, ref<java::text::ParsePosition> pos, ref<java::util::EnumSet> options, ref<android::icu::util::Output> timeType) { return call_method<SCAPIX_META_STRING("parse"), ref<android::icu::util::TimeZone>>(style, text, pos, options, timeType); }
inline ref<android::icu::util::TimeZone> TimeZoneFormat::parse(ref<android::icu::text::TimeZoneFormat_Style> style, ref<java::lang::String> text, ref<java::text::ParsePosition> pos, ref<android::icu::util::Output> timeType) { return call_method<SCAPIX_META_STRING("parse"), ref<android::icu::util::TimeZone>>(style, text, pos, timeType); }
inline ref<android::icu::util::TimeZone> TimeZoneFormat::parse(ref<java::lang::String> text, ref<java::text::ParsePosition> pos) { return call_method<SCAPIX_META_STRING("parse"), ref<android::icu::util::TimeZone>>(text, pos); }
inline ref<android::icu::util::TimeZone> TimeZoneFormat::parse(ref<java::lang::String> text) { return call_method<SCAPIX_META_STRING("parse"), ref<android::icu::util::TimeZone>>(text); }
inline ref<java::lang::StringBuffer> TimeZoneFormat::format(ref<java::lang::Object> obj, ref<java::lang::StringBuffer> toAppendTo, ref<java::text::FieldPosition> pos) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(obj, toAppendTo, pos); }
inline ref<java::text::AttributedCharacterIterator> TimeZoneFormat::formatToCharacterIterator(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("formatToCharacterIterator"), ref<java::text::AttributedCharacterIterator>>(obj); }
inline ref<java::lang::Object> TimeZoneFormat::parseObject(ref<java::lang::String> source, ref<java::text::ParsePosition> pos) { return call_method<SCAPIX_META_STRING("parseObject"), ref<java::lang::Object>>(source, pos); }
inline jboolean TimeZoneFormat::isFrozen() { return call_method<SCAPIX_META_STRING("isFrozen"), jboolean>(); }
inline ref<android::icu::text::TimeZoneFormat> TimeZoneFormat::freeze() { return call_method<SCAPIX_META_STRING("freeze"), ref<android::icu::text::TimeZoneFormat>>(); }
inline ref<android::icu::text::TimeZoneFormat> TimeZoneFormat::cloneAsThawed() { return call_method<SCAPIX_META_STRING("cloneAsThawed"), ref<android::icu::text::TimeZoneFormat>>(); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_TIMEZONEFORMAT_H
