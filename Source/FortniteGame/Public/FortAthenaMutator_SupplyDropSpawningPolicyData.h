#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_SpawningPolicyData.h"
#include "FortAthenaMutator_SupplyDropSpawningPolicyData.generated.h"

class AFortGameStateAthena;
class UFortSupplyDropInfo;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaMutator_SupplyDropSpawningPolicyData : public UFortAthenaMutator_SpawningPolicyData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortSupplyDropInfo> SupplyDropInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* CachedGameState;
    
public:
    UFortAthenaMutator_SupplyDropSpawningPolicyData();
};

