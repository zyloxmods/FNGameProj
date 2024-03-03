#pragma once
#include "CoreMinimal.h"
#include "EHeistExitCraftIconState.h"
#include "HeistExitCraftIconData.generated.h"

USTRUCT(BlueprintType)
struct FHeistExitCraftIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeistExitCraftIconState IconState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeistExitCraftIconState PrevIconState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondsUntilIncoming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeamHasBling;
    
    FORTNITEUI_API FHeistExitCraftIconData();
};

