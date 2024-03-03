#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortOnCameraFrameTargetSettingsChangedDelegateDelegate.h"
#include "FortUICameraFrameTargetInterface.h"
#include "FortBodyPartOverridePreviewActor.generated.h"

class AFortPlayerController;
class AFortPlayerPawn;
class UAthenaCharacterPartItemDefinition;

UCLASS(Abstract, Blueprintable)
class AFortBodyPartOverridePreviewActor : public AActor, public IFortUICameraFrameTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCharacterPartItemDefinition* MyCosmeticItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortOnCameraFrameTargetSettingsChangedDelegate OnSettingsChangedDelegate;
    
public:
    AFortBodyPartOverridePreviewActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviewCosmeticItem();
    
    UFUNCTION(BlueprintCallable)
    void ApplyMyCosmeticItemToHero(AFortPlayerPawn* PawnToModify, AFortPlayerController* FortPC);
    
    
    // Fix for true pure virtual functions not being implemented
};

