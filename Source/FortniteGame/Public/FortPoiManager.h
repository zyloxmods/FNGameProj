#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "FortPoiGridInfo.h"
#include "FortPoiVolumeGridCell.h"
#include "FortPoiManager.generated.h"

class AFortPoiVolume;

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API AFortPoiManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FortPoiGridInfo, meta=(AllowPrivateAccess=true))
    FFortPoiGridInfo FortPoiGridInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPoiVolume*> SmallTickUpdatedPoi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPoiVolume*> LargePoiVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPoiVolume*> PendingLargePoiVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPoiVolume*> NamedOnMapPoiVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPoiVolume*> AllPoiVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> POIsExcludedFromBeginGolden;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumTestsPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PoiTagContainerTable, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagContainer> PoiTagContainerTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PoiTagContainerTable, meta=(AllowPrivateAccess=true))
    int32 PoiTagContainerTableSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsReinitializingGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasInitalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoiGridPrevSizeForDebugDisplay;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_PoiGridForDebugDisplay, meta=(AllowPrivateAccess=true))
    TArray<int16> PoiGridForDebugDisplay;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int16> FortPoiGridCellsTagContainerTableIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPoiVolumeGridCell> FortPoiGridCellsLargeVolume;
    
public:
    AFortPoiManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PoiTagContainerTable();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PoiGridForDebugDisplay();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FortPoiGridInfo();
    
    UFUNCTION(BlueprintCallable)
    void ClientsideMinimalInitPostEventsReady(const TArray<FString>& NewEvents);
    
};

