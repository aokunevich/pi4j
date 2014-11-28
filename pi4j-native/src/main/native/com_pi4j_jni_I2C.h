/*
 * #%L
 * **********************************************************************
 * ORGANIZATION  :  Pi4J
 * PROJECT       :  Pi4J :: JNI Native Library
 * FILENAME      :  com_pi4j_jni_I2C.h  
 * 
 * This file is part of the Pi4J project. More information about 
 * this project can be found here:  http://www.pi4j.com/
 * **********************************************************************
 * %%
 * Copyright (C) 2012 - 2014 Pi4J
 * %%
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * #L%
 */
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_pi4j_jni_I2C */

#ifndef _Included_com_pi4j_jni_I2C
#define _Included_com_pi4j_jni_I2C
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_pi4j_jni_I2C
 * Method:    i2cOpen
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_I2C_i2cOpen
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_pi4j_jni_I2C
 * Method:    i2cClose
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_I2C_i2cClose
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_jni_I2C
 * Method:    i2cWriteByteDirect
 * Signature: (IIB)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_I2C_i2cWriteByteDirect
  (JNIEnv *, jclass, jint, jint, jbyte);

/*
 * Class:     com_pi4j_jni_I2C
 * Method:    i2cWriteBytesDirect
 * Signature: (IIII[B)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_I2C_i2cWriteBytesDirect
  (JNIEnv *, jclass, jint, jint, jint, jint, jbyteArray);

/*
 * Class:     com_pi4j_jni_I2C
 * Method:    i2cWriteByte
 * Signature: (IIIB)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_I2C_i2cWriteByte
  (JNIEnv *, jclass, jint, jint, jint, jbyte);

/*
 * Class:     com_pi4j_jni_I2C
 * Method:    i2cWriteBytes
 * Signature: (IIIII[B)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_I2C_i2cWriteBytes
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jbyteArray);

/*
 * Class:     com_pi4j_jni_I2C
 * Method:    i2cReadByteDirect
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_I2C_i2cReadByteDirect
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_jni_I2C
 * Method:    i2cReadBytesDirect
 * Signature: (IIII[B)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_I2C_i2cReadBytesDirect
  (JNIEnv *, jclass, jint, jint, jint, jint, jbyteArray);

/*
 * Class:     com_pi4j_jni_I2C
 * Method:    i2cReadByte
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_I2C_i2cReadByte
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_pi4j_jni_I2C
 * Method:    i2cReadBytes
 * Signature: (IIIII[B)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_I2C_i2cReadBytes
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jbyteArray);

/*

/*
Class:     com_pi4j_jni_I2C
Method:    i2cWriteAndReadBytes
Signature: (IIII[BII[B)I
*/
JNIEXPORT jint JNICALL Java_com_pi4j_jni_I2C_i2cWriteAndReadBytes
  (JNIEnv *, jobject, jint, jint, jint, jint, jbyteArray, jint, jint, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
