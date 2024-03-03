#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ActiveGameplayModifierHandle.h"
#include "EFortCompletionResult.h"
#include "EHordeTierStartStatus.h"
#include "FortTierCollectionLayoutOutput.h"
#include "GameDifficultyInfo.h"
#include "TieredModifierSetData.h"
#include "FortDeployableBaseLibrary.generated.h"

class ADeployableBaseCore;
class AFortMission;
class AFortPlayerController;
class UFortTieredCollectionLayout;
class UFortWorldItemDefinition;
class UObject;

UCLASS(Blueprintable)
class UFortDeployableBaseLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortDeployableBaseLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateDeployableBaseTierProgressionForPlayers(UObject* WorldContextObject, const UFortTieredCollectionLayout* CollectionLayout, int32 TierDefeated);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetupDeployableBaseCombatZoneInventoriesOnPlayers(UObject* WorldContextObject, const TArray<FName>& TierGroups, const TArray<AFortPlayerController*>& PlayerControllers);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDeployableBaseMatchJoinability(UObject* WorldContextObject, bool bMatchJoinable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetDeployableBaseHordePlayerInventories(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OnPreHordeTierStart(UObject* WorldContextObject, int32 Tier, int32 ModifierRRVSeed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool IsWorldItemDefValidToPersistForDeployableBasePlayerInventory(const UFortWorldItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GrantPlayersCompletedWaveRewards(UObject* WorldContextObject, int32 Tier, int32 Wave, int32 NumberOfPlayers, const TArray<ADeployableBaseCore*>& TargetCores, const TArray<ADeployableBaseCore*>& AllCores, const FFortTierCollectionLayoutOutput& CollectionData, const TArray<FName>& TierGroups);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static void GetTieredModifierSet(FName TieredModifierSetName, TArray<FTieredModifierSetData>& OutModifierSetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortMission* GetPrimaryHordeMission(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EHordeTierStartStatus GetHordeTierStartStatus(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FGameDifficultyInfo GetGameDifficultyInfo(const FName RowName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ForceRestartDeployableBasePlayers(UObject* WorldContextObject, bool bRestartInvulnerable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ForceDeployableBaseHordePlayersToResetAndRespawn(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ForceClearAllDefenders(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BroadcastHordeTierComplete(UObject* WorldContextObject, EFortCompletionResult Result);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ApplyTieredModifierSet(UObject* WorldContextObject, const TArray<FTieredModifierSetData>& ModifierSetData, int32 Tier, int32 WaveNum, bool bDeferTemporaryModifiers, TArray<FActiveGameplayModifierHandle>& OutAppliedModifiers);
    
};

