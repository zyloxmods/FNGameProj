#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortClientOnlyActor.h"
#include "FortLightningActor.generated.h"

class AActor;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AFortLightningActor : public AFortClientOnlyActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBoltMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBoltWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoltMaterialParamTopPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoltMaterialParamBottomPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorToNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> BoltLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> BoltMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> BoltMIDs;
    
public:
    AFortLightningActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLightingInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLightingCleanup();
    
    UFUNCTION(BlueprintCallable)
    void InitializeLightning(AActor* InActorToNotify);
    
    UFUNCTION(BlueprintCallable)
    void GenerateBoltLocations(const FVector& StartLocation, const FVector& EndLocation, float MinLength, float MaxLength, float RandomVectorContribution, float MinSizeDecayRate, float MaxSizeDecayRate, float FalloffMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void CleanupLightning();
    
};

