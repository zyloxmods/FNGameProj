#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortOnCameraFrameTargetSettingsChangedDelegateDelegate.h"
#include "FortUICameraFrameTargetInterface.h"
#include "FortFallbackCameraFrameTargetProxy.generated.h"

class UFortItem;
class USceneComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortFallbackCameraFrameTargetProxy : public UObject, public IFortUICameraFrameTargetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortOnCameraFrameTargetSettingsChangedDelegate OnSettingsChangedDelegate;
    
public:
    UFortFallbackCameraFrameTargetProxy();
    UFUNCTION(BlueprintCallable)
    void SetItemToRepresent(const UFortItem* ItemToRepresent, const USceneComponent* ComponentToView);
    
    
    // Fix for true pure virtual functions not being implemented
};

