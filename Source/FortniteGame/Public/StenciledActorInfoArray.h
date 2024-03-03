#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "StenciledActorInfoEntry.h"
#include "StenciledActorInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FStenciledActorInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStenciledActorInfoEntry> Entries;
    
    FORTNITEGAME_API FStenciledActorInfoArray();
};

