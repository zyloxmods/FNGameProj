#pragma once
#include "CoreMinimal.h"
#include "FortShowdownDetailView.h"
#include "FortShowdownPin.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortShowdownPin : public UFortShowdownDetailView {
    GENERATED_BODY()
public:
    UFortShowdownPin();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreToDisplay(bool bUseBestPin) const;
    
};

