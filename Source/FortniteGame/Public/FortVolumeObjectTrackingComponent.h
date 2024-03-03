#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FortCreativeBudget.h"
#include "FortCreativeBudgetTracker.h"
#include "FortCreativeClassInstanceTracker.h"
#include "ObjectTracker_Legacy.h"
#include "FortVolumeObjectTrackingComponent.generated.h"

class AActor;
class AFortVolume;
class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortVolumeObjectTrackingComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortVolume* ParentVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortCreativeClassInstanceTracker TransientTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectTracker_Legacy ObjectTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BudgetTracker, meta=(AllowPrivateAccess=true))
    FFortCreativeBudgetTracker BudgetTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortCreativeClassInstanceTracker ClassTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bRunNewVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHeatmapEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHeatmapIsDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ObjectTrackingHeatmapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseHeatmapHighPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=On_RepObjectTrackingHeatmap, meta=(AllowPrivateAccess=true))
    TArray<uint8> ObjectTrackingHeatmap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=On_RepObjectTrackingHeatmap, meta=(AllowPrivateAccess=true))
    TArray<uint8> ObjectTrackingHeatmapHighPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ThermalGroupMatrixSizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ThermalGroupMatrixSizeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<uint8> ThermalGroupCostMatrix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastHeatmapUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SpatialInfluenceDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeBudget> SpatialBudgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SpatialThermometerCellSize;
    
public:
    UFortVolumeObjectTrackingComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateVolumeInformation();
    
    UFUNCTION(BlueprintCallable)
    void RemoveActor(AActor* Actor, UActorComponent* ActorComponent, APawn* InstigatorPawn, AFortVolume* Volume);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_BudgetTracker();
    
    UFUNCTION(BlueprintCallable)
    void On_RepObjectTrackingHeatmap();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddActorAtLocation(AActor* Actor, const FVector& Location);
    
};

