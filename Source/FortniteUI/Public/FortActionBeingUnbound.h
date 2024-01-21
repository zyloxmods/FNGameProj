#pragma once
#include "CoreMinimal.h"
#include "FortActionBeingUnbound.generated.h"

USTRUCT(BlueprintType)
struct FFortActionBeingUnbound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputIndex;
    
    FORTNITEUI_API FFortActionBeingUnbound();
};

