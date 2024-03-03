#pragma once
#include "CoreMinimal.h"
#include "AlterationWeightData.generated.h"

USTRUCT(BlueprintType)
struct FAlterationWeightData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialRollWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ExclusionNames;
    
    FORTNITEGAME_API FAlterationWeightData();
};

