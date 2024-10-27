///
/// HybridNativePlatformSpec.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A Swift protocol representing the NativePlatform HybridObject.
 * Implement this protocol to create Swift-based instances of NativePlatform.
 *
 * When implementing this protocol, make sure to initialize `hybridContext` - example:
 * ```
 * public class HybridNativePlatform : HybridNativePlatformSpec {
 *   // Initialize HybridContext
 *   var hybridContext = margelo.nitro.HybridContext()
 *
 *   // Return size of the instance to inform JS GC about memory pressure
 *   var memorySize: Int {
 *     return getSizeOf(self)
 *   }
 *
 *   // ...
 * }
 * ```
 */
public protocol HybridNativePlatformSpec: AnyObject, HybridObjectSpec {
  // Properties
  

  // Methods
  func getInsets() throws -> Insets
  func getColorScheme() throws -> ColorScheme
  func getFontScale() throws -> Double
  func getPixelRatio() throws -> Double
  func getOrientation() throws -> Orientation
  func getContentSizeCategory() throws -> String
  func getScreenDimensions() throws -> Dimensions
  func getStatusBarDimensions() throws -> Dimensions
  func getNavigationBarDimensions() throws -> Dimensions
  func getPrefersRtlDirection() throws -> Bool
  func setRootViewBackgroundColor(color: Double) throws -> Void
  func setNavigationBarBackgroundColor(color: Double) throws -> Void
  func setNavigationBarHidden(isHidden: Bool) throws -> Void
  func setStatusBarHidden(isHidden: Bool) throws -> Void
  func setStatusBarBackgroundColor(color: Double) throws -> Void
  func setImmersiveMode(isEnabled: Bool) throws -> Void
  func getMiniRuntime() throws -> UnistylesNativeMiniRuntime
  func registerPlatformListener(callback: @escaping ((_ dependencies: [UnistyleDependency]) -> Void)) throws -> Void
  func registerImeListener(callback: @escaping (() -> Void)) throws -> Void
}
