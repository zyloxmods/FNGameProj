#pragma once
#include "CoreMinimal.h"
#include "FortActionKeyMapping.h"
#include "UserActionBindings.generated.h"

USTRUCT(BlueprintType)
struct FUserActionBindings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortActionKeyMapping> UserActionBindings;
    
    FORTNITEGAME_API FUserActionBindings();
};

