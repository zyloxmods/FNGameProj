#pragma once
#include "CoreMinimal.h"
#include "PlayerSquadMapping.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSquadMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TeamId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PartyId;
    
    FORTNITEGAME_API FPlayerSquadMapping();
};

