#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SpecialActorRepData.h"
#include "SpecialActorRepDataArray.generated.h"

USTRUCT(BlueprintType)
struct FSpecialActorRepDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialActorRepData> SpecialActorList;
    
    FORTNITEGAME_API FSpecialActorRepDataArray();
};

