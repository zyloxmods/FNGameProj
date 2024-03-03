#pragma once
#include "CoreMinimal.h"
#include "EFortCustomGender.h"
#include "WorkerPortraitData.h"
#include "WorkerGenderData.generated.h"

USTRUCT(BlueprintType)
struct FWorkerGenderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCustomGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorkerPortraitData> PotraitData;
    
    FORTNITEGAME_API FWorkerGenderData();
};

