#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortHUDTargetUnderReticleInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UFortHUDTargetUnderReticleInterface : public UInterface {
    GENERATED_BODY()
};

class IFortHUDTargetUnderReticleInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FText GetHUDTargetUpgradeDisplayName() PURE_VIRTUAL(GetHUDTargetUpgradeDisplayName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual float GetHUDTargetHealthPercentage() PURE_VIRTUAL(GetHUDTargetHealthPercentage, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetHUDTargetDisplayName() PURE_VIRTUAL(GetHUDTargetDisplayName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FText> GetHUDTargetDisplayModifiers() PURE_VIRTUAL(GetHUDTargetDisplayModifiers, return TArray<FText>(););
    
    UFUNCTION(BlueprintCallable)
    virtual float GetHUDTargetDifficultyRating() PURE_VIRTUAL(GetHUDTargetDifficultyRating, return 0.0f;);
    
};

