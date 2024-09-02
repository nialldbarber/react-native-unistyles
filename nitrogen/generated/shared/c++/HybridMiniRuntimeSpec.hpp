///
/// HybridMiniRuntimeSpec.hpp
/// Mon Sep 02 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declaration of `ColorScheme` to properly resolve imports.
namespace margelo::nitro::unistyles { enum class ColorScheme; }
// Forward declaration of `Dimensions` to properly resolve imports.
namespace margelo::nitro::unistyles { struct Dimensions; }
// Forward declaration of `Insets` to properly resolve imports.
namespace margelo::nitro::unistyles { struct Insets; }
// Forward declaration of `Orientation` to properly resolve imports.
namespace margelo::nitro::unistyles { enum class Orientation; }

#include "ColorScheme.hpp"
#include "Dimensions.hpp"
#include <optional>
#include <string>
#include "Insets.hpp"
#include "Orientation.hpp"

namespace margelo::nitro::unistyles {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `MiniRuntime`
   * Inherit this class to create instances of `HybridMiniRuntimeSpec` in C++.
   * @example
   * ```cpp
   * class HybridMiniRuntime: public HybridMiniRuntimeSpec {
   *   // ...
   * };
   * ```
   */
  class HybridMiniRuntimeSpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridMiniRuntimeSpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridMiniRuntimeSpec() { }

    public:
      // Properties
      virtual ColorScheme getColorScheme() = 0;
      virtual bool getHasAdaptiveThemes() = 0;
      virtual Dimensions getScreen() = 0;
      virtual std::optional<std::string> getThemeName() = 0;
      virtual std::string getContentSizeCategory() = 0;
      virtual std::optional<std::string> getBreakpoint() = 0;
      virtual Insets getInsets() = 0;
      virtual Orientation getOrientation() = 0;
      virtual double getPixelRatio() = 0;
      virtual double getFontScale() = 0;
      virtual bool getRtl() = 0;
      virtual Dimensions getStatusBar() = 0;
      virtual Dimensions getNavigationBar() = 0;

    public:
      // Methods
      

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "MiniRuntime";
  };

} // namespace margelo::nitro::unistyles
