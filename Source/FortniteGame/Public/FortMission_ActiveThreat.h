#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "FortActiveThreatPlayerData.h"
#include "FortEncounterSettings.h"
#include "FortMission.h"
#include "FortMission_ActiveThreat.generated.h"

class AFortAIPawn;
class UFortAIEncounterInfo;

UCLASS(Abstract, Blueprintable)
class AFortMission_ActiveThreat : public AFortMission {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartBasedOnAthenaGamePhases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaGamePhase StartingGamePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingActiveThreatEncounterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEncounterSettings EncounterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortActiveThreatPlayerData> PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SyncedEncounterStartingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentActiveThreatEncounterIndex;
    
public:
    AFortMission_ActiveThreat();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleAthenaGamePhaseChanged(EAthenaGamePhase GamePhase);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy);
    
};

