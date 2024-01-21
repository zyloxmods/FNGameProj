#pragma once
#include "CoreMinimal.h"
#include "EHeistBlingIconState.h"
#include "HeistBlingIconData.generated.h"

USTRUCT(BlueprintType)
struct FHeistBlingIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeistBlingIconState IconState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeistBlingIconState PrevIconState;
    
    FORTNITEUI_API FHeistBlingIconData();
};

