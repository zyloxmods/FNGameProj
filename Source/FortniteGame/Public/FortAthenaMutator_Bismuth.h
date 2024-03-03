#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "EDeathCause.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_Bismuth.generated.h"

class AActor;
class AAthenaBismuthSpawner;
class AController;
class AFortPlayerPawnAthena;
class UEnvQuery;
class UFortAthenaAIBotCustomizationData;
class UGameplayEffect;
class UPrimitiveComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_Bismuth : public AFortAthenaMutator_GameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotCustomizationData* BotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumOfBotsToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AIBotsHostileToEachOther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BotTeamStartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEnvQuery> SpawnersSelectionQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinimumDistanceBetweenSpawners2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ReflectKillDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ReflectDeathReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDeathCause> ValidDeathReasons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ReflectGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> InitiateGameplayEffect;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAthenaBismuthSpawner*> BismuthSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawnAthena*> BismuthAIBots;
    
public:
    AFortAthenaMutator_Bismuth();
private:
    UFUNCTION(BlueprintCallable)
    void ReflectEliminatePlayer(AFortPlayerPawnAthena* PlayerPawn);
    
    UFUNCTION(BlueprintCallable)
    void AIBotPawnDeath(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
};

