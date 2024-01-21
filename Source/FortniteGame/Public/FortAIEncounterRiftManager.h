#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AI/Navigation/NavAgentInterface.h"
#include "EncounterEnvironmentQueryInfo.h"
#include "FortAIEncounterInfoOwnerInterface.h"
#include "FortAIEncounterQueryDirectionTracker.h"
#include "FortAIEncounterSpawnArea.h"
#include "FortEncounterSettings.h"
#include "Templates/SubclassOf.h"
#include "FortAIEncounterRiftManager.generated.h"

class ABuildingRift;
class AFortAIDirector;
class AFortMission;
class UFortAIEncounterInfo;

UCLASS(Blueprintable)
class UFortAIEncounterRiftManager : public UObject, public INavAgentInterface, public IFortAIEncounterInfoOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAIEncounterInfo* MyEncounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAIDirector* AIDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIEncounterSpawnArea CurrentSpawnArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIEncounterSpawnArea FutureSpawnArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateIntervalTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRiftsToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinRiftsToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEncounterSettings EncounterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraSpawnLocationPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterEnvironmentQueryInfo CurrentEnvironmentQueryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterEnvironmentQueryInfo FallbackEnvironmentQueryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIEncounterQueryDirectionTracker EncounterQueryDirectionTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingRift> RiftClassTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastObjectiveBatchPathCostUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastPlayerBatchPathCostUpdateTime;
    
    UFortAIEncounterRiftManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortMission* GetAssociatedMission() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UFortAIEncounterInfo* GetEncounterInfo() const override PURE_VIRTUAL(GetEncounterInfo, return NULL;);
    
};

