#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "EBuildingAttachmentType.h"
#include "FortWeapon.h"
#include "FortDecoTool.generated.h"

class AActor;
class ABuildingSMActor;
class AFortDecoHelper;
class UFortItemDefinition;
class UParticleSystem;

UCLASS(Blueprintable)
class AFortDecoTool : public AFortWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bButtonDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ItemDefinition, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortDecoHelper* DecoHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CarriedActor, meta=(AllowPrivateAccess=true))
    AActor* CarriedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlaceCarriedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> SpawnEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventExecutionOnOwningPlayerFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEquipped;
    
public:
    AFortDecoTool();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool TryToPlace();
    
    UFUNCTION(BlueprintCallable)
    void SetHelper(AFortDecoHelper* InHelper);
    
    UFUNCTION(BlueprintCallable)
    void SetDecoObjectPreview(const UFortItemDefinition* InItemDefinition, bool bUpdatePreviewPosition);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnDeco(FVector Location, FRotator Rotation, ABuildingSMActor* AttachedActor, EBuildingAttachmentType InBuildingAttachmentType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreateBuildingAndSpawnDeco(FVector_NetQuantize10 BuildingLocation, FRotator BuildingRotation, FVector_NetQuantize10 Location, FRotator Rotation, EBuildingAttachmentType InBuildingAttachmentType);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnUnEquip();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemDefinition();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CarriedActor(AActor* OldCarriedActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCarriedActorDestroyed(AActor* DestroyedActor);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDestroyDecoPreview();
    
};

