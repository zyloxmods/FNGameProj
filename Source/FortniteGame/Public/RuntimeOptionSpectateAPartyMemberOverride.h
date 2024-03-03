#pragma once
#include "CoreMinimal.h"
#include "RuntimeOptionSpectateAPartyMemberOverride.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeOptionSpectateAPartyMemberOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    FORTNITEGAME_API FRuntimeOptionSpectateAPartyMemberOverride();
};

