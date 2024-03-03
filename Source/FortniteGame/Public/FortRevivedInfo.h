#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortRevivedInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortRevivedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector RevivedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString ReviverUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 ReviverTeam;
    
    FORTNITEGAME_API FFortRevivedInfo();
};

