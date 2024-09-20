///
/// JColorScheme.hpp
/// Thu Sep 12 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "ColorScheme.hpp"

namespace margelo::nitro::unistyles {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ enum "ColorScheme" and the the Kotlin enum "ColorScheme".
   */
  struct JColorScheme final: public jni::JavaClass<JColorScheme> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/unistyles/ColorScheme;";

  public:
    /**
     * Convert this Java/Kotlin-based enum to the C++ enum ColorScheme.
     */
    [[maybe_unused]]
    ColorScheme toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldOrdinal = clazz->getField<int>("ordinal");
      int ordinal = this->getFieldValue(fieldOrdinal);
      return static_cast<ColorScheme>(ordinal);
    }

  public:
    /**
     * Create a Java/Kotlin-based enum with the given C++ enum's value.
     */
    [[maybe_unused]]
    static jni::alias_ref<JColorScheme> fromCpp(ColorScheme value) {
      static const auto clazz = javaClassStatic();
      static const auto fieldDARK = clazz->getStaticField<JColorScheme>("DARK");
      static const auto fieldLIGHT = clazz->getStaticField<JColorScheme>("LIGHT");
      static const auto fieldUNSPECIFIED = clazz->getStaticField<JColorScheme>("UNSPECIFIED");
      
      switch (value) {
        case ColorScheme::DARK:
          return clazz->getStaticFieldValue(fieldDARK);
        case ColorScheme::LIGHT:
          return clazz->getStaticFieldValue(fieldLIGHT);
        case ColorScheme::UNSPECIFIED:
          return clazz->getStaticFieldValue(fieldUNSPECIFIED);
        default:
          std::string stringValue = std::to_string(static_cast<int>(value));
          throw std::runtime_error("Invalid enum value (" + stringValue + "!");
      }
    }
  };

} // namespace margelo::nitro::unistyles
