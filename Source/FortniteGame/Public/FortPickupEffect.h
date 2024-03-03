#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FortPickupEffect.generated.h"

class AFortPawn;
class UFortAlterationItemDefinition;
class UFortWorldItemDefinition;
class UMaterialInstanceDynamic;
class UMeshComponent;
class USkeletalMesh;
class USoundBase;
class UStaticMesh;

UCLASS(Blueprintable)
class AFortPickupEffect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAlterationItemDefinition*> ActiveAlterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotShowSpawnParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotTickSkeletalMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PickupColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackpackWorldPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bOwnedByALocalPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bOwnedByPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PickupByNearbyPawnSound;
    
    AFortPickupEffect();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTossed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPickedUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttached();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAboutToEnterBackpack(AFortPawn* PickupTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableBacchusHighlight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableBacchusHighlight();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* ApplyCosmeticOverridesToMaterial(UMeshComponent* MeshComponent, int32 MatIndex);
    
};

