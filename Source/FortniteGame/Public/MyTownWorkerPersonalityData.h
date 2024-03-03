#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MyTownWorkerGenderData.h"
#include "MyTownWorkerPersonalityData.generated.h"

USTRUCT(BlueprintType)
struct FMyTownWorkerPersonalityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PersonalityTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PersonalityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMyTownWorkerGenderData> GenderData;
    
    FORTNITEGAME_API FMyTownWorkerPersonalityData();
};

