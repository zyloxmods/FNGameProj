#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "IndicatedActorInfoEntry.h"
#include "IndicatedActorInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FIndicatedActorInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIndicatedActorInfoEntry> Entries;
    
    FORTNITEGAME_API FIndicatedActorInfoArray();
};

