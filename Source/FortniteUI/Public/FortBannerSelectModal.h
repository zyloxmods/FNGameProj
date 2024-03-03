#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortBannerSelectModal.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBannerSelectModal : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortBannerSelectModal();
};

