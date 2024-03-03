#include "MobileHUDVisual.h"

FGameplayTag UMobileHUDVisual::GetVisualType() const {
    return FGameplayTag{};
}

UMobileHUDVisual::UMobileHUDVisual() {
    this->Opacity = 1;
}

