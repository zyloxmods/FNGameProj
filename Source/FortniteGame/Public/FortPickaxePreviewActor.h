#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CosmeticPreviewInterface.h"
#include "FortOnCameraFrameTargetSettingsChangedDelegateDelegate.h"
#include "FortUICameraFrameTargetInterface.h"
#include "McpVariantChannelInfo.h"
#include "FortPickaxePreviewActor.generated.h"

class AFortWeapon;
class UAnimMontage;
class UAthenaPickaxeItemDefinition;

UCLASS(Blueprintable)
class AFortPickaxePreviewActor : public AActor, public IFortUICameraFrameTargetInterface, public ICosmeticPreviewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageToPlayForSwinging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaPickaxeItemDefinition* CosmeticPickaxeItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> PreviewVariantChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortWeapon* WeaponActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortOnCameraFrameTargetSettingsChangedDelegate OnSettingsChangedDelegate;
    
public:
    AFortPickaxePreviewActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewPickaxeVariantsApplied(const UAthenaPickaxeItemDefinition* Pickaxe);
    
    
    // Fix for true pure virtual functions not being implemented
};

