#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortHUDBuildingPossessionWidget.generated.h"

class ABuildingActor;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHUDBuildingPossessionWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DotImage;
    
public:
    UFortHUDBuildingPossessionWidget();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateOnBuildingFocused(ABuildingActor* FocusedBuilding);
    
};

