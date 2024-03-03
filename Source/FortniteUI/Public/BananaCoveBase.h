#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "BananaCoveBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBananaCoveBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UBananaCoveBase();
    UFUNCTION(BlueprintCallable)
    void CalculateBananaProgress();
    
};

