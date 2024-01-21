#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "VisibilityInfo.h"
#include "VisibiltyInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FVisibiltyInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVisibilityInfo> VisibilityInfoArray;
    
    FORTNITEGAME_API FVisibiltyInfoArray();
};

