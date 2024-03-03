#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "FortAthenaMutator_SpawningPolicyEQS.h"
#include "MMRSpawningBotsRuntimeInfo.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_Bots.generated.h"

class AActor;
class AFortPlayerPawnAthena;
class UCompositeCurveTable;
class UCompositeDataTable;
class UDataTable;
class UFortAthenaAIBotCustomizationData;
class UFortAthenaMutator_PlayerBotSpawningPolicyData;

UCLASS(Blueprintable)
class AFortAthenaMutator_Bots : public AFortAthenaMutator_SpawningPolicyEQS {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortAthenaMutator_PlayerBotSpawningPolicyData>> BotSpawningDataItemClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBotHostileToHumanPlayersOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotCustomizationData* CacheBotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> MMRSpawnSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> OverrideTableInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> ABTestOverrideTableInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> AllPossibleOverrideTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAthenaMutator_PlayerBotSpawningPolicyData*> BotSpawningDataItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMMRSpawningBotsRuntimeInfo CachedMMRSpawningInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnInAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinHeightFromGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAroundBotDistanceToSearchPOIToLand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OverridePOISpreadingSquadCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCompositeCurveTable* CacheCompositeCurveTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCompositeDataTable* CacheCompositeDataTable;
    
public:
    AFortAthenaMutator_Bots();
    UFUNCTION(BlueprintCallable)
    AFortPlayerPawnAthena* SpawnBot(TSubclassOf<AFortPlayerPawnAthena> BotPawnClass, const AActor* InSpawnLocator, const FVector InSpawnLocation, const FRotator InSpawnRotation, const bool bSnapToGround);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSafeZoneUpdated();
    
};

