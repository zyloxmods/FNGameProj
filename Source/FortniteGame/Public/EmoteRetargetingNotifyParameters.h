#pragma once
#include "CoreMinimal.h"
#include "EFortHandIKOverrideType.h"
#include "EFortPlayerAnimBodyType.h"
#include "EmoteRetargetingNotifyParameters.generated.h"

USTRUCT(BlueprintType)
struct FEmoteRetargetingNotifyParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayerAnimBodyType BodyTypeToAffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortHandIKOverrideType LeftHandIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortHandIKOverrideType RightHandIK;
    
    FORTNITEGAME_API FEmoteRetargetingNotifyParameters();
};

