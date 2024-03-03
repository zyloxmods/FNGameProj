#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CosmeticPreviewInterface.h"
#include "EFortCustomCharmType.h"
#include "FortOnCameraFrameTargetSettingsChangedDelegateDelegate.h"
#include "FortUICameraFrameTargetInterface.h"
#include "FortCharmPreviewActor.generated.h"

class AFortPlayerController;
class AFortPlayerPawn;
class UAthenaCharmItemDefinition;

UCLASS(Abstract, Blueprintable)
class AFortCharmPreviewActor : public AActor, public IFortUICameraFrameTargetInterface, public ICosmeticPreviewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCharmItemDefinition* MyCosmeticItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortCustomCharmType::Type> CharmSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortOnCameraFrameTargetSettingsChangedDelegate OnSettingsChangedDelegate;
    
public:
    AFortCharmPreviewActor();
protected:
    UFUNCTION(BlueprintCallable)
    void SetActiveCharmSlot(int32 CharmSlotIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviewCosmeticItem();
    
    UFUNCTION(BlueprintCallable)
    void ApplyMyCosmeticItemToHero(AFortPlayerPawn* PawnToModify, AFortPlayerController* FortPC);
    
    
    // Fix for true pure virtual functions not being implemented
};

