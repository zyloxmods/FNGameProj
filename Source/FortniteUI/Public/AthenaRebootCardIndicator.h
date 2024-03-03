#pragma once
#include "CoreMinimal.h"
#include "AthenaMarkedActorIndicator.h"
#include "AthenaRebootCardIndicator.generated.h"

class UCommonTextBlock;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaRebootCardIndicator : public UAthenaMarkedActorIndicator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_PlayerMarker;
    
public:
    UAthenaRebootCardIndicator();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupCountdown(float StartTimeLocalWorld, float EndTimeLocalWorld);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDisplayForSelf(bool bSelf);
    
};

