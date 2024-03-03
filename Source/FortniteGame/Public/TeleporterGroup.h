#pragma once
#include "CoreMinimal.h"
#include "TeleporterGroup.generated.h"

class AFortCreativeTeleporter;

USTRUCT(BlueprintType)
struct FTeleporterGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AFortCreativeTeleporter*> Teleporters;
    
    FORTNITEGAME_API FTeleporterGroup();
};

