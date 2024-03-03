#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaLivingWorldEventDataActorSpawnDescription.generated.h"

class AActor;
class UFortAthenaAISpawnerData;

USTRUCT(BlueprintType)
struct FFortAthenaLivingWorldEventDataActorSpawnDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortAthenaAISpawnerData> SpawnerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery SpawnerDataTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseProviderTagOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ProviderFiltersTagQueryOverride;
    
    LAGERRUNTIME_API FFortAthenaLivingWorldEventDataActorSpawnDescription();
};

