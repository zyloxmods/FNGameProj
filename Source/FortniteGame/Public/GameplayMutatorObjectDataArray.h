#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GameplayMutatorObjectData.h"
#include "GameplayMutatorObjectDataArray.generated.h"

USTRUCT(BlueprintType)
struct FGameplayMutatorObjectDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayMutatorObjectData> ObjectDataList;
    
    FORTNITEGAME_API FGameplayMutatorObjectDataArray();
};

