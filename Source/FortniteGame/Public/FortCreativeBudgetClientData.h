#pragma once
#include "CoreMinimal.h"
#include "CreativeActorId.h"
#include "CreativeActorMetaData.h"
#include "FortCreativeBudgetClientData.generated.h"

USTRUCT(BlueprintType)
struct FFortCreativeBudgetClientData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreativeActorId> ActorIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreativeActorMetaData> ActorMetaData;
    
    FORTNITEGAME_API FFortCreativeBudgetClientData();
};

