#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WorkerGenderData.h"
#include "WorkerPersonalityData.generated.h"

USTRUCT(BlueprintType)
struct FWorkerPersonalityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PersonalityTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PersonalityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorkerGenderData> GenderData;
    
    FORTNITEGAME_API FWorkerPersonalityData();
};

