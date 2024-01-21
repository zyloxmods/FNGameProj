#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HomebaseSquad.h"
#include "ManagerSynergyData.h"
#include "Templates/SubclassOf.h"
#include "WorkerPersonalityData.h"
#include "WorkerSetBonusData.h"
#include "FortHomebaseManager.generated.h"

class UCurveTable;
class UDataTable;
class UFortHomebaseNodeGameplayEffectDataTable;
class UFortHomebaseNodeItemDefinition;
class UFortMcpProfileCampaign;
class UFortMcpProfileCommonPublic;
class UFortWorker;
class UGameplayEffect;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortHomebaseManager : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHomebaseNodeGameplayEffectDataTable* HomebaseNodeGameplayEffectDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveTable* ResearchSystemUpgradesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> StatsGamplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HomebaseSquadDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ExpeditionSlotsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveTable* ManagerSquadSynergyBonusTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> SquadGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorkerPersonalityData> WorkerPersonalities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorkerSetBonusData> WorkerSetBonuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FManagerSynergyData> ManagerSynergies;
    
    UFortHomebaseManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSquadSlotUnlocked(FName SquadId, int32 SlotIdx, const UFortMcpProfileCampaign* McpProfile) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorker* GetWorkerInSquadSlot(FName SquadId, int32 SlotIdx, const UFortMcpProfileCampaign* McpProfile) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSquadPopulation(FName SquadId, const UFortMcpProfileCampaign* McpProfile, TArray<UFortWorker*>& OutSquadMembers) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSquadCopyById(FName SquadId, FHomebaseSquad& OutSquad);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumWorldInventoryBonusTokens(UFortMcpProfileCampaign* McpProfile);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumAccountLimitedItems(UFortMcpProfileCampaign* McpProfile);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumAccountInventoryBonusTokens(UFortMcpProfileCampaign* McpProfile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetNodeInstanceIdByNodeId(const FString& NodeTemplateId, const UFortMcpProfileCampaign* McpProfile) const;
    
    UFUNCTION(BlueprintCallable)
    static FString GetHomebaseName(const UFortMcpProfileCommonPublic* McpProfile);
    
    UFUNCTION(BlueprintCallable)
    bool AreNodeCostsMet(const UFortHomebaseNodeItemDefinition* NodeItemDef, UFortMcpProfileCampaign* McpProfile, int32 Level);
    
};

