#pragma once
#include "CoreMinimal.h"
#include "ProfileGroupEntry.generated.h"

class UMcpProfileGroup;

USTRUCT(BlueprintType)
struct FProfileGroupEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMcpProfileGroup* ProfileGroup;
    
    MCPPROFILESYS_API FProfileGroupEntry();
};

