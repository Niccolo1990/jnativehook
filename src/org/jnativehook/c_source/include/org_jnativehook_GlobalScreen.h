/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jnativehook_GlobalScreen */

#ifndef _Included_org_jnativehook_GlobalScreen
#define _Included_org_jnativehook_GlobalScreen
#ifdef __cplusplus
extern "C" {
#endif
#undef org_jnativehook_GlobalScreen_FOCUS_TRAVERSABLE_UNKNOWN
#define org_jnativehook_GlobalScreen_FOCUS_TRAVERSABLE_UNKNOWN 0L
#undef org_jnativehook_GlobalScreen_FOCUS_TRAVERSABLE_DEFAULT
#define org_jnativehook_GlobalScreen_FOCUS_TRAVERSABLE_DEFAULT 1L
#undef org_jnativehook_GlobalScreen_FOCUS_TRAVERSABLE_SET
#define org_jnativehook_GlobalScreen_FOCUS_TRAVERSABLE_SET 2L
#undef org_jnativehook_GlobalScreen_TOP_ALIGNMENT
#define org_jnativehook_GlobalScreen_TOP_ALIGNMENT 0.0f
#undef org_jnativehook_GlobalScreen_CENTER_ALIGNMENT
#define org_jnativehook_GlobalScreen_CENTER_ALIGNMENT 0.5f
#undef org_jnativehook_GlobalScreen_BOTTOM_ALIGNMENT
#define org_jnativehook_GlobalScreen_BOTTOM_ALIGNMENT 1.0f
#undef org_jnativehook_GlobalScreen_LEFT_ALIGNMENT
#define org_jnativehook_GlobalScreen_LEFT_ALIGNMENT 0.0f
#undef org_jnativehook_GlobalScreen_RIGHT_ALIGNMENT
#define org_jnativehook_GlobalScreen_RIGHT_ALIGNMENT 1.0f
#undef org_jnativehook_GlobalScreen_serialVersionUID
#define org_jnativehook_GlobalScreen_serialVersionUID -7644114512714619750LL
#undef org_jnativehook_GlobalScreen_serialVersionUID
#define org_jnativehook_GlobalScreen_serialVersionUID 6504561173380322679LL
/*
 * Class:     org_jnativehook_GlobalScreen
 * Method:    grabKey
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_jnativehook_GlobalScreen_grabKey
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     org_jnativehook_GlobalScreen
 * Method:    ungrabKey
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_jnativehook_GlobalScreen_ungrabKey
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     org_jnativehook_GlobalScreen
 * Method:    grabButton
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_jnativehook_GlobalScreen_grabButton
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_jnativehook_GlobalScreen
 * Method:    ungrabButton
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_jnativehook_GlobalScreen_ungrabButton
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_jnativehook_GlobalScreen
 * Method:    getAutoRepeatRate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jnativehook_GlobalScreen_getAutoRepeatRate
  (JNIEnv *, jobject);

/*
 * Class:     org_jnativehook_GlobalScreen
 * Method:    getAutoRepeatDelay
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jnativehook_GlobalScreen_getAutoRepeatDelay
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
