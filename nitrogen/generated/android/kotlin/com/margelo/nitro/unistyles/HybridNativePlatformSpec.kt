///
/// HybridNativePlatformSpec.kt
/// Wed Aug 21 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

package com.margelo.nitro.unistyles

import android.util.Log
import androidx.annotation.Keep
import com.facebook.jni.HybridData
import com.facebook.proguard.annotations.DoNotStrip
import com.margelo.nitro.HybridObject

/**
 * A Kotlin class representing the NativePlatform HybridObject.
 * Implement this abstract class to create Kotlin-based instances of NativePlatform.
 */
@DoNotStrip
@Keep
abstract class HybridNativePlatformSpec: HybridObject() {
  protected val TAG = "HybridNativePlatformSpec"

  // Properties
  

  // Methods
  @DoNotStrip
  @Keep
  abstract fun getInsets(): com.margelo.nitro.unistyles.Insets
  
  @DoNotStrip
  @Keep
  abstract fun getColorScheme(): com.margelo.nitro.unistyles.ColorScheme
  
  @DoNotStrip
  @Keep
  abstract fun getFontScale(): Double
  
  @DoNotStrip
  @Keep
  abstract fun getPixelRatio(): Double
  
  @DoNotStrip
  @Keep
  abstract fun getContentSizeCategory(): String
  
  @DoNotStrip
  @Keep
  abstract fun getScreenDimensions(): com.margelo.nitro.unistyles.Dimensions
  
  @DoNotStrip
  @Keep
  abstract fun getStatusBarDimensions(): com.margelo.nitro.unistyles.Dimensions
  
  @DoNotStrip
  @Keep
  abstract fun getNavigationBarDimensions(): com.margelo.nitro.unistyles.Dimensions
  
  @DoNotStrip
  @Keep
  abstract fun getPrefersRtlDirection(): Boolean
  
  @DoNotStrip
  @Keep
  abstract fun setRootViewBackgroundColor(hex: String?, alpha: Double?): Unit
  
  @DoNotStrip
  @Keep
  abstract fun setNavigationBarBackgroundColor(hex: String?, alpha: Double?): Unit
  
  @DoNotStrip
  @Keep
  abstract fun setNavigationBarHidden(isHidden: Boolean): Unit
  
  @DoNotStrip
  @Keep
  abstract fun setStatusBarBackgroundColor(hex: String?, alpha: Double?): Unit
  
  @DoNotStrip
  @Keep
  abstract fun setImmersiveMode(isEnabled: Boolean): Unit

  companion object {
    private const val TAG = "HybridNativePlatformSpec"
    init {
      try {
        Log.i(TAG, "Loading unistyles C++ library...")
        System.loadLibrary("unistyles")
        Log.i(TAG, "Successfully loaded unistyles C++ library!")
      } catch (e: Error) {
        Log.e(TAG, "Failed to load unistyles C++ library! Is it properly installed and linked? " +
                    "Is the name correct? (see `CMakeLists.txt`, at `add_library(...)`)", e)
        throw e
      }
    }
  }
}
