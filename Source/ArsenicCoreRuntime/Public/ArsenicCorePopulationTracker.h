#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortPoiGridInfo.h"
#include "ArsenicCorePopulationGridCellData.h"
#include "ArsenicCorePopulationTracker.generated.h"

class AFortAthenaMutator_ArsenicCore;
class AFortPlayerStateAthena;

UCLASS(Blueprintable)
class ARSENICCORERUNTIME_API AArsenicCorePopulationTracker : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_ArsenicCore* ArsenicCoreMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortPoiGridInfo PopulationGridInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FArsenicCorePopulationGridCellData> PopulationGrid;
    
public:
    AArsenicCorePopulationTracker();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameMemberRemoved(uint8 InSquadId, uint8 InTeamIndex, AFortPlayerStateAthena* ChangedPS);
    
};

