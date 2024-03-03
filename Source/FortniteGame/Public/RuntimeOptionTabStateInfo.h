#pragma once
#include "CoreMinimal.h"
#include "EFortRuntimeOptionTabState.h"
#include "EFortRuntimeOptionTabStateTarget.h"
#include "RuntimeOptionTabStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeOptionTabStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRuntimeOptionTabState TabState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRuntimeOptionTabStateTarget TargetPlayer;
    
    FORTNITEGAME_API FRuntimeOptionTabStateInfo();
};

