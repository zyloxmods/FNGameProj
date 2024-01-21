#pragma once
#include "CoreMinimal.h"
#include "EFortRuntimeOptionTabState.h"
#include "RuntimeOptionTabStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FRuntimeOptionTabStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRuntimeOptionTabState TabState;
    
    FRuntimeOptionTabStateInfo();
};

