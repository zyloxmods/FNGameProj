#pragma once
#include "CoreMinimal.h"
#include "EFortCustomGender.h"
#include "MyTownWorkerPortraitData.h"
#include "MyTownWorkerGenderData.generated.h"

USTRUCT(BlueprintType)
struct FMyTownWorkerGenderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCustomGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMyTownWorkerPortraitData> PotraitData;
    
    FORTNITEGAME_API FMyTownWorkerGenderData();
};

