#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "UraniumRespawnWidget.generated.h"

class AFortPlayerStateAthena;
class UFortLazyImage;

UCLASS(Blueprintable, EditInlineNew)
class UUraniumRespawnWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
    UUraniumRespawnWidget();
    UFUNCTION(BlueprintCallable)
    void SetUpPlayerPortrait(UFortLazyImage* Image, const AFortPlayerStateAthena* PlayerState);
    
};

