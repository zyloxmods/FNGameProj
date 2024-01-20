#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FOBCoreChoice.h"
#include "FOBCoreChoiceArray.generated.h"

USTRUCT(BlueprintType)
struct FFOBCoreChoiceArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFOBCoreChoice> Items;
    
public:
    FORTNITEGAME_API FFOBCoreChoiceArray();
};

