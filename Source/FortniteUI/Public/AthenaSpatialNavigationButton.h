#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "GameplayTagContainer.h"
#include "AthenaSpatialNavigationButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpatialNavigationButton : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CameraTagToNavigateTo;
    
public:
    UAthenaSpatialNavigationButton();
};

