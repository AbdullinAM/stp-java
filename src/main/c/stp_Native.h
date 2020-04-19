/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_zhekehz_stpjava_Native */

#ifndef _Included_org_zhekehz_stpjava_Native
#define _Included_org_zhekehz_stpjava_Native
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_createValidityChecker
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1createValidityChecker
  (JNIEnv *, jclass);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_varExpr
 * Signature: (JLjava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1varExpr
  (JNIEnv *, jclass, jlong, jstring, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_getBVLength
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_zhekehz_stpjava_Native_vc_1getBVLength
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_eqExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1eqExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_boolType
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1boolType
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_trueExpr
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1trueExpr
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_falseExpr
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1falseExpr
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_notExpr
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1notExpr
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_andExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1andExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_orExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1orExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_xorExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1xorExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_impliesExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1impliesExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_iffExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1iffExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_iteExpr
 * Signature: (JJJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1iteExpr
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_boolToBVExpr
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1boolToBVExpr
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_andExprN
 * Signature: (J[JI)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1andExprN
  (JNIEnv *, jclass, jlong, jlongArray, jint);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_orExprN
 * Signature: (J[JI)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1orExprN
  (JNIEnv *, jclass, jlong, jlongArray, jint);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_arrayType
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1arrayType
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_readExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1readExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_writeExpr
 * Signature: (JJJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1writeExpr
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_printExpr
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_zhekehz_stpjava_Native_vc_1printExpr
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_printCounterExample
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_zhekehz_stpjava_Native_vc_1printCounterExample
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_assertFormula
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_zhekehz_stpjava_Native_vc_1assertFormula
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_simplify
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1simplify
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_query
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_org_zhekehz_stpjava_Native_vc_1query
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_getCounterExample
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1getCounterExample
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_push
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_zhekehz_stpjava_Native_vc_1push
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_pop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_zhekehz_stpjava_Native_vc_1pop
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    getBVInt
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_zhekehz_stpjava_Native_getBVInt
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    getBVUnsignedLong
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_getBVUnsignedLong
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvType
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvType
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvConstExprFromInt
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvConstExprFromInt
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvConstExprFromLL
 * Signature: (JIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvConstExprFromLL
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvConcatExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvConcatExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvPlusExpr
 * Signature: (JIJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvPlusExpr
  (JNIEnv *, jclass, jlong, jint, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvMinusExpr
 * Signature: (JIJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvMinusExpr
  (JNIEnv *, jclass, jlong, jint, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvMultExpr
 * Signature: (JIJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvMultExpr
  (JNIEnv *, jclass, jlong, jint, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvDivExpr
 * Signature: (JIJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvDivExpr
  (JNIEnv *, jclass, jlong, jint, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvModExpr
 * Signature: (JIJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvModExpr
  (JNIEnv *, jclass, jlong, jint, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_sbvDivExpr
 * Signature: (JIJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1sbvDivExpr
  (JNIEnv *, jclass, jlong, jint, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_sbvModExpr
 * Signature: (JIJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1sbvModExpr
  (JNIEnv *, jclass, jlong, jint, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_sbvRemExpr
 * Signature: (JIJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1sbvRemExpr
  (JNIEnv *, jclass, jlong, jint, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvPlusExprN
 * Signature: (JI[JI)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvPlusExprN
  (JNIEnv *, jclass, jlong, jint, jlongArray, jint);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvLtExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvLtExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvLeExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvLeExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvGtExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvGtExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvGeExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvGeExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_sbvLtExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1sbvLtExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_sbvLeExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1sbvLeExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_sbvGtExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1sbvGtExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_sbvGeExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1sbvGeExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvUMinusExpr
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvUMinusExpr
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvAndExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvAndExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvOrExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvOrExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvXorExpr
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvXorExpr
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvNotExpr
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvNotExpr
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvLeftShiftExprExpr
 * Signature: (JIJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvLeftShiftExprExpr
  (JNIEnv *, jclass, jlong, jint, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvRightShiftExprExpr
 * Signature: (JIJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvRightShiftExprExpr
  (JNIEnv *, jclass, jlong, jint, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_bvSignedRightShiftExprExpr
 * Signature: (JIJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_zhekehz_stpjava_Native_vc_1bvSignedRightShiftExprExpr
  (JNIEnv *, jclass, jlong, jint, jlong, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    vc_Destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_zhekehz_stpjava_Native_vc_1Destroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zhekehz_stpjava_Native
 * Method:    isConst
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_zhekehz_stpjava_Native_isConst
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
