#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortGetMcpTimeForPlayerNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortGetMcpTimeForPlayerNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime McpTime;
    
    FORTNITEGAME_API FFortGetMcpTimeForPlayerNotification();
};

