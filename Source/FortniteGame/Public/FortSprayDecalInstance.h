#pragma once
#include "CoreMinimal.h"
#include "BuildingSMActor.h"
#include "FortSprayDecalRepPayload.h"
#include "FortSprayDecalInstance.generated.h"

class AFortPlayerController;
class UAthenaSprayItemDefinition;
class UMaterialInstanceDynamic;

UCLASS(Abstract, Blueprintable)
class AFortSprayDecalInstance : public ABuildingSMActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_SprayInfo, meta=(AllowPrivateAccess=true))
    FFortSprayDecalRepPayload SprayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyOnNearbyDestruction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyOnNearbyDamageTaken: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyOnNearbyBounce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> SprayMIDsThatCanBounce;
    
public:
    AFortSprayDecalInstance();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartSprayFadeOutDueToNewPlacement();
    
    UFUNCTION(BlueprintCallable)
    void SetSprayParameters(AFortPlayerController* SpawningPC, UAthenaSprayItemDefinition* InSprayAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnSprayInfoReady();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SprayInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBounceOccurs();
    
};

