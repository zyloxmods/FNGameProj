#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WorkerGenderData.h"
#include "ManagerSynergyData.generated.h"

USTRUCT(BlueprintType)
struct FManagerSynergyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SynergyTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorkerGenderData> GenderData;
    
    FORTNITEGAME_API FManagerSynergyData();
};

