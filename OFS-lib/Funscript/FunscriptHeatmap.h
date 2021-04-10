#pragma once
#include "GradientBar.h"
#include "FunscriptAction.h"

namespace OFS {
	void UpdateHeatmapGradient(float totalDurationMs , ImGradient& grad, const FunscriptArray& actions) noexcept;
}